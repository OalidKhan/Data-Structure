#include <stdio.h>
#include <stdlib.h>
#define max_size 5

int Queue[max_size];
int front = -1;
int rear = -1;

void Enqueue(int value){
    if(rear == max_size - 1){
        printf("Queue is full !!!!\n");
    }
    else if(front == -1){
        front++;
        rear++;
        Queue[rear] = value;
        printf("Enqueue successful :)\n");
    }
    else{
        rear++;
        Queue[rear] = value;
        printf("Enqueue successful :)\n");
    }
}

void Dequeue(){
    if(front == -1){
        printf("Queue is empty !!!!\n");
    }
    else{
        printf("Dequeue value: %d\n",Queue[front]);
        front++;
        if(front > rear){
            front = -1;
            rear = -1;
        }
    }
}

void Peek(){
    if(front == -1){
        printf("Queue is empty !!!!\n");
    }
    else{
        printf("Front element: %d\n",Queue[front]);
    }
}

void Display(){
    if(front == -1){
        printf("Queue is empty !!!!\n");
    }
    else{
        printf("Queue is (front to rare): ");
        for(int i=front ; i<=rear ; i++){
            printf("%d ",Queue[i]);
        }
        printf("\n");
    }
}

int main() {
    while(1){
        printf("Queue Operation Menu\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter option: ");
        int n;
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter value: ");
            int val;
            scanf("%d",&val);
            Enqueue(val);
            break;
            
            case 2:
            Dequeue();
            break;
            
            case 3:
            Peek();
            break;
            
            case 4:
            Display();
            break;
            
            case 5:
            printf("Thank You :)\n");
            return 0;
            
            default:
            printf("invalid option :(\n");
            break;
        }
    }
    
    return 0;
}

