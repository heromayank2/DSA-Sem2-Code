#include<stdio.h>
#include<stdlib.h>
int create_node(int);
int display();

void delstart();
void delgiven();
void dellast();

struct node{
    int data;
    struct node *next;
}*start=NULL;

int main(){
	int n,x,k,a;
	printf("Enter Size: ");
	scanf("%d",&n);
	printf("Enter Values: ");

	for(int i=0;i<n;i++){
		scanf("%d",&x);
		create_node(x);
	}
		display();
    printf("\n1 for delstart 2 for delgiven 3 for dellast: ");
		scanf("%d",&a);
		switch(a){
			case 1 : delstart();
					break;
			case 2 : delgiven();
					break;
			case 3 : dellast();
					break;
		}
		return(0);
}
int create_node(int n)
{
	struct node *nn, *cptr;
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=n;
	nn->next=NULL;
	if(start==NULL)
	{
		start=nn;
	}
	else{
	 cptr=start;
	 while(cptr->next!=NULL){
	 	cptr=cptr->next;
	 }
	 cptr->next=nn;
	}
	return 0;
}
int display()
{   struct node *cptr;
	cptr=start;
	printf("Start->");
	while(cptr!=NULL)
	{
		printf("%d-> ",cptr->data);
		cptr=cptr->next;
	}
	printf("End");
	return(0);
}
void delstart()
{
struct node	*temp=start;
	start=start->next;
	free(temp);
	display();
}
void delgiven()
{   int a;
    struct node *cptr=start,*temp;
	printf("Enter the index");
	scanf("%d",&a);
	for(int i=0;i<a;i++){
        temp=cptr;
        cptr=cptr->next;
	}
    temp->next=cptr->next;
    free(cptr);
	display();
}
void dellast()
{
   struct node *cptr=start,*temp;
	while(cptr->next!=NULL)
	{	temp=cptr;
		cptr=cptr->next;
	}
	temp->next=NULL;
	free(cptr);
	display();
}
