#include <iostream>
using namespace std;

struct CNode
{
    int data;
    CNode *next;
};

int size(CNode *last)
{
    if (!last)
        return 0;
    int count = 0;
    CNode *temp = last->next;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != last->next);
    return count;
}

int main()
{
    CNode *last = nullptr;

    CNode *n1 = new CNode{10, nullptr};
    CNode *n2 = new CNode{20, nullptr};
    CNode *n3 = new CNode{30, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;
    last = n3;

    cout << "Size of Circular Linked List is " << size(last) << endl;

    return 0;
}
