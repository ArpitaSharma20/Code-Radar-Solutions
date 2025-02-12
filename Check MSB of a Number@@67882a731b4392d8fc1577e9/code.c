#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    MSB=1<<31;
    if(a&MSB)
    {
    printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}