/*#include <iostream>
using namespace std;
#define n 100
class stack
{
    int top;

    int *arr;

public:
    stack()
    {
        top = -1;

        arr = new int[n];
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "no element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    return 0;
}*/
// C++ program to Implement a stack
// using singly linked list
#include <iostream>
using namespace std;

// Declare linked list node

struct Node
{
    int data;
    Node *next;
};

Node *top;

// Utility function to add an element
// data in the stack insert at the beginning
void push(int data)
{

    // Create new node temp and allocate memory in heap
    Node *temp = new Node();

    // Check if stack (heap) is full.
    // Then inserting an element would
    // lead to stack overflow
    if (!temp)
    {
        cout << "\nStack Overflow";
        exit(1);
    }

    // Initialize data into temp data field
    temp->data = data;

    // Put top pointer reference into temp next
    temp->next = top;

    // Make temp as top of Stack
    top = temp;
}

// Utility function to check if
// the stack is empty or not
int isEmpty()
{
    // If top is NULL it means that
    // there are no elements are in stack
    return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{

    // If stack is not empty , return the top element
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

// Utility function to pop top
// element from the stack
void pop()
{
    Node *temp;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {

        // Assign top to temp
        temp = top;

        // Assign second node to top
        top = top->next;

        // This will automatically destroy
        // the next between first node and second node

        // Release memory of top node
        // i.e delete the node
        free(temp);
    }
}

// Function to print all the
// elements of the stack
void display()
{
    Node *temp;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            // Print node data
            cout << temp->data << "-> ";

            // Assign temp next to temp
            temp = temp->next;
        }
    }
}

// Driver Code
int main()
{

    // Push the elements of stack
    push(11);
    push(22);
    push(33);
    push(44);

    // Display stack elements
    display();

    // Print top element of stack
    cout << "\nTop element is "
         << peek() << endl;

    // Delete top elements of stack
    pop();
    pop();

    // Display stack elements
    display();

    // Print top element of stack
    cout << "\nTop element is "
         << peek() << endl;

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
    int val;
    struct node *next;
};
struct node *head;

void main()
{
    int choice = 0;
    printf("\n*********Stack operations using nexted list*********\n");
    printf("\n----------------------------------------------\n");
    while (choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
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
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
}
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item pushed");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped");
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}*/
