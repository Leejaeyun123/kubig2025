#ifndef LIST_H
#define LIST_H
#include <iostream>
class Node {
friend class List;

private:
    int data_;
    Node *next_;

    Node(const Node& rhs);
    Node& operator=(const Node& rhs);

    Node(int data, Node *next);


};

class List {
friend std::ostream& operator<<(std::ostream& out, const List& rhs);

private:
    Node *ptr_;

    List(const List &rhs);
    List& operator=(const List& rhs);

    std::ostream& printList(std::ostream& out) const;
public:
    List();
    ~List();

    void insertFirstNode(int data);
    void insertNode(int prevData, int data);
    void deleteNode(int data);
};

#endif