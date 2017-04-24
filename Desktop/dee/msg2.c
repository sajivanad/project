#include<stdio.h>
#include<sys/msg.h>
int main()
{
int i,j,x,temp=0,p,z;
struct msg
{
int n;
int a[10];
}s;
p1=msgget((key_t)4567,IPC_CREAT|0666);
z=msgrcv(p1,(void*)&s,sizeof(s),0,0);
printf("\n sorted array\n");
for(i=0;i<(s.n)-1;i++)
{

