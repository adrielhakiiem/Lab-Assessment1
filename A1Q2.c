#include <stdio.h>
int main()
{

    // real
  int i,j;
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      if(j<=i){
      printf("^");
      }else{
      printf(" ");
    }
  printf("\n");
  }
    
    //opposite
    int x,y;
    for(x=10;x>=1;x--)
    {
      for(y=10;y>=1;y--)
      {
        if(y<=x){
        printf("^");
        }else{
        printf(" ");
      }
    printf("\n");
    }


}
