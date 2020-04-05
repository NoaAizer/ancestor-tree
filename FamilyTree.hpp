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
        Tree& addFather(string son, string father);
        Tree& addMother(string son, string mother);

        void display();
        
        string relation(string name);
        string find (string relation);

        void remove(string name);

    };
}