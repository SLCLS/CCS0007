#include <iostream>
#include <iomanip>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
}*start;

//typedef node *NODE;

void display()
{
	node *p;
	if(start==NULL)
	{
		cout << "List is empty!\n";
		return;
	}
	p=start;
	cout << endl;
	cout << setw(10) << "ADDRESS" << setw(15) << "PREV" <<setw(15) << "DATA" << setw(20) << "NEXT" << endl;
	while(p!=NULL)
	{
		cout << setw(10) << p << setw(15) << p->prev <<setw(15) << p->data << setw(20) << p->next << endl;
		p = p->next;
	}
	cout << endl;
}
void createlist(int n)
{
	node *p, *end;
	end = new node;
	end->data = n;
	end->next = NULL;
	
	if(start==NULL)
	{
		end->prev=NULL;
		start=end;
	}
	else
	{
		p=start;
		while(p->next!=NULL)
			p=p->next;
		p->next = end;
		end->prev = p;
	}
}

void reverse()
{
	node *p1, *p2;
	p1=start;
	p2=p1->next;
	p1->next=NULL;
	p1->prev = p2;
	while(p2!=NULL)
	{
		p2->prev=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p2->prev;
	}
	start=p1;
}

int main()
{
	while(1)
	{
		int choice;
		cout << "[1] - Create a list\n";
		cout << "[2] - Display\n";
		cout << "[3] - Reverse\n";
		cout << "[4] - Exit\n";
		cout << "===================\n";
		cout << "Enter your choice: ";
		cin >> choice;
		int n, num, pos;
		switch(choice){
			case 1:
				cout << "\nHow many node you want: ";
				cin >> n;
				cout << "\nEnter " << n << " element(s)\n";
				for(int i=0;i<n;i++)
				{
					cin >> num;
					createlist(num);
				}
				display();
				break;
			case 2:
				display();
				break;
			case 3:
				reverse();
				display();
				break;
			case 4:
				exit(1);
			default:
				cout << "\nWrong choice!\n";
		}
		cout << endl;
		
	}	
	return 0;

}
