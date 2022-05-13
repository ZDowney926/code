#include <bits/stdc++.h>
using namespace std;

typedef struct LNode{
    int data;
    LNode* next;
}LNode,*ListNode;

int main()
{
    ListNode L;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        LNode* p;
        p = L->next;
        cin >> p->data;
    }
    for(int i = 0; i < n; i++)
    {
        LNode* p;
        p = L->next;
        cout << p->data;
    }
}