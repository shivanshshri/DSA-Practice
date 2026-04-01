#include<stdio.h>
#define MAX 100
int front = -1, rear = -1;
int queue[MAX];

void enqueue(){
    int val;
    if(rear==MAX-1){
        printf("\nOverflow");
    }
    else{
        if(front==-1){
            front = 0;
        }
        rear++;
        printf("Enter the element : ");
        scanf("%d", &val);
        queue[rear] = val;
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("\nUnderflow");
    }
    else{
        printf("%d is dequeued", queue[front++]);
    }
}

void display(){
    if(front == -1 || front>rear){
        printf("Underflow");
        return;
    }
    else{
        printf("\nElements are : ");
        for(int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }
}
int main(){

    while(1){
        printf("\n1. Enqueue  2. Dequeue  3. Display\n");
        printf("--> ");
        int choice;
        scanf("%d", &choice);
        printf("\n\n");
        if(choice==1){
            enqueue();
        }
        if(choice==2){
            dequeue();
        }
        if(choice==3){
            display();
        }
    }
    
}