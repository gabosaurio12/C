#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Soy el proceso hijo (PID:%d), voy a ejecutar vim: \n", getpid());
        execl("/usr/bin/subl", "subl", NULL);
        perror ("execl falló");
    } else if (pid > 0) {
        printf("Soy el proceso padre (PID: %d), esperando al hijo... \n", getpid());
        wait(NULL);
        printf("Hijo terminado.\n ");
    } else {
        perror("fork fallo");
    }

    printf("Deseas lanzar un nuevo proceso?i s/n ");
    char opc;
    scanf("%c", &opc);
    if (opc == 's') {
        execl("/usr/bin/firefox", "firefox", NULL);
        perror("execl falló");
    }
    return 0;
}
