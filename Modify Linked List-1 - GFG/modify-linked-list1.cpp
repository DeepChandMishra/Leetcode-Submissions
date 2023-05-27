//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
          vector<int>v;
        Node* temp=head;
        //store value in vector
        while (temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        int i=v.size()/2;
        int k=v.size();
        //first half value replace by last value - first value
        while(i--){
            temp->data=v.back()-temp->data;
            v.pop_back();
            temp=temp->next;
        }
        //if size odd then skip mid element
        if(k%2!=0){
        temp=temp->next;
            v.pop_back();
        }
        int j=v.size()-1;
        while(temp!=NULL){
            temp->data=v[j--];
            
            temp=temp->next;
        }
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends