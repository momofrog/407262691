#include<stdio.h>  
#include<stdlib.h>  
void printA(int);  
void printB(int);  
void printC(int);  
void printD(int);  
int main(void){  
    char c;  
    int num;  
    while(scanf("%c%d",&c,&num)!=EOF){  
        if (c == 'A')  
            printA(num);      
        else if (c == 'B')  
            printB(num);  
        else if (c == 'C')  
            printC(num);  
        else if (c == 'D')  
            printD(num);  
              
    printf("\n");         
    }  
    return 0;  
}  
void printA(int num) {    
    int i,j;    
    
    for(i=1;i<=num;i++)    
    {    
        for(j=1;j<=i;j++)    
        {    
            printf("*");    
        }    
            
    }    
  
}    
void printB(int num) {    
    int i,j;    
    
    for(i=num;i>=1;i--)    
    {    
        for(j=1;j<=i;j++)    
        {    
            printf("*");    
        }    
        printf("\n");    
    
    }    
   
}    
void printC(int num) {    
    int i,j,k;    
 for( i=0 ; i<num ; i++ )    
    {    
        for( j=1 ; j<=num-i ; j=j+1 )    
        {    
            printf(" ");    
        }    
        for( k=0 ; k<=i ; k++ )    
        {    
            printf("*");    
        }    
        printf("\n");    
    }    
     
}    
void printD(int num) {    
    int i,j,k;    
for(int i=0;i<num;i++){  
        for(int j=1;j<=i;j++){  
           printf(" ");  
        }  
        for(int k=0;k<num-i;k++){  
           printf("*");  
        }  
        printf("\n");  
    }  
    
}  
