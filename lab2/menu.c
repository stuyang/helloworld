#include<stdio.h>
#include<stdlib.h>
void help()
{
	printf("	name	description\n");
	printf("	help	cmd tips\n");
	printf("	bigger	bigger of two integer numbers\n");
	printf("	quit	exit\n");
	printf("	add	add two integer numbers\n");
	printf("	sub	sub two integer numbers\n");
	printf("	mul	mul two integer numbers\n");
	printf("	hello	to welcome our guest\n");
	printf("	divs	div two integer numbers\n\n");
}

void quit()
{
	exit(0);
}

void hello()
{
	printf("hello!,welcome to this cmd program!\n\n");
}

void bigger()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	printf("%d",a);	
	else printf("%d\n\n",b);
}

void add()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a+=b;
	printf("%d\n\n",a);
}

void sub()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a-=b;
	printf("%d\n\n",a);
}

void mul()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a*=b;
	printf("%d\n\n",a);
}

void divs()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a/=b;
	printf("%d\n\n",a);
}



void main(){
	char cmd[128];
	while(1){
		scanf("%s", cmd);

		if(strcmp(cmd,"help")==0) 
		   help();

    		else if(strcmp(cmd,"quit")==0)
		        quit();

		else if(strcmp(cmd,"hello")==0)
		       hello();

		else if(strcmp(cmd,"bigger")==0)
		       bigger();

		else if(strcmp(cmd,"add")==0)
			add();

		else if(strcmp(cmd,"sub")==0)
			sub();

		else if(strcmp(cmd,"mul")==0)
			mul();

		else if(strcmp(cmd,"divs")==0)
	                divs();
		else
			printf("wrong cmd!\n");

			
		            
	        }		
         

            }
