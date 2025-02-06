#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char hobby[20];
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name:\n",name);
    printf("Age:\n",age);
    printf("Hobby:\n",hobby);
    return 0;
}