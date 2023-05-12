#include <stdio.h>

int main()
{
    int dan = 2;
    int count = 1;
    while(count <= 9){
        printf("%d * %d = %d\n", dan, count, dan*count);
        count++;
    }
    

    return 0;
}   
