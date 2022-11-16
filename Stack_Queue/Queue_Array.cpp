/*#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void push(int val)
{
	if(rear>=n-1)
	cout<<"Queue overflow"<<endl;
	else
	{
	if(front==-1)
	{
		
		front=0;
		rear=rear+1;
		queue[rear]=val;
	}
}
}
void pop()
{
	if(front==-1 || front>rear)
	cout<<"Queue underflow"<<endl;
	else
	{
	cout<<"deleted elements"<<queue[front]<<endl;
	front++;
	}
}
void display()
{
	if(front==-1)
	cout<<"Queue empty"<<endl;
	else
	{
		cout<<"elements in Queue"<<endl;
		for(int i=front;i<=rear;i=i+1)
		{
			cout<<queue[i]<<endl;
		}
	}
}
int main()
{
	int ch,val;
	cout<<"1.push in queue"<<endl;
	cout<<"2.pop in queue"<<endl;
	cout<<"3.display in queue"<<endl;
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
}*/
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
