#include <stdio.h>
#include <math.h>

int main()
{
    float inp , total;
    
    scanf("%f" , &inp);
    total = inp * 0.9;
    
    if(inp >= 1500){
        total *= 0.79;
    }else if(inp < 1500 && inp > 800){
        total *= 0.9;
    }
    
    total = round(total * 100) / 100; 
    
    
    printf("%.1f" , total);
    
}
