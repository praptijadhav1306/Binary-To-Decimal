#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int binaryConversion(string s){
    int decimal = 0;
    int base = 1;
    int n =(int)s.length();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int convert(Node * head ){
    string s;
    Node *temp=head;
    while(temp!=NULL){
        int x = temp->data;
        temp = temp->next;

        char c = (x==1)?'1':'0';
        s += c;
    }

    return binaryConversion(s);
    
}

void printList(Node*head){
    Node * temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    head->data = 1;
    head->next = first;
    first->data = 0;
    first->next = second;
    second->data = 0;
    second->next = NULL;
    cout<<"The given Binary Number is: ";
    printList(head);

    int ans = convert(head);
    cout<<"The decimal number is: "<<ans;
    return 0;
}