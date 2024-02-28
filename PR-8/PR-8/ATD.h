#pragma once
#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* next = NULL;
};

void insert_first(node*& head, int data);
void create_list(node*& head, int n);
void output_list(node* head);
int insert_part_first(node*& head, int pos);
void create_new_inc(node* head, node*& L2);
void delete_nodes(node*& head, int data);
node* find_by_pos(node* head, int pos);
void insert(node* prev, node*& next, node* L1, node*& L2);
void sorted_insert(node* L1, node*& L2);
node* find_by_key(node* L, int key);