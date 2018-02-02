#include <iostream>
using namespace std;

class queue
{   
    public:
	int a[100],head=-1,tail=-1;
	
	void insert(int n)
	{       
	if(head==-1)
	    {
	    ++head;
		a[0]=n;
		++tail;
	    }
	else
		{
		++tail;
		a[tail]=n;
	    }
	}
	
	void deleteq()
	{
		++head;
	}
	
	void display()
	{
		for(int i=head; i>=tail; i++)
		cout<<a[i]<<"->";
	}
};

int main()
{
	queue b;
	b.insert(1);
	b.insert(2);
	b.insert(3);
	b.deleteq();
	b.display();
	
return 0;	
}
