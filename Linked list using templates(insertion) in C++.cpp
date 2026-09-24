//LinkedList Using Template(Insertion)
#include<iostream>
using namespace std;
template<class T>
class Node
{
	public:
		T data;
		Node<T> *next;
		Node(T value)
		{
	       data = value;
		   next = NULL;
		}
};
template<class T>
class LinkedList
{
	Node<T>*head;
	public:
		LinkedList()
		{
		   head = NULL;
		}
		void insert(T value)
		{
		    Node<T>* newNode = new Node<T>(value);
			if(head == NULL)
			{
				head=newNode;
			}
			else
			{
				Node<T>*temp=head;
				while(temp->next!=NULL)
				temp=temp->next;
				temp->next=newNode;
			}
		}
		void display()
		{
			Node<T>*temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
};
int main()
{
    LinkedList<int>list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List: ";
    list.display();

    return 0;
}
