#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int i=0,j=0;
  srand(time(NULL));
  int r[7];
  for(i=0;i<6;i++)
  {
      r[i]=rand()%10;
      printf("%d",r[i]);
  }

  return 0;
}