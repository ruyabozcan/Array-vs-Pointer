#include <stdio.h>

int main(void) {
  void mystry(int *A,int n);
  int x[]={1,2,3,4};
  mystry(x,4);
  printf("%d %d",x[0],x[1]);
}
 
void mystry(int *A,int n){
     int t=*A;
     *A=*(A+1);
     *(A+1)=t;
}