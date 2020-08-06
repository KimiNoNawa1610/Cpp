#include<iostream>
#include"Queue.h"
using namespace std;

class Tree {
private:
    Node* root;
public:
    Tree() { root = nullptr; }
    void CreateTree();
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Preorder(Node* p);
    void Postorder() { Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(Node* p);
    void Inorder() { Inorder(root); }
    void Inorder(Node* p);
    void Levelorder() { Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(Node* p);
    int Height() { return Height(root); }  // Passing Private Parameter in Constructor
    int Height(Node* p);
    Node* getRoot() { return root; }
};

void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;

    Queue q(25);
    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->value = x;
    root->leftchild = nullptr;
    root->rightchild = nullptr;
    q.enQueue(*root);

    while (!q.isEmpty()) {
        p = &q.deQueue();

        cout << "Enter left child value of " << p->value << ": " << flush;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->value = x;
            t->leftchild = nullptr;
            t->rightchild = nullptr;
            p->leftchild = t;
            q.enQueue(*t);
        }

        cout << "Enter left child value of " << p->value << ": " ;
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->value = x;
            t->leftchild = nullptr;
            t->rightchild = nullptr;
            p->rightchild = t;
            q.enQueue(*t);
        }
    }
}

void Tree::Preorder(struct Node* p) {
    if (p) {
        cout << p->value << ", " <<flush;
        Preorder(p->leftchild);
        Preorder(p->rightchild);
    }
}

void Tree::Inorder(struct Node* p) {
    if (p) {
        Inorder(p->leftchild);
        cout << p->value << ", " << flush;
        Inorder(p->rightchild);
    }
}

void Tree::Postorder(struct Node* p) {
    if (p) {
        Postorder(p->leftchild);
        Postorder(p->rightchild);
        cout << p->value << ", " << flush;
    }
}

void Tree::Levelorder(struct Node* p) {
    Queue q(100);
    cout << root->value << ", " << flush;
    q.enQueue(*root);

    while (!q.isEmpty()) {
        p = &q.deQueue();
        if (p->leftchild) {
            cout << p->leftchild->value << ", " << flush;
            q.enQueue(*p->leftchild);
        }
        if (p->rightchild) {
            cout << p->rightchild->value << ", " << flush;
            q.enQueue(*p->rightchild);
        }
    }
}

int Tree::Height(Node* p) {
    int l = 0;
    int r = 0;
    if (p == nullptr) {
        return 0;
    }

    l = Height(p->leftchild);
    r = Height(p->rightchild);
    if (l > r) {
        return l + 1;
    }
    else {
        return r + 1;
    }
}

int main() {
	Tree t;
    t.CreateTree();
	t.Preorder(t.getRoot());
	return 0;
}
