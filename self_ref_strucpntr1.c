#include<Stdio.h> //Singly Linked List's core
struct node
{
	int data;
	struct node *next;
}a,b,c,d,e,f;

void main()
{
	a.data=20;b.data=30,c.data=22;
	a.next=&b;b.next=&c;c.next=&d;d.next=&e;e.next=&f;f.next=&a;
	printf("%d %d %d %d",a.data,a.next->next->data,c.data,f.next->data);
} 
