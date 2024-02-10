#include<stdio.h>
#include<string.h>
struct hotel{
    char h_name[30];
    char h_add[50];
    char grade[2];
    int room_charg;
    int num_room;
}h[5];
int main(){
    int i;
    for(i=0;i<5;i++){
        printf("Enter hotel name.");
        scanf("%s",h[i].h_name);
        printf("\nEnter hotel address.");
        scanf("%s",h[i].h_add);
        printf("Enter grade (grade should be 'A,B,C,D').\n");
        scanf("%s",h[i].grade);
        printf("Enter room charg.\n");
        scanf("%d",&h[i].room_charg);
        printf("Enter number of rooms in hotel.\n");
        scanf("%d",&h[i].num_room);
        getchar();
    }
    char u_grade[2];
    printf("Enter grade for hotels list.\n");
    scanf("%s",u_grade);
    printf("\nHotel\tAddress\tCharge\tRoom");
    for(i=0;i<5;i++){
        if(strcmp(h[i].grade , u_grade) == 0){
            printf("\n%s\t%s\t%d\t%d\t",h[i].h_name,h[i].h_add,h[i].room_charg,h[i].num_room);
        }
    }
    int buget;
    printf("\nEnter your buget for the rooms.\n");
    scanf("%d", &buget);
    printf("\nHotel\tAddress\tCharge\tRoom");
    for(i=0;i<5;i++){
        if(h[i].room_charg<buget){
            printf("\n%s\t%s\t%d\t%d\t",h[i].h_name,h[i].h_add,h[i].room_charg,h[i].num_room);
        }
    }
    return 0;
}
