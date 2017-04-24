#include<stdio.h>
#include<sys/msg.h>
int main()
{
int i,p1,y;
//struct msg
//{
int n;
int a[10];
//}s;
int x=msgget((key_t)4567,IPC_CREAT|0666);
printf("\n enter limt");
scanf("%d",&n);
printf("\n enter the ele");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
y=msgsnd(x,(void*)&a[i],sizeof(a[i]),1);
sleep(1);
msgrcv(x,(void*)&s,sizeof(a[i]),0,0);
printf("\n sort array");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

