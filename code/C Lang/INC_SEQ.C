#include<stdio.h>
#include<conio.h>
void main() 
{
int curr,prev,maxlen=0,len=0;
clrscr();
scanf("%d",&prev);
if(prev!=0){
len=1;maxlen=1;}
scanf("%d",&curr);
while(curr!=0)
  {
if(prev<curr)
{
len=len+1;
}
else
  {
if(maxlen<len)
{
maxlen=len;
}
len=1;
scanf("%d",&curr);
}
if(maxlen<len)
{
maxlen=len;
printf("%d",maxlen);
}
}
getch();
}
