#include <stdio.h>

int fib(int);
// 1,1,2,3,5,8,13,21,34,55,89,144 ...
int main()
{
  int elemansayisi,i;
  
  printf("Eleman sayisi : ");
  scanf("%d",&elemansayisi);
  
  for(i=1;i<=elemansayisi;i++){
  	printf("%d ",fib(i));
  }
  

	return 0;
}


int fib(int sayi){
	if(sayi==1 || sayi==2)
	return 1;
	
   return fib(sayi-1)+fib(sayi-2);
}