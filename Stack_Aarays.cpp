#include<iostream>
using namespace std;
int stack[100], n=100,top=-1;
void push(int val)
{
	if(top>=n-1)
	cout<<"Stack overflow"<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	cout<<"stack underflow"<<endl;
	else
	{
		cout<<"popped element="<<stack[top];
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"elements present in the stack are"<<endl;
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<endl;
		}
	}
	else
	{
		cout<<"stack is empty"<<endl;
	}
}
int main()
{
	int ch,val;
	cout<<"1.push in stack"<<endl;
	cout<<"2.pop in stack"<<endl;
	cout<<"3.display in stack"<<endl;
	cout<<"4.exit"<<endl;
	while(ch!=4)
	{
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
				cout<<"enter value to be pushed"<<endl;
				cin>>val;
				push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"exit"<<endl;
				break;
			}
			default:{
				cout<<"Invalid Choice"<<endl;
			}
		}
	}
	return 0;
}
