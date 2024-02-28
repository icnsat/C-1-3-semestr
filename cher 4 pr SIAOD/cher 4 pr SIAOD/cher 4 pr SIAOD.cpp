#include <iostream>
using namespace std;



//1)векторное хранение - стат и дин
// int A[100]
// 
//2)списковое хранение в дин памяти 
// new 
struct node
{
    int data = 0;
    node* next = NULL;
};

void create_list(node*& head, int n);
void outList(node* L);
node* findKey(node* L, int key);
void insertFirst(node*& L, int data);


void create_list(node*& head, int n)
{
    int data = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> data;
        insertFirst(head, data);
    }
}


void outList(node* L) // L - head  //вывод списка
{
    node* q = L;
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->next;
    }
}

node* findKey(node* L, int key) // L - head  //поиск элемента
{
    node* q = L;
    while (q != NULL && q->data!=key)
    {
        q = q->next;
    }
    return q;//0 - не нашли, не 0 - нашли
}

void insertFirst(node*& L, int data) // L - head  //вставка в начало
{
    node* q = new node;
    q->data = data;
    if (L == NULL)
        L = q;
    else
    {
        q->next = L;
        L = q;
    }
}

//int push_back(node* L, int key)
//{
//    node* q = L;
//    if (L != NULL)
//    {
//        while (q->next != NULL)
//        {
//            q = q->next;
//        }
//        q->next = new node(key); // вставить дату 
//        return 0;
//    }
//    return 1;
//}

int main()
{
    //1 часть
    /*
    node* ptr1, * ptr2, * ptr3;
    ptr1 = new node;
    (*ptr1).data = 10;
    (*ptr1).next = NULL;
    ///////////////// или
    ptr2 = new node;
    ptr2->data = 5;
    ptr2->next = NULL;
    ptr3 = new node;
    ptr3->data = 2;
    ptr3->next = NULL;

    node* head = 0;
    head = ptr1;
    ptr1->next = ptr3;
    ptr3->next = ptr2;
    outList(head); 
    */

    //2 часть
    /*node* head = NULL;*/

    node* l = new node;
    int n = 5;
    create_list(l, n);
    outList(l);
    findKey(l , 3);
}

