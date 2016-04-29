// shortest.cpp : Defines the entry point for the console application.
//

#include "Pro_head.h"

/*
int create_graph(void);
int display(void);
int findpath(int,int,int[],int*);
*/

int Question_where(int start, int dest, int path[], int shortdist) // ************************************************** main
{
    int i;
    int count;
    int adj[MAX][MAX];

    create_graph(adj);// สร้างกราฟแผนที่


    count = findpath(start, dest, path, &shortdist, adj);

    if (shortdist != 0) {//ระยะทางทั้งหมดไม่เท่ากับ 0
        //shortdist = ระยะทางทั้งหมด
        //path = จุดที่จะไป
        return 0;
    } else {
        return 1;
    }

}

void create_graph(int adj[][])//**************************************************** create_graph
{
    adj[1][2] = 30;
    adj[2][1] = 30;

    adj[1][4] = 40;
    adj[4][1] = 40;

    adj[4][5] = 15;
    adj[5][4] = 15;

    adj[5][6] = 15;
    adj[6][5] = 15;

    adj[6][7] = 20;
    adj[7][6] = 20;

    adj[2][3] = 20;
    adj[3][2] = 20;

    adj[3][8] = 50;
    adj[8][3] = 50;

    adj[3][7] = 30;
    adj[7][3] = 30;

    adj[7][8] = 20;
    adj[8][7] = 20;

}

int findpath(int start, int dest, int path[MAX], int *sdist, int adj[][])
{
    struct node state[MAX];
    int i, min, count = 0, current, newdist, u, v;
    *sdist = 0;
    /* Make all nodes temporary */
    for (i = 1; i <= MAX_STEP; i++) {
        state[i].predecessor = 0;
        state[i].dist = INFINITY;
        state[i].status = TEMP;
    }

    /*start node should be permanent*/
    state[start].predecessor = 0;
    state[start].dist = 0;
    state[start].status = PERM;

    /*Starting from start node until destination is found*/
    current = start;
    while (current != dest) {
        for (i = 1; i <= MAX_STEP; i++) {
            /*Checks for adjacent temporary nodes */
            if ( adj[current][i] > 0 && state[i].status == TEMP ) {//ไม่เอาตัวที่เท่ากับ start
                newdist = state[current].dist + adj[current][i];
                /*Checks for Relabeling*/
                if ( newdist < state[i].dist ) {
                    state[i].predecessor = current;
                    state[i].dist = newdist;
                }
            }
        }/*End of for*/

        /*Search for temporary node with minimum distand make it current
        node*/
        min = INFINITY;
        current = 0;
        for (i = 1; i <= MAX_STEP; i++) {
            if (state[i].status == TEMP && state[i].dist < min) {
                min = state[i].dist;
                current = i;
            }
        }/*End of for*/

        if (current == 0) /*If start or Sink node is isolated*/
            return 0;
        state[current].status = PERM;
    }/*End of while*/

    /* Getting full path in array from destination to start    */
    while ( current != 0 ) {
        count++;
        path[count] = current;
        current = state[current].predecessor;
    }

    /*Getting distance from start to destination*/
    for (i = count; i > 1; i--) {
        u = path[i];
        v = path[i - 1];
        *sdist += adj[u][v];
    }
    return (count);
}/*End of findpath()*/
