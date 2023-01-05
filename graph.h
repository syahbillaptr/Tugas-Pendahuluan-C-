#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

#define first(L) ((L).first)
#define info(p) (p)->info
#define info(Q) (Q)->info
#define next(p) (p)->next
#define next(Q) (Q)->next

typedef char infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode child;
    adrNode next;
};

struct Graph{
    adrNode first;
};

void createList_1301213311(Graph &G);
adrNode newNode_1301213311(char x);
void addNode_1301213311(Graph &G, adrNode p);
adrNode findNode_1301213311(Graph G, char x);
void addEdGe_1301213311(Graph &G, char x, char y);
bool isConnected_1301213311(Graph G, char x, char y);
void printGraph_1301213311(Graph G);



#endif // GRAPH_H_INCLUDED
