#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int detectloop(struct Node *head){
    struct Node *slow = head;
    struct Node *fast = head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    if(slow==fast){
        return 1;
    }
    return 0;
}



int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

   
    second->data = 11;
    second->next = third;


    third->data = 41;
    third->next = fourth;

   
    fourth->data = 66;
    fourth->next = second;

    if(detectloop(head)){
        printf("true\n");
    } else {
        printf("false");
    }
}