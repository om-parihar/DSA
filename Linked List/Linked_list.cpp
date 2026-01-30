// Linked List Traversal from back

#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;
    NODE(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    NODE *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new NODE(arr[i]);
        }
        else
        {
            NODE *temp;
            temp = new NODE(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }
    NODE *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}