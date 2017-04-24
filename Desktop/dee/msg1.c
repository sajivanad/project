#include<stdio.h>
#include<sys/msg.h>
int main()
{
int i,j,x,temp=0,z;
//struct msg
//{
int n;
int a[10];
//}s;
int p1=msgget((key_t)4567,IPC_CREAT|0666);
z=msgrcv(x,(void*)&a[i],sizeof(a[i]),0,0);
printf("\n sorted array");
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
msgsnd(p1,(void*)&a[i],sizeof(a[i]),1);
}
