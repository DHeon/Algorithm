#include <stdio.h>

int main(){
    int sum = 0; 
    int count = 1;
    
    do{
        sum = sum+count;
        count = count +1;
        
    }while(count <=100);
    
    printf("%d", sum);
    return 0;
}
