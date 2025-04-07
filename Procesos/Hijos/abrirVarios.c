#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    int lanzamientos = 0;
    printf("Cuantas veces quieres abrir firefox? ");
    scanf("%d", &lanzamientos);
    pid_t pids[lanzamientos];
    int pidsIndex = 0;

    pid_t pid = fork();
    for (int i = 0; i < lanzamientos; i++) {
        if (pid == 0) {
            printf("Soy el proceso hijo (PID:%d), voy a ejecutar code-oss: \n", getpid());
            execl("/usr/bin/code-oss", "code-oss", "--new-window", NULL);
            perror("execl falló");
            exit(1);
        } else if (pid > 0) {
            printf("Soy el proceso padre (PID: %d), esperando al hijo... \n", getpid());
            pids[pidsIndex++] = pid;
            wait(NULL);
            printf("Hijo terminado. \n");
        } else {
            perror("fork falló");
        }
    }

    printf("Deseas cerrar todos los procesos? s/n ");
    char opc;
    scanf(" %c", &opc);
    if (opc == 's' || opc == 'S') {
        for (int i = 0; i < lanzamientos; i++) {
            kill(pids[i], SIGKILL);
        }
    }
    return 0;
}
