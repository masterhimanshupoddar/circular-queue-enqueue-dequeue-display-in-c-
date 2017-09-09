#include<stdio.h>
#include<stdlib.h>
#define MAX 4
void enqueue();
void dequeue();
void display();

int queue[MAX],front=-1,rear=-1,item;

void main()
{
  int ch;
  while(1)
  {
      printf("1.Press 1 to insert\n2.Press 2 to delete\n3.Press 3 to display\n4.Press 4 to exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1: 
                  enqueue();
                  break;
          case 2: dequeue();
                    break;
          case 3:display();
          break;
          case 4: exit(0);
          default:printf("Invalid input\n");
      }
  }
}
void enqueue()
{
    if((rear==MAX-1&&front==0)||front==rear+1)
    {
        printf("queue full\n");
        return;
    }
    else
    {
         if(front==-1)
       {
          front=0; 
       }
rear=(rear+1)%MAX;
        
        printf("Enter the element that you want to insert\n");
                  scanf("%d",&item);
        queue[rear]=item;
      
       
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue empty\n");
        return;
    }
    if(front==rear)
    {
        printf("The data deleted is %d",queue[front]);
        front=rear=-1;
        return;
    }
    else
    {
        printf("The data deleted is %d\n",queue[front]);
        
 front=(front+1)%MAX;
    }
}
void display()
{
    int i;
     printf("The elements are\n");
     printf("%d %d\n",front,rear);
     if(front<=rear)
     {
    for(i=front;i<=rear;i++)
    {
       
        printf("%d\n",queue[i]);
    }
     }
     else
     {
             for(i=front;front>rear;i=(i+1)%MAX)
             {
                 
                     printf("%d\n",queue[i]);
                     if(i==rear)
                     {
                         break;
                     }
             }
     }
}
//by Himanshu Poddar
//CSE-A
//PESIT-BSC