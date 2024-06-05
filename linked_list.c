#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create();
void display();
void insert_at_begin();
void insert_at_end();
void insert_pos();
void delete_at_begin();
void delete_at_end();
void delete_pos();
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {
                printf("\n                MENU                             \n");
                printf("\n 1.Create     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Insert at the end  \n");
                printf("\n 5.Insert at specified position       \n");
                printf("\n 6.Delete from beginning      \n");
                printf("\n 7.Delete from the end        \n");
                printf("\n 8.Delete from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_at_begin();
                                        break;
                        case 4:
                                        insert_at_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_at_begin();
                                        break;
                        case 7:
                                        delete_at_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
    }
    
    return 0;
}
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node *));
    if (temp == NULL)
    {
        printf("memory is full");
        exit;
    }
    printf("Enter your data");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        ptr = start;
        printf("the list is :\n");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
void insert_at_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node *));
    if (temp == NULL)
    {
        printf("memory is full");
        return;
    }
    printf("enter your data");
    scanf("%d", temp->data);
    temp->next = NULL;
    if (start = NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
void insert_at_end()
{
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node *));
    if (temp == NULL)
    {
        printf("memory is full");
        return;
    }
    printf("enter your data");
    scanf("%d", temp->data);
    temp->next = NULL;
    if (start = NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void insert_pos()
{
    struct node *temp, *ptr;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node *));
    if (temp == NULL)
    {
        printf("memory is full\n");
    }
    printf("enter position you want");
    scanf("%d", &pos);
    printf("enter your data");
    scanf("%d", temp->data);
    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (i = 0, ptr = start; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("position not found");
                return;
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }
}
void delete_at_begin()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        ptr = start;
        start = start->next;
        printf("deleted data is %d", ptr);
        free(ptr);
    }
}
void delete_at_end()
{
    struct node *ptr, *temp;
    if (start == NULL)
    {
        printf("list is empty");
        return;
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        printf("\nThe deleted element is:%d\t", ptr->data);
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("\nThe deleted element is:%d\t", ptr->data);
        free(ptr);
    }
}
void delete_pos()
{
    struct node *ptr, *temp;
    int i, pos;
    if (start == NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        printf("enter a position of node to be delete");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = start;
            start = start->next;
            printf("the deleted node is %d", ptr->data);
            free(ptr);
        }
        else
        {
            for (size_t i = 0; i < pos; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("position not found");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("the deleted node is %d", ptr->data);
            free(ptr);
        }
    }
}