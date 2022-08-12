#include <iostream>

#include <stdlib.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // Node Class Constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insert Element At Tail

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Display All Element

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node *reversek(node *&head, int k)
{

    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {

        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}
node *mergeRecursive(node *&head1, node *&head2)
{
    node *result;
    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }
    else if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}
// Insert At Head

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Seraching  At Linked List

bool Search(node *head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int val)
{

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void insertAtHeadCircle(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTailCircle(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHeadCircle(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deleteAtHeadCircle(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}
void deletionCircle(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHeadCircle(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void displayCircle(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
void evenAfterodd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next == NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node *head = NULL;
    // node *head1 = NULL;
    // node *head2 = NULL;
    // int arr1[] = {1, 4, 5, 7};
    // int arr2[] = {2, 3, 6};
    // for (int i = 0; i < 4; i++)
    // {
    //     insertAtTail(head1, arr1[i]);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     insertAtTail(head2, arr2[i]);
    // }
    // insertAtTail(head1, 1);
    // insertAtTail(head1, 2);
    // insertAtTail(head1, 3);
    // insertAtTail(head1, 4);
    // insertAtTail(head1, 5);
    // insertAtTail(head1, 6);
    // insertAtTail(head2, 9);
    // insertAtTail(head2, 10);
    // intersect(head1, head2, 3);
    // display(head1);
    // display(head2);
    // cout << intersection(head1, head2) << endl;
    // display(head);
    // insertAtHead(head, 4);
    // display(head);
    // cout << Search(head, 1);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // deletion(head, 3);
    // display(head);
    // node *newhead = reverseRecursive(head);
    // display(newhead);
    // int k = 2;
    // node *newhead = reversek(head, k);
    // display(newhead);
    // node *newhead = merge(head1, head2);
    // node *newhead = mergeRecursive(head1, head2);
    // display(newhead);

    // insertAtTailCircle(head, 1);
    // insertAtTailCircle(head, 2);
    // insertAtTailCircle(head, 3);
    // insertAtTailCircle(head, 4);
    // displayCircle(head);
    // insertAtHeadCircle(head, 5);
    // displayCircle(head);
    // deletionCircle(head, 5);
    // displayCircle(head);

    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head, arr[i]);
    }
    display(head);
    evenAfterodd(head);
    display(head);

    return 0;
}