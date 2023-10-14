#include<stdio.h>
int main()
{
    const int rahim=1900;
    int *karim= &rahim;
    *karim=0;
    printf("%d",rahim);
    return 0;
}