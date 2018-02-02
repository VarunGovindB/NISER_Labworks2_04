#include <iostream>
using namespace std;

struct varun          // node created
{
	int data;
	varun *next;
	varun()
	{
		data = 0;
		next = NULL;
	}
};

class kanna          // class declaration
{
private:
	varun *head, *tail;
public:
	kanna()          // constructor
	{
		head = NULL;
		tail = NULL;
	}
	
	void insert(int n)     // function to insert a node at the end of the list
	{
		varun *temp = new varun;
		temp->data = n;
		temp->next = NULL;
		if (head == NULL) 
		{
			head = temp;
			tail = temp;
			
		}
		else 
		{
			tail->next = temp;
			tail = temp;
		}
	}
	
	void display()    // function to display nodes
	{
		varun *temp = new varun;
		temp = head;
		while (temp != NULL) 
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
		
	}
	
	void deleteNode()  // function to delete node at the end
	{
		varun *previous = new varun;
		varun *current = new varun;
		previous=NULL;
		current = head;
		while(current->next != NULL) 
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}
	
	
	int countItems()     //function to count items
	{
		varun *current;
		current = head;
		int a=1;
		while(current->next!=NULL)
		{
			++a;
			current = current->next;	
		}
		return a;		
	}
};

int main()
{
	kanna a;
	a.insert(4);
	a.insert(6);
	a.insert(7);
	a.insert(12);
	a.display();
	a.deleteNode();
	a.display();
	a.insert(3);
	a.display();
	a.deleteNode();
	a.display();
	a.display();
	cout<<a.countItems();
	a.insert(8);
	a.display();
	return 0;
}
