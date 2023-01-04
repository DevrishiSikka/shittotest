
#include<pthread.h>

#include<stdio.h>

#include<stdlib.h>

#include<math.h>

void *thread_function(void *arg)

{

char *buffer=(char *)malloc(64);

//fill up the buffer with something good

buffer ="hello world ";

return buffer;

}

int main(void){

pthread_t threadID;

void *thread_result;

double value;

//scanf("%d",&value);

value=1;

pthread_create(&threadID,NULL,thread_function,&value);

pthread_join(threadID,&thread_result); 

char *message;

message=(char *)thread_result;

while(value<=99){

printf("%s %lf .\n",message,sqrt(value));

value++;

 }

//free(thread_result);

//int *returnval=(int *)thread_result;

//printf("%d\n",*returnval);

return 0;

}
