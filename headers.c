/*------------------------------includes--------------------------------------*/
#include "headers.h"
/*------------------------------functions definations-------------------------*/
/**
 *
 *@about void function to intialize shell
 *@param void 
 *@return void function 
 */
void intialize_shell(void){
        printf("$Welcome to AhmedFandes shell..\n");
        sleep(1);
        printf("\n\n\n\n******************"
        "************************");
        printf("\n\n\n\t****FANDES SHELL****");
        printf("\n\n\t-HAVE A NICE TIME WITH OUR SHELL -");
         printf("\n\n\n\n*******************"
        "***********************");
        sleep(2);
        clear();
	

}

/*
 *@about int function to print factorial of a number
 *@param num 
 *@return res = result of factorial of a num
 * */
int fact(int num){
	int i, res=1;
	if( (num==0) || (num==1) )
	{
        	res=1;
	}
	else
	{
		for(i=num;i>1;i--)
		{
        		res=res*i;
		}
	}
	return res;

}
/**
 *@about void function to print fibonacci sequence
 *@param num 
 *@return void function 
 * */
void fib(int num){
	
	int i=0,t1=0,t2=1,NextTerm=0;
	printf("\nThe sequence is : ");
	for(i=0;i<=num;i++)
	{
		if(i==0)
		{
			printf("0,");
			continue;
		}
		if(i==1)
		{
			printf("1");
			continue;
		}
		NextTerm=t1+t2;
		t1=t2;
		t2=NextTerm;
		printf(",%d",NextTerm);
	}


}
/**
 *@about int function to get input from user and store it in a char array
 *@param str
 *@return 1 if string stored and success
 *	
 */
void getInput(char buf[100]){
        char *delim = " ";
        unsigned count = 0;
        char *token = strtok(buf,delim);
	while(token != NULL)
        {
		argv[count]=token;

		//printf("Token no. %d : %s \n", count,token);
                token = strtok(NULL,delim);
                count++;
        
	}
}
void echo(char buf[100]){
         char *token = strtok(buf, " ");
   // loop through the string to extract all other tokens
   token = strtok(NULL, " ");

	 while( token != NULL ) {
      printf( " %s", token ); //printing each token
      token = strtok(NULL, " ");
   }        
}

/**
 *@about void function to print current directory
 *@param void
 *@return void function 
 * */
void printDir(void){
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf("\nDir: %s\n", cwd);
}
//~                                               
