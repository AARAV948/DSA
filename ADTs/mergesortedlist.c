#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};



int main(){
    struct Node *head1;
    struct Node *second1;
    struct Node *third1;
    struct Node *fourth1;

    
    head1 = (struct Node *)malloc(sizeof(struct Node));
    second1 = (struct Node *)malloc(sizeof(struct Node));
    third1 = (struct Node *)malloc(sizeof(struct Node));
    fourth1 = (struct Node *)malloc(sizeof(struct Node));

 
    head1->data = 7;
    head1->next = second1;

   
    second1->data = 11;
    second1->next = third1;


    third1->data = 41;
    third1->next = fourth1;

   
    fourth1->data = 66;
    fourth1->next = NULL;




    struct Node *head2;
    struct Node *second2;
    struct Node *third2;
    struct Node *fourth2;

    head2 = (struct Node *)malloc(sizeof(struct Node));
    second2 = (struct Node *)malloc(sizeof(struct Node));
    third2 = (struct Node *)malloc(sizeof(struct Node));
    fourth2 = (struct Node *)malloc(sizeof(struct Node));

     head2->data = 10;
    head2->next = second2;

   
    second2->data = 20;
    second2->next = third2;


    third2->data = 40;
    third2->next = fourth2;

   
    fourth2->data = 80;
    fourth2->next = NULL;



}