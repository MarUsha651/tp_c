#include <stdio.h>
#include <stdlib.h>

struct island {
	int value;
	struct island *next;
};



int main() 
{	
	struct island *p=NULL;
	int n, v;
	_Bool w=1;
	printf ("Selected action:\n 1 - create the first item in a single-linked list\n 2 - add an item to the end of a single-linked list\n 3 - delete an item to the end of a single-linked list\n 4 - viewing a single-linked list\n 5 - delete the entire single-linked list\n 6 - perform a sequential search for the specified item in a single-linked list\n 7 - exit the program\n");
	while (w){
		printf ("Number: ");
		scanf("%d", &n);
		switch (n){
			case 1:{
				printf ("Enter a number:");
				scanf("%d", &v);

				if (p==NULL) 
				{
					p=malloc(sizeof(struct island));
					p->value=v;
					break;
				}

				struct island *s=malloc(sizeof(struct island));
				s->next=p;
				p=s;
				s->value=v;

				break;
			}
			case 2:{
				printf ("Enter a number:");
				scanf("%d", &v);

				if (p==NULL) 
				{
					p=malloc(sizeof(struct island));
					p->value=v;
					break;
				}
			
				for (struct island *t=p; t!=NULL;t=t->next)
				{ 
					if (t->next==NULL)
					{
						t->next=malloc(sizeof(struct island));
						t->next->value=v;
						break;
					}


				}

				break;
			}
			case 3:{
				if(p==NULL){
					break;
				}

				if(p->next==NULL){
					free(p);
					p=NULL;
					break;
				}

				for (struct island *t=p; t!=NULL;t=t->next)
				{ 
					if (t->next->next==NULL)
					{
						free(t->next);
						t->next=NULL;
						break;
					}
				}

				break;
			}
			case 4:{
				for (struct island *t=p; t!=NULL;t=t->next)
				{
					printf ("%d\n", t->value);
				}

				break;
			}
			case 5:{
				while(p!=NULL){
					struct island *s=p->next;
					free(p);
					p=s;
				}
				break;
			}
			case 6:{
				_Bool isInList=0;
				printf ("Enter a number to search:");
				scanf("%d", &v);

				for (struct island *t=p; t!=NULL;t=t->next){
					if(t->value==v){
						printf("This number is in a single-linked list\n");
						isInList=1;
						break;
					}
				}

				if(!isInList){
					printf("This number is not in a single-linked list\n");
				}
				break;
			}
			case 7:{
				w=0;
				break;
			}
			default:{
				break;
			}
		}
	}
	return 0;
}