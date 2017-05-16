#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#define SIZE 256

char cbuf[SIZE];
//char *cbuf = "./helloworld";
char *newargv[] = {"hello", "world", NULL};
char *newenviron[] = { NULL };

pid_t cpid; int cstat;

int main(int argc,char* argv[]) {
	while(gets(cbuf)) {
		// cpid = fork();
		// if(cpid != 0) { 
		// 	printf("received input: %s\n", cbuf);
		// 	waitpid(cpid, &cstat, 0);
		// }
		// if(cpid == 0) { 
		// 	int rc = execve(cbuf, newargv, newenviron);
		// 	printf("child process running!\nrc: %d", rc);
		// 	return 0;
		// }
		printf("%s\n", cbuf);
		int rc = execve(cbuf, newargv, newenviron);
		printf("%d\n", rc);
	}
	//int rc = execve(cbuf, newargv, newenviron);
	//printf("%d\n", rc);
	exit(0);
}


