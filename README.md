#include<stdio.h>
#include<string.h>
struct Census{
    char city_name[50];
    int population;
    float literacy;
};

int main(){
    struct Census c[2];
    int i,j;
    for(i=0;i<2;i++){
        printf("Enter the city name.\n");
        scanf("%s",c[i].city_name);
        printf("Enter tha population of the city`s.\n");
        scanf("%d",&c[i].population);
        if(c[i].population<0){
            printf("Enter valid population.");
            return 0;
        }
        printf("Enter tha literacy rate of those city`s.\n");
        scanf("%f",&c[i].literacy);
    }

    printf("\nCity_Name\tPopulation\tLiteracy");
    for(i=0;i<2;i++){
        printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
    }

    struct Census temp_A;
    struct Census temp_L;
    struct Census temp_P;

    int choice;
    again:
    printf("\nEnter your choice:\n1)If you want sorting by alphabats press'1'.\n2)If you want sorting by literacy press'2'.\n3)If you want sorting by population press'3'.");
    scanf("%d",&choice);
    if(choice==1 || choice==2 || choice==3){
        switch (choice){
            case 1:
            for(i=0;i<2;i++){
                for(j=i+1;j<2;j++){
                    if(strcmp(c[i].city_name, c[j].city_name)>0){
                        temp_A=c[i];
                        c[i]=c[j];
                        c[j]=temp_A;
                    }
                }
            }
            printf("\nCity_Name\tPopulation\tLiteracy");
            for(i=0;i<2;i++){
            printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
           }
           break;
           case 2:
           for(i=0;i<2;i++){
            for(j=i+1;j<2;j++){
                if(c[i].literacy<c[j].literacy){
                    temp_L=c[i];
                    c[i]=c[j];
                    c[j]=temp_L;
                }
             }
           }
            printf("\nCity_Name\tPopulation\tLiteracy");
            for(i=0;i<2;i++){
            printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
         }
         break;
         case 3:
           for(i=0;i<2;i++){
            for(j=i+1;j<2;j++){
                if(c[i].population<c[j].population){
                    temp_P=c[i];
                    c[i]=c[j];
                    c[j]=temp_P;
                }
             }
           }
            printf("\nCity_Name\tPopulation\tLiteracy");
            for(i=0;i<2;i++){
            printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
         }
         break;
         default :
         printf("Enter valid choice.\n");
    
        }
    }
    else{
        printf("Enter valid choice.\n");
    }
    int var;
    printf("If want to make a choice for shorting press 'Y'.");
    scanf("%c",&var);
    if(var=='Y' && var=='y'){
        goto again;
    }
    else{
        printf("Enter valid character.");
    }
    return 0;
}
