#include <stdio.h>
#include <unistd.h>

int main() {
	pid_t pid = fork();

	if (pid == 0) {
		printf("Soy el proceso hijo, mi PID es %d \n", getpid());
	} else {
		printf("Soy el proceso padre, mi PID es %d \n", getpid());
	}

	return 0;
}