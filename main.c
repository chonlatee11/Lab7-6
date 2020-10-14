#include <stdio.h>
int main(void)
{
  int mata[6][4];
  int matb[4][5];
  int matc[4][4];
  int r, c, v, psum,i,j;
  for(i=0;i<6;i++){
    for(j=0;j<4;j++){
  printf("Enter Matrix A:");
  scanf("%d",&mata[i][j]);
  }
  }
  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
  printf("Enter Matrix B:");
  scanf("%d",&matb[i][j]);
  }
  }
  for(r=0; r<6; r++)
    for(c=0; c<5; c++){
      psum = 0;
      for(v=0; v<4; v++)
        psum += mata[r][v] * matb[v][c];
      matc[r][c] = psum;
    }
  printf("The array product is : \n");
  for(r=0; r<4; r++){
    for(c=0; c<4; c++)
      printf("%5d",matc[r][c]);
    printf("\n");
  }
  return 0;
}
