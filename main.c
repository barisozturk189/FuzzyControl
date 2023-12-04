#define _CRT_SECURE_NO_WARNINGS
#pragma pack(1)
#include "fuzzy.h"
#include <time.h>





float error[10];
float derror;
float Vref = 12;



int main() {

    int j = 0;
    
    
    while (j<10)
    {
        srand(time(NULL));
        for (int i = 1; i < 10; i++)
        {
            error[i] = Vref - (rand() % 24 +0);
         
            derror = error[i]-error[i-1];
            
            printf("error[%d]=%f, error[%d]=%f, derror=%f \n",i, error[i], (i - 1),error[i-1],derror);
            printf("pwm=%f\n", rules(error[i], derror));
      
        }
        
      
        j++;
    }
    
;		return 0;

}


















