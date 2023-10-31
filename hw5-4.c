
#include <stdio.h>
#include <math.h>

int main()
{
    int h , m ;
    
    scanf("%d %d" , &h , &m);
    
    float deg ;
    
    deg = ((h * 5) - m) * 6 + (m * 0.5); 
    
    
    if(deg > 180){
        printf("%f" , deg - 180);
    }else{
        printf("%.3f" , deg);
    }
    
}
