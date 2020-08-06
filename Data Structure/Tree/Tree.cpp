#include<iostream>
#include"Queue.h"
#include"Tree.h"
using namespace std;

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
    if (p == NULL)
        return;
    cout << p->value << " ";
    Preorder(p->leftchild);
    Preorder(p->rightchild);
}

void Tree::Inorder(struct Node* p) {
    if (p == NULL)
        return;
    Preorder(p->leftchild);
    cout << p->value << " ";
    Preorder(p->rightchild);
}

void Tree::Postorder(struct Node* p) {
    if (p == NULL)
        return;
    Preorder(p->leftchild);
    Preorder(p->rightchild);
    cout << p->value << " ";
    
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
    t.Levelorder(t.getRoot());
	return 0;
}
