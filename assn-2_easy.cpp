#include<stdio.h>
#include<stdlib.h>

//structure is been declared for the linked list
struct node{
    int data;   //declaring the node data as integer
    struct node * next;  // declaring the pointe for the next node
};

// creating a function for the creation of the node
struct node *  createLinkedList(int n)
{
     struct node* head=(struct node *)malloc(sizeof(struct node));  //Allocating the memory for the 1st node
//Checking if the Linked list is empty or not
    struct node * newNode, *temp;
    int data;
    if(head==NULL)
    {printf("\nMemory not allocated\n");
    exit(0);
    }
    //Inputing the data and next pointer for the head node
    else{
        printf("\nEnter the data for node 1:");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;

        //inputing the data and the next pointer for all the n nodes
        for(int i=2;i<=n;i++)
        {
            struct node * newNode=(struct node *)malloc ( sizeof(struct node));
            //Checking if the node is empty or not
            if(newNode==NULL)
            {
                printf("\nUnable to allocate memory\n");
                break;
            }
            else {
                printf("\nEnter the data for the node %d: ",i);
                scanf("%d",&data);
                newNode->data=data;
                newNode->next=NULL;
                temp->next=newNode;
                temp=temp->next;
            }
        }
    }
    //returning head
    return head;

}
//Created a funtion for counting the number of nodes we declared
void countNodes(struct node * temp)
{
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    //printing the number of nodes
    printf("\nTotal number of nodes are : %d",count );

}

//Creating a funtion to print the data of the Linked List created
void printLinkedList(struct node * head){
    struct node * temp=(struct node *)malloc (sizeof(struct node));
    temp=head;\
    if(head == NULL)
    {
        printf("\nList is empty.");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
 int main (){
    int n; 
    struct node * head; //created a head structure variable
    printf("Enter the total number of nodes you want to declare: ");
    scanf("%d",&n); //taking the number of node to be created form the user
    printf("\nEnter the data to create the list \n");
    head=createLinkedList(n);// Linked list is created and returned the head to the head variable
    printf("\nThe linked List is : \n");
    printLinkedList(head);// calling the function to print the created linkedlist
    countNodes(head); // calling the funtion to count the number of nodes
     return 0;
 }