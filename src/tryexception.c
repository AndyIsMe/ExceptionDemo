#include <stdio.h>
#include "tryexception.h"
#include "CException.h"

/*
Find the area of a circle given the radius in meter. Note that 
the radius cannot be negative. If it is, Throw an exception and
 print out the following error :
  " The radius cannot be zero "
  
  Otherwise compute the area of the circle and print it on the
  screen. e.g a radius of 2 meters will generate the following 
  message:
    "The area of the circle with 2 meters radius is xxxx"
*/

#define DIVIDED_BY_ZERO   1
#define DIVIDER_IS_NEG    2

void validateNumber(float v) {
    if (v == 0)
      Throw(createException("Cannot divide by zero",DIVIDED_BY_ZERO));
    
    else if(v <0.0)
      Throw(createException("Cannot divide by zero",DIVIDER_IS_NEG));
    
}

float divide(float v1,float v2){
  CEXCEPTION_T ex;
  Try{
    validateNumber(v2);
  } Catch(ex){
    printf(" Oh!Oh! something is wrong here\n");
    Throw(ex);
  }
  printf("--- %f seems to be a good divider\n",v2);
  return v1 / v2;
}
void tryException(float v1, float v2){  
  CEXCEPTION_T ex;
  
  Try{
    // Try something...
        float val = divide(v1,v2);
    printf("%f divide by %f is %f\n",v1,v2,val);
  }Catch(ex){
    dumpException(ex);
    // Resolve the problem 
  }

}
  