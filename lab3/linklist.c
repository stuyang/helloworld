#include<stdio.h>
#include<stdlib.h>
#include<linklist.h>

extern int strcmp(const char *s1,const char * s2);



tDataNode* FindCmd(tDataNode *head, char *cmd)

{

	if(head == NULL || cmd == NULL)

	{

		return NULL;

	}

	tDataNode *p = head;

	while(p != NULL)

	{

		if(strcmp(p->cmd,cmd) == 0)

		{

			return p;

		}

		p = p->next;

	}

	return NULL;

}



int ShowAllCmd(tDataNode *head)

{

	printf("Menu List:\n");

	printf("----------------------------------------------------\n");

	tDataNode *p = head;

	while(p != NULL)

	{

		printf("%s\t:\t%s\n", p->cmd, p->desc);

		p = p->next;

	}

	printf("----------------------------------------------------\n");

	return 0;

}



