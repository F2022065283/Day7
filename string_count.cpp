// counting the size of string without functions
#include<iostream>
using namespace std;
int main()
{
    string name="Hello shoaib\n";
    int c=0;
    for(int i=1;name[i]!='\0';i++)
    {
        c++;
    }
    cout<<"size = "<<c;
}