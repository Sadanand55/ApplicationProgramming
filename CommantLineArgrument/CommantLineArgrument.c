#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char*argv[])
{

   if(argc<3)
   {
      printf("Pleace provide the two number as command line argrument");
      return 1;
   }


  int ino1=atoi(argv[1]);
  int ino2=atoi(argv[2]);
  int ians=0;
  ians=ino1+ino2;
  printf("Addition of two number is %d\n",ians);

  printf("First Commant line argrument is %s ",argv[0]);





}