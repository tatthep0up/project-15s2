#include "Pro_head.h"

int main() {
    
    int start, dest;

    printf("WHERE ARE YOU GOING?\n\n");
    printf("1. Computer Science Building\n2. Mathmetics Building\n3. Statics Building\n4. Geo & Gem Building\n5. Biology Building\n6. Chemistry Building\n7. Physics Building\n8. Industrial Building\n");
    printf("where are you now? : ");
    scanf("%d", &start);
    printf("Enter last node : ");
    scanf("%d", &dest);

    int path[MAX]; // MAX = 10
    int shortdist , question; 
    question = Question_where(start, dest, path, shortdist);
    if (question != 0){
        printf("There is no path from start to destination node\n");
        return 0;
    }
    char array_map[MAX_MAP];
    create_map(array_map); //create map

    printf("%s\n",array_map );
    
    

    return 0;  
}  