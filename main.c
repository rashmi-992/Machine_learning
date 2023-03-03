#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*top=0;
void push();
void pop();
void peek();
void display();
void main()
{
    int ch;
    char ch1;
    do
    {
        printf("Select ur option\n1.push\n2.peek\n3.pop\n4.display\n:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push();
        break;
        case 2:
        peek();
        break;
        case 3:
        pop();
        break;
        case 4:
        display();
        break;
        default:
        printf("\nOption does not exist");
       
    }
        printf("\nDo you want to continue(y/n)?");
        scanf("%c",&ch1);
        scanf("%c",&ch1);
        
        
    }while(ch1=='y' || ch1=='Y');
    
}
void push(){
    int x;
    printf("Enter ur element to insert: ");
    scanf("%d",&x);
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop(){
    struct node*temp;
    temp=top;
    if(top==0){
        printf("Stack is empty");
    }
    else{
        printf("deleleted element is:%d ",top->data);
        top=top->link;
        free(temp);
    }
}
void peek(){
    if(top==0){
        printf("Stack is empty");
    }
    else{
        printf("Top element is:%d ",top->data);
        
    }
}
void display()
{
     struct node*temp;
    temp=top;
    if(top==0){
        printf("Stack is empty");
    }
    else
    {
        while(temp!=0)
        {
        printf("\n %d ",top->data);
        temp=temp->link;
            
        }
    }
}