#include <stdio.h>
#include <stdlib.h>
#include <linklist.h>

int help();

int quit();

int hello();

int bigger();

int add();

int sub();

int mul();

int divs();



#define CMD_MAX_LEN	128

#define DESC_LEN	1024

#define CMD_NUM		10



static tDataNode head[] =

{

    {"help","this is help cmd!",help,&head[1]},

    {"bigger","bigger of two integer numbers",bigger,&head[2]},

    {"hello","say hello",hello,&head[3]},

    {"add","to add two numbers",add,&head[4]},

    {"sub","to make a subtraction of two numbers",sub,&head[5]},

    {"mul","to make a multiplicatiom of two numbers",mul,&head[6]},

    {"divs","to make a division of two numbers",divs,&head[7]},

    {"quit","quit the menu of cmd",quit,NULL},

};

int main()

{

    while(1)

    {

        char cmd[CMD_MAX_LEN];

        printf("input a cmd->");

        scanf("%s",cmd);

        tDataNode *p = FindCmd(head, cmd);

        if(p == NULL)

	{

	    printf("this is a wrong cmd!\n");

            printf("----------------------------------------------------\n");

	    continue;

	}

	printf("%s\t:\t%s\n", p->cmd, p->desc);

	if(p->handler != NULL)

	{

	    p->handler();

        }

	printf("----------------------------------------------------\n");

    }

}



int help()
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

int quit()
{
	exit(0);
}

int hello()
{
	printf("hello!,welcome to this cmd program!\n\n");
}

int bigger()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	printf("%d",a);	
	else printf("%d\n\n",b);
}
int add()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a+=b;
	printf("%d\n\n",a);
}

int sub()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a-=b;
	printf("%d\n\n",a);
}

int mul()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a*=b;
	printf("%d\n\n",a);
}

int divs()
{
	printf("please input two integer numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	a/=b;
	printf("%d\n\n",a);
}








