#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///SMO-1702027
class node
{
public:
    int data;
    node *next;
};
class M
{
public:
    node *head, *tail;
    M()
    {
        head=NULL;
        tail=NULL;
    }
    void createnode(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void display()
    {
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<endl<<endl;
    }
    void insert_start(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
    }
    void insert_position(int pos, int value)
    {
        node *pre=new node;
        node *cur=new node;
        node *temp=new node;
        cur=head;
        for(int i=1; i<pos; i++)
        {
            pre=cur;
            cur=cur->next;
        }
        temp->data=value;
        pre->next=temp;
        temp->next=cur;
    }
    void delete_position(int pos)
    {
        node *current=new node;
        node *previous=new node;
        current=head;
        for(int i=1; i<pos; i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }
    void findnode(int n)
    {
        int count=1;
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data == n)
            {
                cout<<n<<" Found at position "<<count<<" from start "<<endl;
            }
            count++;
            temp=temp->next;
        }
    }
    void deletenode(int n)
    {
        int count=1;
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data == n)
            {
                int pos=count;
                node *current=new node;
                node *previous=new node;
                current=head;
                for(int i=1; i<pos; i++)
                {
                    previous=current;
                    current=current->next;
                }
                previous->next=current->next;
            }
            count++;
            temp=temp->next;
        }
    }

};

void menu(void)
{
    cout<<"MENU:\nPress 0 to Exit\nPress 1 to Insert at first\nPress 2 to Insert at last\nPress 3 to Insert at particular place\nPress 4 to Find a data\nPress 5 to Delete a data\nPress 6 to Display all nodes\n";
    cout<<"\n\n\nPress any KEY from 0 to 6 : ";
}

int main()
{
    M obj;
    obj.createnode(3);        ///At first let's create some node
    obj.createnode(1);
    obj.createnode(25);
    obj.createnode(53);
    obj.createnode(100);
    obj.createnode(227
    );
    menu();
    int c;
    while(cin>>c)
    {
        switch(c)
        {
        case 0 :
            return 0;

        case 1 :
        {
            cout<<"Inserting at first:"<<endl<<"Enter data: ";
            int data;
            cin>>data;
            obj.insert_start(data);
            menu();
        }
        break;


        case 2 :
        {
            cout<<"Inserting at last:"<<endl<<"Enter data: ";
            int data;
            cin>>data;
            obj.createnode(data);
            menu();
        }
        break;


        case 3 :
        {
            int m,n;
            cout<<"Where do you want to insert data?" ;
            cin>>m;
            cout<<"Enter data:"<<endl;
            cin>>n;
            obj.insert_position(m,n);
            menu();
        }
        break;


        case 4 :
        {
            int y;
            cout<<"Enter the data you want to find: ";
            cin>>y;
            obj.findnode(y);
            menu();
        }
        break;


        case 5 :
        {
            int y;
            cout<<"Enter the data you want to delete: ";
            cin>>y;
            obj.deletenode(y);
            menu();
        }
        break;


        case 6 :
        {
            cout<<"Displaying the data of nodes:"<<endl;
            obj.display();
            menu();
        }
        break;

        default:
        {
            cout<<"You pressed Wrong keyword"<<endl;
            menu();
        }
        break;
        }
    }
}



