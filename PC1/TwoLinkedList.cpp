//
// Created by ruben on 4/12/19.
//
#include <iostream>
#include "TwoLinkedList.h"
#include <string>
using namespace std;
namespace UTEC {
    node::node(): value(0), next{nullptr} {}
    int node::setvalue(int _value) {
        value=_value;
    }
    int node::getvalue() {
        return value;
    }
    node* node::setnext(node *_next) {
        next=_next;
    }
    node* node::getnext() {
        return next;
    }

    TwoLinkedList::TwoLinkedList() : _arr1{nullptr}, _arr2{nullptr},tail{nullptr}, _size1(0), _size2(0) {}

    int TwoLinkedList::size1(){
        return _size1;
    }

    int TwoLinkedList::size2() {
        return _size2;
    }

    void TwoLinkedList::push_back1(int value) {
        node *arr1 = new node[_size1 + 1];
        for (int i = 0; i < _size1; i++) {
            arr1[i].setvalue(_arr1[i].getvalue());
            if(i==_size1-1){
                arr1[i].setnext(nullptr);
            }
            else{
                arr1[i].setnext(&arr1[i+1]);
            }
        }
        arr1[_size1].setvalue(value);
        _arr1 = arr1;
        _size1++;
    }

    void TwoLinkedList::push_back2(int value) {
        node *arr2 = new node[_size2 + 1];
        for (int i = 0; i < _size2; i++) {
            arr2[i].setvalue(_arr2[i].getvalue());
        }
        arr2[_size2].setvalue(value);
        _arr2 = arr2;
        _size2++;
    }

    std::string TwoLinkedList::getlist(int n) {

        if (n == 1) {
            std::string lista="";
            for(int i=0;i<_size1;i++){
                lista=lista+std::to_string(_arr1[i].getvalue())+" ";

            }
            return lista;
        }

        if (n == 2) {
            std::string lista2="";
            for(int i=0;i<_size2;i++){
                lista2=lista2+std::to_string(_arr2[i].getvalue())+" ";

            }
            return lista2;
        }
    }
    std::string TwoLinkedList::merge(int n){
        if(_arr1[size1()-1].getnext()==nullptr and _arr2[size2()].getnext()==nullptr){
            node tail;
            tail.setvalue(n);
            _arr1[size1()-1].setnext(*tail)=tail;
            _arr2[size2()].setnext(*tail)==tail;
        };



    }
}