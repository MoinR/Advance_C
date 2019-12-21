
#include <stdio.h>
#include <stdlib.h>

/*Defining structure node with data and pointing value of next pointer */

struct node {
    int data;
    struct node *next;
}*first = NULL;

/* Defining function to insert the node */
void insert(int val){

    struct node *new1, *curr;
    new1 = (struct node *) malloc(sizeof(struct node *));

    // Assigning values to new1
    new1 -> data = val;
    new1 -> next = NULL;

    //Checking whether linked list is empty
    if(first == NULL){
        first = new1;
        return;
    }


    //Fetching current node
    curr = first;
    while(curr->next != NULL){
        curr = curr -> next;
    }

    //Assigning address of last node to the current node
    curr -> next = new1;
}

/* Defining function to display the linked list */
void display(){
    struct node *curr;
    if(first == NULL){
            printf("\nLinked List is empty ");
            return;
    }
    curr = first;

    //Printing linked list
    printf("\nLinked List : \n");
    while(curr != NULL){
            printf("%d  ",curr -> data);
            curr = curr -> next;
    }
}




/* Defining function to delete the node */
void delnode(int val){
    struct node *curr,*pre;
    if(first == NULL){
        printf("Linked list is empty ");
        return;
    }
    curr = first;

    /*checking if val is having first position or not */
    if(first -> data == val){
        first = first -> next;
        free(curr);
        return;
    }
    while(curr -> data != val){
        pre = curr;
        curr = curr -> next;
        if(curr == NULL){
			printf("\nValue does not exist.");
			return;
		}
    }
    pre -> next = curr -> next;
    free(curr);
}

/* Defining function to insert the node after specific node(position) */

void insert_after(int val,int key){
    struct node *new1, *curr;

    // Assigning values to the new1
    new1 = (struct node *)malloc(sizeof(struct node));
    new1 -> data = val;
    new1 -> next = NULL;

    if(first == NULL){
        printf("Linked List is empty ");
        return;
    }
    curr = first;

    while(curr -> data != key){
        curr = curr -> next;
        if(curr == NULL){
            printf("\a Can not find the value");
            return;
        }
    }

    //Linking the new node with next node
    new1 -> next = curr -> next;
    curr -> next = new1;

}
/* Defining function to insert the node at  */

void insert_at_beg(int val){

    /*Defining new1 node */
	struct node *new1;

    /*Initializing new1 node */
	new1=(struct node *)malloc(sizeof(struct node));
	new1->data=val;

    /*Setting new1 as first node */
	new1->next=first;
	first=new1;

}

/* Defining function to insert the node before specific node(position) */
void insert_before(int val,int key){

	struct node *new1,*curr,*pre;

	new1 = (struct node *)malloc(sizeof(struct node));
	new1 -> data = val;
	new1 -> next = NULL;

	if(first == NULL){
		printf("\nLinked list is empty.");
		return;
	}
    /* checking whether user is trying to insert before first node  */
	if(first -> data == key) {
		new1 -> next = first;
		first = new1;
		return;
	}

	curr = first;
	while(curr -> data != key) {
		pre = curr;
		curr = curr -> next;
		if(curr == NULL){
			printf("\nValue does not exist.");
			return;
		}
	}

	new1 -> next = curr;
	pre  -> next = new1;
}
void main(){
    int val,ch,key;

    do{
        printf("\n-------------------- MENU --------------------");
        printf("\n1. Insert node ");
        printf("\n2. Display List ");
        printf("\n3. Delete Node ");
        printf("\n4. Insert After ");
        printf("\n5. Insert Before");
        printf("\n6. Insert at beginning ");
        printf("\n7. Exit ");

        printf("\nEnter Your choice ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                while(val != -1){
                    printf("Enter Value (Enter -1 to stop): ");
                    scanf("%d",&val);
                    if(val != -1) {
                        insert(val);
                    }
                }
                val = 0;
                break;
            case 2:
                    display();
                    break;
            case 3:
                    printf("Enter Value : ");
                    scanf("%d",&val);
                    delnode(val);
                    break;
            case 4:
                    printf("Enter Value : ");
                    scanf("%d",&val);
                    printf("\nEnter Key value : ");
                    scanf("%d",&key);
                    insert_after(val,key);
                    break;
            case 5:
                    printf("Enter Value : ");
                    scanf("%d",&val);
                    printf("\nEnter Key value : ");
                    scanf("%d",&key);
                    insert_before(val,key);
                    break;
            case 6:
                    printf("Enter value : ");
                    scanf("%d",&val);
                    insert_at_beg(val);
                    break;
            case 7:
                printf("GOOD BYE USER!");
                break;
            default : printf("Invalid Input ");
       }
    }while(ch != 7);

}
