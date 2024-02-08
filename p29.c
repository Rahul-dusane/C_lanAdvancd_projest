#include<stdio.h>
int add(int);
int main(){
    int m;
    printf("Enter the number.\n");
    scanf("%d",&m);
    int sum=add(m);
    printf("sum = %d",sum);
}
int add(int n){
   static int i=0;
    if(n>0){
        i=i+n;
        add(n-1);
    }
    return i;
}
