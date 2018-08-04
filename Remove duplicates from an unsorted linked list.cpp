{
//Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=newNode(data);
			else
			{
				temp->next = newNode(data);
				temp=temp->next;
			}
		}


		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;

	}
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node *removeDuplicates(Node *root)
{
    Node *ptr1=root, *ptr2 ,*temp;
    while(ptr1!=NULL)
    {
        ptr2=ptr1->next;
        temp=ptr1;
        while(ptr2!=NULL)
        {
            if(ptr2->data==ptr1->data)
            {
                temp->next=ptr2->next;
                ptr2->next=NULL;
                ptr2=temp->next;
            }
            else
            {
                temp=temp->next;
                ptr2=temp->next;
            }
        }
        ptr1=ptr1->next;
    }
    return root;
 // your code goes here
}
