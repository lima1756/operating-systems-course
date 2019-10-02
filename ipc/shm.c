#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main(void) {
  int pid;
  pid = fork();
  int key = 27;
  if(pid == 0){
    int shmid = shmget(key, 100, IPC_CREAT|0666);
    char * message = (char *) shmat(shmid, NULL, 0);
    sprintf(message, "Hola mundo");
    while(message[0] == 'H'){
      sleep(1);
    }
    printf("El mensaje es: %s \n", message);
  }
  else {
    int shmid = shmget(key, 100, IPC_CREAT|0666);
    char * message = (char *) shmat(shmid, NULL, 0);
    sleep(1);
    printf("El mensaje es: %s \n", message);
    message[0] = 'u';
    sleep(1);
  }
  return 0;
}
