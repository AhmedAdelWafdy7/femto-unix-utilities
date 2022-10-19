/* -------------------- includes------------------------ */
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>
	#include <unistd.h>
	#include<sys/wait.h>
	#include<readline/readline.h>
	#include<readline/history.h>
/*-----------------------------macro functions declaration------------------------------*/
#define clear() printf("\033[H\033[J")
/* ------------------------------Data Types Declaration ------------------------------- */
        int x,result;
	char buf[100];
       	int read_count;
	char *argv[]={ NULL };
/*------------------------------functions declaration-------------------------*/	

	void intialize_shell(void);
	int fact(int num);
	void fib(int num);
	void getInput(char buf[100]);
	void printDir(void);
	void echo(char buf[100]);
