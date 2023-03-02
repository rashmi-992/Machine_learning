#include <stdio.h>
#define max 5
int arr[max];
void pop();
void push();
void peek();
void display();
int top=-1;
int item;
int main() {
    // Write C code here
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
    return 0;
}
void push(){
    if(top==max-1){
        printf("Overflow");
    }
    else{
        
        printf("Enter ur element: ");
        scanf("%d",&item);
        top=top+1;
        arr[top]=item;
     
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
        
    }
    else{
        
        printf("Deleted element is %d ",arr[top]);
        top=top-1;
        
    }
}
void peek(){
if(top==-1){
        printf("Underflow");
        
    }
    else{
        
        printf("Top element is %d ",arr[top]);
        
        }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
    printf("Traversal of stack is ");
    for(i=top;i>=0;i--){
        printf("\n %d",arr[i]);
    }
        
    }
}
        
    
