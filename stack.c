#include <stdio.h>
int stack[100], top, choice, i, x, n;
void push();
void pop();
void display();
int main()
{
    top = -1;
    printf("\n Enter size of stack MAX[100]");
    scanf("%d", &n);
    printf("\n Press 1 to push.");
    printf("\n Press 2 to pop.");
    printf("\n Press 3 to display.");
    printf("\n Press 4 to exit.");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n Exit");
            break;
        }
        default:
        {
            printf("\n Wrong choice.");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top != n - 1)
    {
        printf("\n Enter element:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
    else
    {
        printf("\n stack is full!!!");
    }
}
void pop()
{
    if (top != -1)
    {
        printf("\n The poped element is: %d", stack[top]);
        top--;
    }
    else
    {
        printf("\n Empty stack.");
    }
}
void display()
{
    if (top >= 0)
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("\n empty stack.");
    }
}