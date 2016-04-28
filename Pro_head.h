#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define MAX_STEP 8
#define TEMP 0
#define PERM 1
#define INFINITY 9999

struct node {
    int predecessor;
    int dist; /*minimum distance of node from start*/
    int status;
} node_t;

void create_graph();
int Question_where(int start, int dest);
int findpath(int start, int dest, int path[MAX], int *sdist);

// int map();