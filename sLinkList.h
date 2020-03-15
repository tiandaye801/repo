#ifndef SLINKLIST_H_INCLUDED
#define SLINKLIST_H_INCLUDED
#include <cstddef>
template <class elemType>
class list{
public:
    virtual void clear()=0;
    virtual ~list(){};
    virtual void traverse() const=0;
};
template <class elemType>
class sLinkList: public list<elemType>
{
private:
    struct node{
    elemType data;
    node *next;

    node(const elemType &x, node *n=NULL)
    {
        data=x; next=n;;
    }
    node():next(NULL) {}
    ~node(){}

    };
    node *head;

    node *move(int i)const;
public:
        int currentLength;
    sLinkList();
    ~sLinkList(){clear();delete head;}
    void clear();
    void traverse()const;
    void erase(int x, int y);
    void create();

};
#endif // SLINKLIST_H_INCLUDED
