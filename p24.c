#include<stdio.h>
void input_output(int [],int [],int,int);
void shorting(int [],int [],int,int);
void merge_short(int [],int [],int [],int,int,int);
void print_shorted(int [],int);
int main(){
    int a[5],b[5],c[10];
    input_output(a,b,5,5);
    shorting(a,b,5,5);
    merge_short(a,b,c,5,5,10);
    print_shorted(c,10);
}
void input_output(int a[],int b[],int size_a,int size_b){
    int i,j;
    printf("Enter the first array elements.\n");
    for(i=0;i<size_a;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the second array elements:\n");
    for(i=0;i<size_b;i++){
        scanf("%d",&b[i]);
    }
    printf("Your first arraye elemets are:\n");
    for(i=0;i<size_a;i++){
        printf("%d ",a[i]);
    }
    printf("\nYour secomd arraye elemets are:\n");
    for(i=0;i<size_b;i++){
        printf("%d ",b[i]);
    }
    return ;
}
void shorting(int a[],int b[],int size_a,int size_b){
    int i,j,temp;
    for(i=0;i<size_a;i++){
        for(j=i+1;j<size_a;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nShorting of first array :\n");
    for(i=0;i<size_a;i++){
        printf("%d ",a[i]);
    }
    int temp1;
    for(i=0;i<size_a;i++){
        for(j=i+1;j<size_b;j++){
            if(b[i]>b[j]){
              temp1=b[i];
              b[i]=b[j];
              b[j]=temp1;  
            }
        }
    }
    printf("\nShorting of second arraye is : \n");
    for(i=0;i<size_a;i++){
        printf("%d ",b[i]);
    }
    return ;
}
void merge_short(int a[],int b[],int c[],int size_a,int size_b,int size_c){
    int i;
    printf("\nYour merge array:\n");
    for(i=0;i<size_a;i++){
        c[i]=a[i];
    }
    for(i=0;i<size_b;i++){
        c[i+5]=b[i];
    }

    for(i=0;i<size_c;i++){
    printf("%d ",c[i]);
    }
    return ;
}
void print_shorted (int c[],int size_c){
    int i,j,temp;
    for(i=0;i<size_c;i++){
        for(j=i+1;j<size_c;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nShorting of merge array : \n");
    for(i=0;i<size_c;i++){
        printf("%d ",c[i]);
    }
    return ;
}
