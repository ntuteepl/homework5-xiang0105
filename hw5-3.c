#include <stdio.h>
#include <math.h>

int main()
{
    float h , wage , total;
    
    scanf("%f %f" , &h , &wage);
    
    if(h <= 60){
        total *= h;
    }else if(h <= 120 && h > 60){
        total = (wage * 60) + (wage * 1.33 * (h - 60));
    }else{
        total = (wage * 60) + (wage * 1.33 * 60 ) + (wage * 1.66 * (h - 120));
    }
    
    printf("%.1f" , total);
    
}
