#include<stdio.h>
#include<string.h>
int main(void)
{   
    char danci[100];
    int x, y, z;

    printf("请输入一个单词:\n");
    scanf("%s", danci);
    x = strlen(danci);
    for ( z = x - 1;  z >= 0; z--)
    {
        printf("倒影:%c\n", danci[z]);
    }
    
    return 0;
}
