#include<stdio.h>
int main(){
    int Num,count=0;
    scanf("%d",&Num);
    for (int i = 2; i < Num; i++)
    {
        if (Num%i==0)
        {
            count=count+1;
        }
    }
    
     /*if (count>=1)
        {
            printf("This is prime number");
        }
        else{
        
            printf("This is not a prime number");
        }*/


    // One liner code
    if ((count>=1) ? printf("This is Not prime number"):printf("This is prime number"));
}