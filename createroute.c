#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
typedef struct{
    unsigned int prefix;
} entryN; 

int main(){
    srand(time(NULL));

    entryN node[1000];
    FILE *in_file;
    int len;
    in_file=fopen("routefile106.txt","w");
    for(int i=0;i<10000;i++){
        len= floor(log(i)/log(2))+1;
        fprintf(in_file,"%d %d %d\n",i,len,i);
        
    }

    


}