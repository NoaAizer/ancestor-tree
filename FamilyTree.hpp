#pragma once

#include <iostream>
using namespace std;

namespace family{

    class Tree{

        string name;
        Tree* father;
        Tree* mother;
        Tree* son;

        public:
        Tree(string name){
            this->name=name;
            this->father=NULL;
            this->mother=NULL;
            this->son=NULL;
        }
        Tree& addFather(string son, string father){
        cout << "add father" << endl;
        return *this;
        }
        Tree& addMother(string son, string mother){
            cout << "add mother" << endl;
        return *this;
        }

        void display(){
            cout << "display" << endl;
        }
        
        string relation(string name){
            cout << "relation" << endl;
            return "relation";
        }
        string find (string relation){
              cout << "find" << endl;
            return "find"; 
        }

        void remove(string name){
               cout << "remove" << endl;
        }

    };
}