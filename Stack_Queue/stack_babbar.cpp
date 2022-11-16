#include<bits/stdc++.h>
using namespace std;
class stack
{
	public:
		int *a;
		int top;
		int size;
		stack(int size)
		{
			this->size=size;
			top=-1;
			a=new int[size];
		}
		void push(int element)
		{
			if(size-top>1)
			{
				top++;
				a[top]=element;
			}
			else
			cout<<"stack overflow"<<endl;
		}
		void pop()
		{
			if(top>=0)
			{
				top--;
			}
			else
			{
				cout<<"stack underflow"<<endl;
			}
		}
		void dispaly()
		{
			if(top>=0)
			{
				for(int i=top;i>=0;i=i-1)
				{
					cout<<"elements in stack="<<a[i]<<endl;
				}
			}
			else
			{
				cout<<"stack underflow"<<endl;
			}
		}
		int peek()
		{
			if(top>=0)
			return a[top];
			else
			return -1;
		}
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
};
int main()
{
	stack st (5);
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.display();
	st.pop();
	st.pop();
	st.display();
	int p=st.peek();
	cout<<"top element="<<p<<endl;
	if(st.isEmpty())
	cout<<"stack empty"<<endl;
	else
	cout<<"stack not empty"<<endl;
	return 0;
}
