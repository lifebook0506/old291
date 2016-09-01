#include <stdio.h>

int main(void){
  int x,y,prime; 

  while (x < 100 ) {
    prime = 0; 
    for(y = 2; y <= x/2; y++ ){
      if(x%y == 0){
	prime =1;
	break;
      }
    }
    if (prime == 0)
      printf("%d\n",x);
  
    x++; 
  }
      /* if(x%y == 0 && y ==x){
	printf("%d\n",x); 
      }else{
	y++; 
      } 
      
      }*/
  return 0; 
}
