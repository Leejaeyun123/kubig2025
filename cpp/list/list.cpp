#include "list.h"
#include <cassert>

Node::Node(int data, Node *next)
: data_(data), next_(next)
{

}

std::ostream& operator<<(std::ostream& out, const List& rhs)
{
    return rhs.printList(out);
}

std::ostream& List::printList(std::ostream& out) const
{
    out << "[";

    Node *p = ptr_->next_;
    while (p ){
        out << p->data_;
        out << ((p->next_ ) ? ", " : "");

        p = p->next_;
    }
    out << "]";

    return out;
}

List::List()
: ptr_(new Node(-1, NULL)) 
{
    
    assert(ptr_);    
}
List::~List()
{
    Node *p = ptr_;
    while (p )
    {
        Node *tmp = p;
        p = p->next_;

        delete p;
    }
}

void List::insertFirstNode(int data)
{
    ptr_->next_ = new Node(data, ptr_->next_);
    assert(ptr_->next_);
}

void List::insertNode(int prevData, int data)
{
    Node *p = ptr_->next_;
    while (p )
    {
        if (p->data_ == prevData)
            break;
            
        p = p->next_;
        
    }
    if (p )
    {
        p->next_ = new Node(data, p->next_); 
    }
        
}

void List::deleteNode(int data)
{
    Node *p = ptr_->next_;
    Node *p2 = ptr_;

    while (p )
    {
        if (p->data_ == data)
            break;

            p = p->next_;
            p2 = p2->next_;
        
    }

    if (p )
    {
        p2->next_ = p->next_;
        delete p;
    }
    
}