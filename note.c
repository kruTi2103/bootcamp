#include <stdio.h>
int main ()
{
 int a,R;
 int p,p1,p2,p3,p4,p5,p6,p7,p8,p9;
 scanf("%d",&a);
 if (a>=2000)
 {
  p=a/2000;
  a=a%2000;
 }
  if(a>=500)
 {
  p1=a/500;
  a=a%500;
 }
  if (a>=200)
 {
  p2=a/200;
  a=a%200;
 }
  if (a>=100)
 {
  p3=a/100;
  a=a%100;
 }
  if (a>=50)
 {
  p4=a/50;
  a=a%50;
 }
  if (a>=20)
 {
  p5=a/20;
  a=a%20;
 }
  if (a>=10)
 {
  p6=a/10;
  a=a%10;
 }
  if (a>=5)
 {
  p7=a/5;
  a=a%5;
 }
  if (a>=2)
 { 
  p8=a/2;
  a=a%2;
 }
  if (a>=1)
 {
  p9=a/1;
  a=a%1;
 }
 {
 R=p+p1+p2+p3+p4+p5+p6+p7+p8+p9;
 printf("%d",R);
 }
 return 0;
}
 
 
 
 
 
