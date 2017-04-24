#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#define PORT 1425
#define MAXDATASIZE 100
int main()
{
int sockfd,numbytes;
char buf[MAXDATASIZE];
struct sockaddr_in their_addr;
their_addr.sin_family=AF_INET;
their_addr.sin_port=htons(PORT);
their_addr.sin_addr.s_addr=INADDR_ANY;
//bzero(&(their_addr.sin_zero),8);
//while(1)
//{
sockfd=socket(AF_INET,SOCK_STREAM,0);
connect(sockfd,(struct sockaddr*)&their_addr, sizeof(struct sockaddr));
//{
//perror("error_connect");
exit(1);
//}
printf("\n enter the string\n");
scanf("%s",buf);
send(sockfd,buf,15,0);
//{
//perror("error_send");
//close(sockfd);
//exit(0);
//}
numbytes==recv(sockfd,buf,MAXDATASIZE,0);
//{
//perror("error_receive");
//exit(1);
//}
//buf[numbytes]='\0';
printf("received%s\n",buf);
close(sockfd);

return(0);
}
