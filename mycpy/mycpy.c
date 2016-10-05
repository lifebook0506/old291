#include <stdio.h>
#include <stdlib.h>


 
int main(int argc,char *argv[]){ 
  int c;
  FILE *infile = fopen(argv[1],"r"); 
  FILE *outfile = fopen(argv[2],"w"); 
  
  if (infile == NULL || outfile == NULL){
    printf("Error with given files\n"); 
    exit(1); 
  }
  
  
  while(1){

    c = fgetc(infile); 
    if(c == EOF){
      break; 
    }else{
      printf("%c",c);
      fputc(c,outfile); 
    }
  }
  fclose(infile); 
  fclose(outfile); 
  
  
  return 0; 
}
