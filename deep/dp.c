#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
pthread_mutex_t chopstick[5];
pthread_t philosopher[5];
//void *msg;
void *threadfunc(int i)
{
pthread_mutex_lock(&chopstick[i]);
pthread_mutex_lock(&chopstick[(i+1)%5]);
printf("\n phil %d taken cop ",i+1);
sleep(5);
printf("\n phil %d finish eating",i+1);
pthread_mutex_unlock(&chopstick[i]);
pthread_mutex_unlock(&chopstick[(i+1)%5]);
pthread_exit(NULL);
}
int main()
{
int k,i=0;
//pthread_mutex_t chopstick[5];
//pthread_t philosopher[5];
//void *msg;
for(i=0;i<5;i++)
{
k=pthread_mutex_init(&chopstick[i],NULL);
}
for(i=0;i<5;i++)
{
k=pthread_create(&philosopher[i],NULL,(void*)threadfunc,(void*)i);
}
for(i=0;i<5;i++)
{
k=pthread_join(philosopher[i],&msg);
}
for(i=0;i<5;i++)
{
k=pthread_mutex_destroy(&chopstick[i]);
}
}


