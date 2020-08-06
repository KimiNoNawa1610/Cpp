#pragma once
#ifndef TREE_H
#define TREE_H
class Tree {
private:
    Node* root;
public:
    Tree() { root = nullptr; }
    void CreateTree();
    void Preorder() { Preorder(root); }  
    void Preorder(Node* p);
    void Postorder() { Postorder(root); }  
    void Postorder(Node* p);
    void Inorder() { Inorder(root); }
    void Inorder(Node* p);
    void Levelorder() { Levelorder(root); }  
    void Levelorder(Node* p);
    int Height() { return Height(root); }  
    int Height(Node* p);
    Node* getRoot() { return root; }
};
#endif // !TREE_H

