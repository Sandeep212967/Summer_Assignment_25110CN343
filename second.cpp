#include<iostream>
using namespace std;
int main()  
{
    int n, i ,table=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        table = n * i;
        cout<<n<<" * "<<i<<"= "<<table;
        cout<<"\n";
    }
    return 0;

}