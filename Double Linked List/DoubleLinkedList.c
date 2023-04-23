#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void append(void);
void display(void);
void revdisplay(void);
struct node
{
    struct node *first;
    int data;
    struct node *second;
};
struct node *root = NULL;
int main(void)
{
    append();
    append();
    append();
    display();
    revdisplay();
    getch();
    return 0;
}
void append()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d", &temp->data);
    temp->first = NULL;
    temp->second = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        struct node *p = root;
        while (p->second != NULL)
            p = p->second;
        temp->first = p;
        p->second = temp;
    }
}
void display()
{
    if (root == NULL)
        printf("NO Node In Linked List\n");
    else
    {
        struct node *p = root;
        while (p != NULL)
        {
            printf("%d --->", p->data);
            p = p->second;
        }
    }
}
void revdisplay()
{
    if (root = NULL)
        printf("NO Data \n");
    else
    {
        struct node *p = root;
        struct node *q;
        while (p != NULL)
            p = p->second;
        q = p;
        while (q->first != NULL)
        {
            q = q->first;
            printf("%d", p->data);
        }
    }
}