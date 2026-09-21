#include<iostream>
using namespace std ;
class BST {
    private:
    typedef struct node{
        
        int value;
        node * right;
        node * left;
    }node;
    node * root=NULL;

    public:
    void insert(int value){
        node * new_node = new node; 
        new_node->value = value ;
        new_node->right = NULL;
        new_node->left = NULL;

        if (root == NULL){
            root=new_node;
            return;
        }
        node * searcher= root;
        node * parent = NULL;

        while(searcher != NULL){
            parent =  searcher ;

                if (searcher->value >value){
                    searcher=searcher->right;
                }else if (searcher->value <=value){
                    searcher=searcher->left;
                }
        }
        
        if (parent->value <=value){
            parent->right = new_node;
        }else {
            parent->left= new_node;

        }
    }
    void search(int value){
        if (root == NULL ){
            std::cout << "srry the tree is empty"<<std::endl;
            return ;
        }
        node * tester = root;
        while(tester != NULL){
            if (value == tester ->value){
                std::cout <<"Your element is in the tree"<<std::endl;
                return;
            }else if (value <tester ->value && tester ->left != NULL){
                tester = tester ->left;
            }else if (value >tester ->value && tester ->right != NULL){
                tester = tester ->right;
            }else {
                cout<<"qba3"<<endl;
                return;
            }
        }
    }
    void deletee(int value){
    
    }
};

int main(){

}