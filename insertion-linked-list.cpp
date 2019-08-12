#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list{
	private:
		node *head,*tail;
	public:
		linked_list(){
			head=NULL;
			tail=NULL;
		}
	void add_node(int n){
		node* temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=tail->next;
		}
	}
	void print(){
		node *current;
		current=head;
		while(current!=NULL){
			cout<<current->data<<endl;
			current=current->next;
		}
	}
};
int main(){
linked_list a;
a.add_node(1);
a.add_node(2);
a.add_node(3);
node* head=NULL;
a.print();
	return 0;
}
