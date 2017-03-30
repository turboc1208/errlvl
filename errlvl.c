#include <stdio.h>
#include <string.h>

int i,retcode;
char cmdlin[200];

int main(int argc,char** argv)
{
	printf("command line =%d\n",argc);
        memset(cmdlin,0,sizeof(cmdlin));
	for (i=1;i<argc;i++){
		strcat(cmdlin,argv[i]);
                strcat(cmdlin," ");
		printf("%d - %s\n",i,argv[i]);
	}
	printf("\n");
	printf("execute = %s\n",cmdlin);
        retcode=system(cmdlin);
        printf("retcode=%d\n\n",retcode);
}
