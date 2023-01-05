#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    cout<<" ======================================================="<<endl;
    Graph G;
    createList_1301213311(G);


    addNode_1301213311(G, newNode_1301213311('A'));
    addNode_1301213311(G, newNode_1301213311('B'));
    addNode_1301213311(G, newNode_1301213311('C'));
    addNode_1301213311(G, newNode_1301213311('D'));


    addEdGe_1301213311(G,'A','C');
    addEdGe_1301213311(G,'A','D');
    addEdGe_1301213311(G,'A','B');


    addEdGe_1301213311(G,'B','A');
    addEdGe_1301213311(G,'B','D');


    addEdGe_1301213311(G,'C','A');


    addEdGe_1301213311(G,'D','B');
    addEdGe_1301213311(G,'D','A');


    printGraph_1301213311(G);
    return 0;
}

