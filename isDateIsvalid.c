#include<stdio.h>
int isDateIsValid(int,int,int);
int main(){
    int a,b,c;
    int res=isDateIsValid(a,b,c);
    if(res==1){
        printf("\nEntered date is valid.\n");
    }
    else{
        printf("Entered date is invalid.\n");
    }
    return 0;
}
int isDateIsValid(int dd,int mm,int yy){
    printf("Enter the date in (DD-MM-YYYY) format.\n");
    scanf("%d-%d-%d",&dd,&mm,&yy);
    printf("Your date is = %d-%d-%d\n",dd,mm,yy);
  
    if(yy>=1900 && yy<=9999){
        if(mm>=1 && mm<=12){
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
                   return 1;
            }
            else if((dd>=1 && dd<=30) && (mm==2 || mm==4 || mm==6 || mm==9 || mm==11)){
                return 1;
            }
            else if((dd>=1 && dd<=28) && (mm==2)){
                return 1;
            }
            else if((dd==29 && mm==2 && (yy%400==0 || (yy%4==0 && yy%100!=0)))){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
        return 0;
        }
    }
    else{
        return 0;
    }
    return 0;
}
