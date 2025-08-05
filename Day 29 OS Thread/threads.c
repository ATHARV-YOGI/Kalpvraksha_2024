#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int counter = 0;

void * routine(void *arg){

    printf("pid: %d\n", getpid());
  for(int i = 0 ; i < 1000000 ; i++){
    counter++;
  }
  
}


int main(int argc, char argv[]){
    pthread_t thread, thread2;

    pthread_create(&thread, NULL, &routine, NULL);
    pthread_join(thread, NULL);
    pthread_create(&thread2, NULL, &routine, NULL);
    pthread_join(thread2, NULL);
    printf("counter: %d\n", counter);
    
}


// atharv@Atharv:/mnt/c/Users/athar/OneDrive/Desktop/kalpvraksha/Day 22$ ./threads
// pid: 1412
// pid: 1412
// atharv@Atharv:/mnt/c/Users/athar/OneDrive/Desktop/kalpvraksha/Day 22$ gcc threads.c -o threads
// atharv@Atharv:/mnt/c/Users/athar/OneDrive/Desktop/kalpvraksha/Day 22$ ./threads
// pid: 1426
// pid: 1426
// counter: 2000000