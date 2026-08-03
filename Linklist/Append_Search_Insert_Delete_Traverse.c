#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;
Node *head = NULL;

void Traverse(){
    Node *temp;
    
    if(head == NULL){
        printf("List is Empty!!!\n");
        return;
    }
    
    temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void Append(int value){
    Node *newNode, *temp;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    
    if(head == NULL){
        head = newNode;
        printf("New node added successfully\n");
        return;
    }
    
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    printf("New node added successfully\n");
}

void Search(int value){
    Node *temp;
    int found = 1;
    
    if(head == NULL){
        printf("%d is not in the List\n",value);
        return;
    }
    
    temp = head;
    while(temp != NULL){
        if(temp->data == value){
            printf("%d is found in %d Node\n",value,found);
            return;
        }
        temp = temp->next;
        found++;
    }
    
    printf("%d is not found in the List\n",value);
}

void Insert(int value, int position){
    if(position<1){
        printf("Invalid input!!\n");
        return;
    }
    
    Node *insertNode, *temp;
    insertNode = (Node *)malloc(sizeof(Node));
    insertNode->data = value;
    
    int pos = 1;
    
    if(position == 1){
        insertNode->next = head;
        head = insertNode;
        printf("New node added successfully\n");
        return;
    }
    
    temp = head;
    while(temp != NULL){
        if(pos == position-1){
            insertNode->next = temp->next;
            temp->next = insertNode;
            printf("New node added successfully\n");
            return;
        }
        
        pos++;
        temp = temp->next;
    }
    
    printf("%d is cannot add in the List\n",value);
    free(insertNode);
}

void Delete(int position){
    if(position<1){
        printf("Invalid position!!!\n");
        return;
    }
    
    Node *temp, *previous;
    int pos = 1;
    
    if(head == NULL){
        printf("The list is Empty\n");
        return;
    }
    
    temp = head;
    
    if(position == 1){
        head = head->next;
        printf("Node deleted successfully\n");
        free(temp);
        return;
    }
    
    while(temp != NULL){
        if(pos == position){
            previous->next = temp->next;
            printf("Node deleted successfully\n");
            free(temp);
            return;
        }
        pos++;
        previous = temp;
        temp = temp->next;
    }
    
    printf("Invalid position!!!\n");
    free(temp);
}

int main() {
    int OPTION, VALUE, POSITION;
    
    while(1){
        printf("1. Append\n");
        printf("2. Search\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Traverse\n");
        printf("6. Exit\n");
        printf("Choose option: ");
        scanf("%d",&OPTION);
        switch(OPTION){
            case 1:
            printf("Enter value: ");
            scanf("%d",&VALUE);
            Append(VALUE);
            break;
            
            case 2:
            printf("Enter value: ");
            scanf("%d",&VALUE);
            Search(VALUE);
            break;
            
            case 3:
            printf("Enter value & position: ");
            scanf("%d %d",&VALUE, &POSITION);
            Insert(VALUE,POSITION);
            break;
            
            case 4:
            printf("Enter position: ");
            scanf("%d",&POSITION);
            Delete(POSITION);
            break;
            
            case 5:
            Traverse();
            break;
            
            case 6:
            printf("Program ended\n");
            return 0;
            
            default:
            printf("Invalid input!!!\n");
            break;
        }
    }
    
    return 0;
}

