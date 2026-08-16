#include <stdio.h>

#include <stdlib.h>

#define max_size 5

int Stack[max_size];
int top = -1;

void Push(int value) {
    if (top == max_size - 1) {
        printf("Stack is FULL !!!!\n");
    }
    else {
        top++;
        Stack[top] = value;
        printf("Value push successful :)\n");
    }
}

void Pop(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Pop value: %d\n",Stack[top]);
        top--;
    }
}

void Peek(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Top element: %d\n",Stack[top]);
    }
}

void Display() {
    if (top == -1) {
        printf("Stack is Empty !!!!\n");
    }
    else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
}

int main() {
    while(1){
        printf("Stack Operation Menu\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter option: ");
        int n;
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter value: ");
            int val;
            scanf("%d",&val);
            Push(val);
            break;
            
            case 2:
            Pop();
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
