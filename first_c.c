#include<stdio.h>
void input_output(int m,int n,int [][n]);
void small_row(int m,int n,int [][n]);
void larg_row(int m,int n,int [][n]);
void small_col(int m,int n,int [][n]);
void larg_col(int m,int n,int [][n]);
int main(){
    int m,n;
    printf("Enter the size of row.\n");
    scanf("%d",&m);
    printf("Enter the size of column.\n");
    scanf("%d",&n);
    int a[m][n];
    input_output(m,n,a);
    printf("\n");
    small_row(m,n,a);
    printf("\n");
    larg_row(m,n,a);
    printf("\n");
    small_col(m,n,a);
    printf("\n");
    larg_col(m,n,a);
    return 0;
}
void input_output(int m,int n,int x[m][n]){
    int i,j;
    printf("Enter the array elements.\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("Your array elements are :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    return ;
}
void small_row(int m,int n,int x[m][n]){
    int i,j,res[m],min=x[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(min>x[i][j]){
                min=x[i][j];
            }
        }
        res[i]=min;
        min=x[i+1][0];
    }
    for(i=0;i<m;i++){
        printf("In %d row ssmallest elements is %d.\n",i+1,res[i]);
    }
    return ;
}
void larg_row(int m,int n,int x[m][n]){
    int i,j;
    int max=0,res[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(max<x[i][j]){
                max=x[i][j];
            }
        }
        res[i]=max;
        max=0;
    }
    for(i=0;i<m;i++){
        printf("In row %d largest element is %d.\n",i+1,res[i]);
    }
    return ;
}
void small_col(int m,int n,int x[m][n]){
    int i,j,min,res[m];
    for(i=0;i<m;i++){
        min=x[0][i];
        for(j=0;j<n;j++){
            if(min>x[j][i]){
                min=x[j][i];
            }
        }
        res[i]=min;
    }
    for(i=0;i<m;i++){
        printf("In column %d smallest element is %d.\n",i+1,res[i]);
    }
    return ;
    
}
void larg_col(int m,int n,int x[m][n]){
    int i,j,max,res[m];
    for(i=0;i<m;i++){
        max=x[0][i];
        for(j=0;j<n;j++){
            if(max<x[j][i]){
                max=x[j][i];
            }
        }
        res[i]=max;
    }
    for(i=0;i<m;i++){
        printf("In column %d largest element is %d.\n",i+1,res[i]);
    }
    return ;
}
