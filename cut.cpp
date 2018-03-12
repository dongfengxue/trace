#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(){
    char buffer[400];
    FILE *fp = fopen("1.blkparse.homes","r");
    if(fp==NULL)
        printf("open read file error\n");

  FILE *stream=fopen("1homes.txt","w");
  if(stream==NULL)
    printf("open write file error\n");
unsigned int time;
long int blkno;
int bcount;
int flags;
//string hash;
char hash[300];
 while(fgets(buffer, 400, fp)) {
    //    sscanf(buffer, "%f %ld %d %d %s\n", &time, &blkno, &bcount, &flags, hash);
        sscanf(buffer, "%u %ld %d %d %s\n", &time, &blkno, &bcount, &flags, hash);
        int length=strlen(hash);
        if(length<=256)
            fprintf(stream,"%u %ld %d %d %s\n",time,blkno,bcount,flags,hash);
 }
 fclose(fp);
 fclose(stream);
    return 0;
}
