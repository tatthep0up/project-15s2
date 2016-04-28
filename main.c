 #include "Pro_head.h"

int main() {
    // int now;
    int start, dest;
    printf("WHERE ARE YOU GOING?\n\n");
    //printf("%s\n\n",array_map);
    printf("1. Computer Science Building\n2. Mathmetics Building\n3. Statics Building\n4. Geo & Gem Building\n5. Biology Building\n6. Chemistry Building\n7. Physics Building\n8. Industrial Building\n");
    printf("where are you now? : ");
    scanf("%d", &start);
    printf("Where are you going? : ");
    scanf("%d", &dest);
    Question_where(start, dest);
    
    return 0;  
}  