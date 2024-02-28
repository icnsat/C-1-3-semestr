#include "ATD.h"

void insert_first(node*& head, int data)
{
    node* q = new node;
    q->data = data;
    if (head == NULL)
        head = q;
    else
    {
        q->next = head;
        head = q;
    }
}

void create_list(node*& head, int n)
{
    int data = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> data;
        insert_first(head, data);
    }
}

void output_list(node* head)
{
    node* L = head;
    while (L != NULL)
    {
        cout << L->data << " ";
        L = L->next;
    }
}

node* find_by_pos(node* head, int pos)
{
    int i = 1;
    node* q = head;
    while (q != NULL && i < pos)
    {
        q = q->next;
        i++;
    }
    return q;
}

int insert_part_first(node*& head, int pos)
{
    if (pos > 1)
    {
        node* q1 = find_by_pos(head, pos);
        node* q2 = find_by_pos(head, pos - 1);
        if (q1 && q2)
        {
            q2->next = nullptr;
            node* q = q1;
            while (q->next != nullptr)
                q = q->next;
            q->next = head;
            head = q1;
            return 1;
        }
    }
    return 0;
}

void create_new_inc(node* head, node*& L2)
{
    node* L1 = head;
    while (L1 != NULL)
    {
        sorted_insert(L1, L2);
        L1 = L1->next;
    }
}

void sorted_insert(node* L1, node*& L2)
{
    if (L2 == NULL)
    {
        L2 = new node;
        L2->data = L1->data;
    }
    else 
    {
        node *prev = NULL, *current = L2;
        while (current != NULL) 
        {
            if (current->data < L1->data) 
            {
                prev = current;
                current = current->next;
            }
            else
            {
                insert(prev, current, L1, L2);
                return;
            }
        }
        insert(prev, current, L1, L2);
    }
}

void insert(node* prev, node*& next, node* L1, node*& L2)
{
    if (prev == nullptr)
    {
        insert_first(next, L1->data);
        L2 = next;
        return;
    }
    node* q = new node;
    q->data = L1->data;
    q->next = next;
    prev->next = q;
}

void delete_nodes(node*& head, int data)
{
    node *q, *L = head, *prev = NULL;
    while (L != NULL)
    {
        if (L->data == data)
        {
            if (L->next == NULL)
            {
                if (L != head)
                    prev->next = NULL;
                else
                    head = NULL;
                delete L;
                break;
            }
            else if (L == head)
            {
                q = L->next;
                head = q;
                delete L;
                L = q;
            }
            else
            {
                q = L->next;
                L->data = q->data;
                L->next = q->next;
                delete q;
            }
        }
        else
        {
            prev = L;
            L = L->next;
        }
    }
}
