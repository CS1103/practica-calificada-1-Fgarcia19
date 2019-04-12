//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <string>

namespace UTEC{

    class node{
    private:
        int value;
        node* next;
    public:
        node();
        node* setnext(node* _next);
        node* getnext();
        int setvalue(int _value);
        int getvalue();
    };
class TwoLinkedList {
private:
    node* tail;
    node* _arr1;
    node* _arr2;
    int _size1;
    int _size2;
public:
    TwoLinkedList();
    //~v();
    void push_back1(int value);
    void push_back2(int value);
    std::string getlist(int n);

    std::string merge(int n);
    void pop_back();
    void insert(int pos, int value);
    int getitem(int i);
    int size1();
    int size2();
};

}



#endif //PC1_TWOLINKEDLIST_H
