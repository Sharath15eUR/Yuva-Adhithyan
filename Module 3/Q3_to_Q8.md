## Question 3:

**Answer: 2**

## Question 4:

**Answer: 2
          4**

## Question 5: Create two thread functions to print hello and world separately and create threads for each and execute them one after other in C

**Answer:**
```
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void hello(void* arg){
    printf("Hello, ");
    pthread_exit(NULL); 
}

void world(void* arg){
    printf("World");
    pthread_exit(NULL); 
}

int main(){
    pthread_t hthd, wthd;
    pthread_create(&hthd, NULL, hello, NULL);
    pthread_create(&wthd, NULL, world, NULL);
    
    pthread_join(hthd, NULL);
    pthread_join(wthd, NULL);
    
    return 0;
}
```
## Question 6: How to avoid Race conditions and deadlocks?

**Answer: Mutex
          Semaphore
          Lock Timeout
          Avoiding global variables usage**

## Question 7: What is the difference between exec and fork?

**Answer: 
fork is used for process creation.<br>
exec is used for program execution within an existing process.**

## Question 8: What is the difference between process and threads?

**Answer: 
Process -> These are independent execution unit. They by default contain a thread, and many threads can be created in a process. They've independent resource allocation.<br>
Thread -> These are process dependent execution unit. They share resources from different threads in the same process. Due to this synchronization is required.**

          
