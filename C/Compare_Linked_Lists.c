#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};


int identical(struct node *a,struct node *b){

    while(a!=NULL && b!=NULL){

        if (a->data!=b->data){

            return 0;
        }
        else{
            a=a->next;
            b=b->next;
        }
    }

    if (a==NULL && b==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct node **head,int item){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    new_node ->data=item;

    new_node->next= *head ;

    *head = new_node;
}


int main(){

    int N1=0,N2=0;
    printf("Enter the length of the first linked list : ");
    scanf("%d",&N1);

    int item=0;

    struct node *a=NULL;
    struct node *b=NULL;

    printf("\nEnter values for first linked list \n");

    while(N1--){

        printf("\nEnter a value : ");
        scanf("%d",&item);

        push(&a,item);

    }

    printf("Enter the length of the second linked list : ");
    scanf("%d",&N2);

    printf("\nEnter values for second linked list \n");

    while(N2--){

        printf("\nEnter a value : ");
        scanf("%d",&item);

        push(&b,item);

    }

    if (identical(a,b)==1){
        printf("\nThe linked lists are identical ");
    }
    else{
        printf("The linked lists are not identical ");
    }




}
