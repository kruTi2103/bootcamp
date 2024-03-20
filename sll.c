/*#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

int main ()
{
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));
	//(struct node *) it is typecasting it is not neccessary to write here
	head->data = 45;
	head->link =NULL;
	
	printf("%p",head->link);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main ()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    //head point to first
    head->data = 45;
    head->link = NULL;
    
    struct node *cu;
    cu = malloc(sizeof(struct node));
    //cu point to second
    cu->data = 98;
    cu->link = NULL;
    head->link = cu;
    //we can use same name pointer again e.g cu
    
    cu = malloc(sizeof(struct node));
    cu->data = 38;
    cu->link = NULL;
    
    head->link->link = cu;
    
    struct node *cu2 = malloc(sizeof(struct node));
	cu2->data = 67;
	cu2->link = NULL;

	struct node *temp = head;
	while (temp->link != NULL) {
	    temp = temp->link;
	}
	temp->link = cu2;
    
    	int c = 0;
    	if (head == NULL)
    	{
    		printf("EMPTY");
    	}
    	
    		struct node *ptr = NULL;
    		ptr = head;
    		
    	while(ptr != NULL)
    	{
    		c++;
    		//printf("%d\n",ptr->data);
    		//gives at a time all data i.e 45,98,38
    		ptr=ptr->link;
    	}
    	// Inserting a node with data value 67 at the end
	
    	printf("%d\n",c);//3 count
    	printf("%d\n", head->data);//for 45
    	printf("%d\n", head->link->data);//for 98
    	printf("%d\n",head->link->link->data);//for38
    	printf("%d\n", temp->link->data);//for 67
    	
  return 0;
}

