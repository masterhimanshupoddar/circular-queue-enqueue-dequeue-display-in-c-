//header files
#include<iostream>
#include<stdlib.h>
using namespace std;

//defining macro
#define MAX 4

//function declaration
void enq();
void deq();
void disp();

//global declaration
int q[MAX],front=-1,rear=-1,element;

//main function
int main()
{
    int ch;
    while(1)
    {
        cout<<"-------MENU-------\n";
        cout<<"1.insert\n";
        cout<<"2.delete\n";
        cout<<"3.display\n";
        cout<<"4.Quit\n";
        cin>>ch;
        switch(ch)
        {
            case 1: enq();
                    break;
            case 2:deq();
                    break;
            case 3:disp();
                    break;
            case 4: exit(0);
                    break;
            default:cout<<"Invalid input\n";
        }
    }
    return 0;
}

//enqueue function for inserting
void enq()
{
    if((front==0&&rear==MAX-1)||front==rear+1)
    {
        cout<<"Queue full\n";
        return;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            rear=(rear+1)%MAX;
        cout<<"Enter the element\n";
        cin>>element;
        q[rear]=element;
    }
}

//dequeue function for deleting
void deq()
{
    if(front==-1)
    {
        cout<<"Queue empty\n";
        return;
    }
    if(front==rear)
    {
        cout<<"data deleted is "<<q[front]<<endl;
        front=rear=-1;
    }
    else
    {
     cout<<"data deleted is "<<q[front]<<endl;
     front=(front+1)%MAX;
    }
    
}

//display function for displaying
void disp()
{
    int i;
    if(front==-1)
    {
        cout<<"queue empty\n";
        return;
    }
    cout<<"The elements are\n";
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            cout<<q[i]<<endl;
        }
    }
    else
    {
        for(i=front;rear<front;i=(i+1)%MAX)
        {
            cout<<q[i]<<endl;
            if(i==rear)
            {
                break;
            }
            
        }
    }
}

//by Himanshu Poddar
//CSE 'A'
//PESIT-BSC