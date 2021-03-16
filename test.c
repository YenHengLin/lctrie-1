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
    in_file=fopen("traficfile106.txt","w");
    // for(int i=0;i<1000;i++){
    //     len= floor(log(i)/log(2))+1;
    //     node[i].prefix=i;
    //     node[i].len=len;
    //     node[i].nexthop=i;
        
    // }
    for(int i=0;i<1000000;i++){
        int tmp = rand()%10000;
        fprintf(in_file,"%d\n",tmp);

    }
    


}