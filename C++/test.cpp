#include <iostream>

using namespace std;

const int size = 6;

void push(int stack[size], int &top)
{
    int value;
    if(top == size-1)
        cout<<"stack is full, insertion is not possible\n";

    else
    {
        cout<<"Enter any number : ";
        cin>>value;

        ++top;
        stack[top] = value;
    }
}

void pop(int stack[size], int &top)
{
    int value;
    if(top == -1)
        cout<<"stack is empty, deletion is not possible\n";
    else
    {
        value = stack[top];
        --top;
    }
}

void print(int stack[size], int top)
{
    int i;
    if(top == -1)
        cout<<"stack is empty, printing is not possible\n";
    else
    {
        for(i=0; i<=top; i++)
        {
            cout<<stack[i]<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int stack[size];
    int top = -1;
    int x;

    for( ; x != 4; )
	{
		cout<<"1- push \n";
		cout<<"2- pop \n";
		cout<<"3- print \n";
		cout<<"4- exit \n";

		cout<<"Enter your choice : ";
		cin>>x;

		switch (x)
			{
				case 1:push(stack, top); break;
				case 2:pop(stack, top); break;
				case 3:print(stack, top); break;
				default:cout<<"Error\n";
			}

	}

    return 0;
}
