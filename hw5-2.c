
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
    
    if(total / 0.01 >= 5){
        total += 0.1;
    }
    printf("%.1f" , total);
    
}
