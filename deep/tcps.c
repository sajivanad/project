#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<string.h>
#define MYPORT 1425
#define BACKLOG 10
int main()
{
int sockfd,new_fd,i,j,len;
int sin_size,number,count;
char str[20],rev[20];
struct sockaddr_in my_addr;
struct sockaddr_in their_addr;
sockfd=socket(AF_INET,SOCK_STREAM,0);
//if(sockfd==-1)
//{
//perror("Socket");
//exit(1);
//}
my_addr.sin_family=AF_INET;
my_addr.sin_port=htons(MYPORT);	
my_addr.sin_addr.s_addr=INADDR_ANY;
//bzero(&(my_addr.sin_zero),8);
bind(sockfd,(struct sockaddr *)&my_addr,sizeof(struct sockaddr));
//{
//perror("bind");
exit(1);
//}
listen(sockfd,BACKLOG)
//{
//perror("listen");
//exit(1);
//}
while(1)
{
sin_size=sizeof(struct sockaddr_in);
new_fd=accept(sockfd,(struct sockaddr*)&their_addr,&sin_size)
number==recv(new_fd,str,25,0)
//str[number]='\0';
printf("\nReceived:%s\n",str);
i=0;
while(str[i]!='\0')
{
len=i;
i++;
}
j=0;
while(len>=0)
{
rev[j]=str[len--];
j++;
}
rev[j]='\0';
send(new_fd,rev,14,0)
//{
//perror("Error-send");
close(new_fd);
exit(0);
//}
}
close(new_fd);
return(0);
}
