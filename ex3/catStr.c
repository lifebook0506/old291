#include <stdio.h>
#include <string.h>

int mycat(int); 

char dest_buffer[100]; 
char str1[] = "Hello"; 
char str2[] = "World"; 

int main(void){
  /*  char *dest_buffer[100];
  char *str1[] = "Hello"; 
  char *str2[] = "World"; 
  */
  mycat(7); 
  printf("%s\n",dest_buffer); 

  mycat(30); 
  printf("%s\n",dest_buffer);

  return 0; 
}

int mycat(int n){
  int buffi = 0; 
  int i = 0; 

  while (str1[i] != '\0'){
    if (buffi == n){ 
      return 0;
    }else{
      
      dest_buffer[buffi] = str1[i]; 
      buffi++; 
      i++; 
    }
  }
  i=0; 
  while (str2[i] != '\0'){
    if(buffi == n){
      return 0; 
    }else{
    dest_buffer[buffi] = str2[i];
    buffi++; 
    i++;
    }
  }  
    return 0;
}
  
  
