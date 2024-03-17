#include <stdio.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t mutex;

void *count(void *arg) {
  for (int i = 0; i < 100; i++) {
    pthread_mutex_lock(&mutex);
    counter++; 
    pthread_mutex_unlock(&mutex);

  }
  printf("Counter: %d\n", counter);
  pthread_exit(NULL);
  
}

int main() {
  pthread_t th1, th2;
  printf("Init_value: %d\n", counter);
  
  pthread_create(&th1, NULL, count, NULL);
  pthread_create(&th2, NULL, count, NULL);
  pthread_join(th1, NULL);
  pthread_join(th2, NULL);
 
  
  printf("Final_value: %d\n", counter);
  pthread_mutex_destroy(&mutex);

  return 0;
}
