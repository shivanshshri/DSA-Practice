#include<stdio.h>
#define MAX 100

int top = -1;
int stack[MAX];

void stackPush(){
    if(top==MAX-1){
        printf("\nStack is full. Overflow\n");
    }
    else{
        top++;
        int n;
        printf("Enter the element : ");
        scanf("%d", &n);
        stack[top] = n;
    }
}

void stackPop(){
    if(top==-1){
        printf("\nStack is empty. Underflow");
    }
    else{
        printf("\n%d popped from stack", stack[top]);
        top--;
    }
}

void displayStack(){
    if(top==-1){
        printf("\nStack is empty");
    }
    else{
        printf("Elements are : ");
        for(int i=top; i>=0; i--){
            printf("%d ", stack[i]);
        }
    }
}
int main(){

    while(1){
        printf("\nWhat would you like to perform?\n\n");
        printf("1. Push  2. Pop  3. Display\n\n");
        int choice;
        printf("--> ");
        scanf("%d", &choice);

        if(choice==1){
            stackPush();
        }
        if(choice==2){
        stackPop();
        }
        if(choice==3){
            displayStack();
        }
        }
    

}

