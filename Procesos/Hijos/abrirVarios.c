#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    int lanzamientos = 0;
    printf("Cuantas veces quieres abrir firefox? ");
    scanf("%d", &lanzamientos);
    int pids[lanzamientos];
    int pidsIndex = 0;

    pid_t pid = fork();
    for (int i = 0; i < lanzamientos; i++) {
        if (pid == 0) {
            printf("Soy el proceso hijo (PID:%d), voy a ejecutar vim: \n", getpid());
            pids[pidsIndex++] = getpid();
            execl("/usr/bin/firefox", "firefox", NULL);
            perror("execl falló");
        } else if (pid > 0) {
            printf("Soy el proceso padre (PID: %d), esperando al hijo... \n", getpid());
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
            kill(pids[i], SIGTERM);
        }
    }
    return 0;
}
