/*

				Tree Formulas:

*For the given of nodes n, there are T(n)=(2nCn)/(n+1) trees

*The number can be fill in a tree is T(n)=(n!)(2nCn)/(n+1) with n is the number of node

*For the given height, there are 2^(n-1) tress;

*The minimum node in a tree is height+1

*The maximum node in a tree is 2^(h+1)-1 with h is the height

*The minimum heigh in a binary tree is log(n+1)-1 with n is the number of node

*The maximum heigh in a binary tree is n-1




			    Heigh vs Node:

*Number of node with a degree 0 == numberof node in degree 2 + 1 (Only in a binary tree)

*If Heigh "h" is given, min node in a strict binary tree is n=2h+1. And maximum node is n=2^(h+1)-1

*If number of Node "n" is given, min height in a tree= log(n+1)-1. And max height is (n-1)/2

*In a strict binary tree, external node= internal node+1

*n-ary tree is a tree that each node does not have more than n degree

*Strict n-ary tree is a tree that each node has either 0 children or exactly n children

*In an n-ary tree if height "h" is given, there are n*h+1 minimum number of node, and (n(^h + 1)-1)/(n-1) node

*In an m-ary tree if number of node "m" is given, there is logn(n(m-1)+1)-1 min height with "n" is the number of node, and (n-1)/m max height;

*Full binary tree is the binary tree that has maximum number of node with a certain height

*Complete binary tree is a binary tree that does not have blank when preresented by an array. 



				Tree Traversal:

*Pre-order: root first, then left-child, right-child

*In-order: most left-child first, then root, then right-child

*Post-order: most left-child first, then right-child, then root

*/


