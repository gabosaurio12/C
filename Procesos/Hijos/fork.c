#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    printf("Este mensaje es antes del fork() \n");
    pid = fork();
    if (pid < 0) {
        fprintf(stderr, "Error en fork() \n");
        return 1;
    } else if (pid == 0) {
        printf("Soy el HIJO (PID: %d) \n", getpid());
    } else {
        printf("Soy el proceso PADRE (PID: %d), mi hijo es %d\n", getpid(), pid);
    }

    printf("Este mensaje lo imprimen ambos procesos \n");
    return 0;
}
