#include<stdio.h>
#include<sys/msg.h>
int main()
{
int i,j,x,temp=0,z;
struct msg
{
int n;
int a[10];
}s;
int p1=msgget((key_t)4567,IPC_CREAT|0666);
z=msgrcv(p1,(void*)&s,sizeof(s),0,0);
printf("\n sorted array");
for(i=0;i<(s.n)-1;i++)
{
for(j=i+1;j<s.n;j++)
{
if(s.a[i]>s.a[j])
{
temp=s.a[i];
s.a[i]=s.a[j];
s.a[j]=temp;
}
}
}
msgsnd(p1,(void*)&s,sizeof(s),1);
}
