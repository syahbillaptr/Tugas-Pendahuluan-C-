#include "graph.h"

void createList_1301213311(Graph &G){
    first(G) = NULL;
}

adrNode newNode_1301213311(char x){
    adrNode p = new Node;
    info(p) = x;
    next(p) = NULL;
    p-> child = NULL;
    return p;
}

void addNode_1301213311(Graph &G, adrNode p){
    if(first(G) == NULL){
        first(G) = p;
    }else{
        adrNode Q;
        Q = first(G);
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = p;
    }
}

adrNode findNode_1301213311(Graph G, char x){
    if(first(G) == NULL){
        return NULL;
    }else{
        adrNode Q;
        Q = first(G);
        while (Q != NULL){
            if(info(Q) == x){
                return Q;
            }
            Q = Q -> next;
        }
        return NULL;
    }
}
void addEdGe_1301213311(Graph &G, char x, char y){
    if(findNode_1301213311(G,x) == NULL){
        cout << "Data Tidak Tersedia"<<endl;
    }else{
        if(findNode_1301213311(G,x) -> child == NULL){
            findNode_1301213311(G,x) -> child = newNode_1301213311(y);
        }else{
            adrNode Q;
            Q = findNode_1301213311(G,x) -> child;
            while (next(Q) != NULL){
                Q = next(Q);
            }
            next(Q) = newNode_1301213311(y);
        }
    }
}

bool isConnected_1301213311(Graph G, char x, char y){
    if(findNode_1301213311(G,x) == NULL){
        cout << "Data Tidak Ditemukan"<<endl;
        return false;
    }else{
        adrNode cekChild;
        cekChild = findNode_1301213311(G,x) -> child;

        while(cekChild != NULL){
            if(cekChild -> info == y){
                return true;
            }
            cekChild = cekChild -> next;
        }
        return false;
    }
}

void printGraph_1301213311(Graph G){
    if(first(G) == NULL){
        cout << "Data Kosong"<< endl;
    }else{
        adrNode Q;
        Q = first(G);
        while(Q != NULL){
            cout << "Node " << info(Q) << ":";
            adrNode QChild = Q ->child;
            while(QChild != NULL){
                cout << " - "<<QChild->info;
                QChild = QChild -> next;
            }
            cout<<endl;
            Q = Q -> next;
        }
    }
}
