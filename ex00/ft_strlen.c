#include<stdio.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
    i++;
    }
    return(i);
}
int main()
{
    int result;
    char str[]="ismail aywli a9wad wahed f c inshalah";
    result = ft_strlen(str);
    printf("%d\n", result);
}