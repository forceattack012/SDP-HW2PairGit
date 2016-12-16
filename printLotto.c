#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int i=0,j=0;
  srand(time(NULL));
  int r[7],d[4][3];
  for(i=0;i<6;i++)
  {
      r[i]=rand()%10;
      printf("%d",r[i]);
  }
  printf("\n\n");
  
 
  for(int i=0;i<4;i++)
  {
      for(int j=0;j<3;j++)
      {
          d[i][j]=rand()%10;
          printf("%d",d[i][j]);
      }
      printf("\n");
  }

  return 0;
}