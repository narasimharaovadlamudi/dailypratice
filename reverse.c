#include<stdio.h>
#include<string.h>
void main(){
  char a[]="hello world";
int n=strlen(a);
for(i=n-1;i>=0;i++){
  printf("%c",a[i]);
}
