#include <stdio.h>
#include<conio.h>

int main()
{
    printf("Hello World\n");
    int a[10] = {5, 7, 3, 10, 50, 4, 200, 999, 1024, 0};
    int n=10;
    printf("[ ");
    for(int i = 0; i<n; i++)
    {
        if(i==n-1){
            printf("%d ]", a[i]);
        }
        else {
            printf("%d, \t", a[i]);
        }
    }
    return 0;
}
