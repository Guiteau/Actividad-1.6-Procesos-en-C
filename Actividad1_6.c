#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char **argv[]){

	pid_t pid1, pid2;
	int status1, status2;

	if( (pid1=fork()) == 0){
		execl("./areacircunferencia","areacircunferencia",argv[1], (char *)NULL);
		//_exit(1);
	}
	else{

		if( (pid2=fork()) == 0){
			execl("./areaCuadrado","areaCuadrado", argv[1], (char *)NULL);
			//_exit(2);
		}
		else{
			waitpid(pid1, &status1,0);
			waitpid(pid2, &status2,0);
		}
	}
	return 0;

}
