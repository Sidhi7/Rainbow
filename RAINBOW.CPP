#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
   int d=0,m;
   int x,y,i;
   initgraph(&d,&m,"c:\\turboc3\\bgi");
   x=getmaxx()/2;
   y=getmaxx()/2;
   for(i=30;i<200;i++)
   {
       delay(100)
       setcolor(i/10);
       arc(x,y,0,180,i-10);
   }
}