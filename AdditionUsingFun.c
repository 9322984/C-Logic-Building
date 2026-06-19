#include<stdio.h>
int add(int a,int b){
  return a+b;
}
int main(){
  int a,b;
  printf("enter two numbers: ");
  scanf("%d%d",&a,&b);
  int sum=add(a,b);
  printf("the sum is: %d\n",sum);
  return 0;
}