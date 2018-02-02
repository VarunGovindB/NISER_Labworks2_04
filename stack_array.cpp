#include <iostream>
using namespace std;

class stack
{   
    public:
	int a[], top;
	stack()
	{
		top=-1;
	}
	
	void insert(int n)
	{
		if(top==-1)
		{
			a[0]=n;
			top=0;
		}
		else
		{
		++top;
		a[top]=n;
	    }
	}
	
	void deletes()
	{
		top--;
	}
	
	void display()
	{
		for(int i=top; i>-1; i--)
		cout<<a[i]<<endl;
	}
};

int main()
{
	stack b;
	b.insert(1);
	b.insert(2);
	b.insert(3);
	b.deletes();
	b.display();
	
return 0;	
}
