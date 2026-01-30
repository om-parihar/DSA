
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

NODE *reverse(NODE* head ){
    if(head==NULL || head->next==NULL){
        return head;
    }
    else{
        NODE *p=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return p;
    }
}

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
    cout<<endl;

    NODE *t=Head;
    NODE *te=reverse(t);
    
    while (te != NULL)
    {
        cout << te->data << " ";
        te = te->next;
    }

}