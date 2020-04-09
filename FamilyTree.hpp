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
         ~Tree(){
             delete this->father;
             delete this->mother;
        }
        
        
        Tree& addFather(string son, string father);
        Tree& addMother(string son, string mother);
        void display(); 
        string relation(string name);
        string find (string relation);
        void remove(string name);
        Tree* search (Tree* current , string name);

        private:

        void printTree(const std::string& prefix, const Tree* node, bool isLeft);
        void printTree(const Tree* node);
        string findRel (Tree* current, string relation);
    };
}