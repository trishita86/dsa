//Insert element
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string>q;
	q.push("cat");
	q.push("dog");
	q.push("rat");
	q.push("fox");
	q.push("lion");
	q.pop();
	q.pop();
	cout<<"queue elements"<<endl;
	while(!q.empty())
	{
		cout<<"elements="<<q.front()<<endl;
		q.pop();
	}
	return 0;
}*/
//Remove Element
#include<bits/stdc++.h>
using namespace std;
void display(queue<string>q)
{
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
}
int main()
{
	queue<string>q;
	q.push("rat");
	q.push("fox");
	q.push("lion");
	q.push("cat");
	q.push("rabbit");
	cout<<"inital queue"<<endl;
	display(q);
	q.pop();
	q.pop();
	cout<<"after deletion"<<endl;
	display(q);
	return 0;
}
