
#include <stdio.h>
#include <stdlib.h>

void insert();
void duplicate();
void display();

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* val;
struct node* temp;

int main()
{
    int n;
    printf("Enter number of elements:\t");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        insert();
    }
    duplicate();
    return 0;
}

void insert(){
    
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter newnode data:\t");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if(head==NULL) head = temp;
    else{
        temp->next = head;
        head = temp;
    }
}

void duplicate(){
    display();
    temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            val = temp->next->next;
            free(temp->next);
            temp->next = val;
        }
    else  temp = temp->next;
    }
    display();
}

void display(){
    temp = head;
    while(temp != NULL){
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
