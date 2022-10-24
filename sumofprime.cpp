#include <iostream>
using namespace std;
int num,n,i;
int is_prime(int n)
{
    int flag=0;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        flag=1;
break;
    }
}
return flag;
}
int main( )
{
    int f=0;
cout << "Enter the number to be checked.";
cin >> num;
for(i=0;i<num/2;i++)
{
    if((is_prime(i)==0)||(is_prime(num-i)==0))
    {
    cout << "The number " << num << " may be epressed as a sum of two prime numbers " << i << " and " << num-i; 
    f=1;break;
    }
}
if(f==0)
{
    cout << "The number " << num << " may not be expressed as a sum of two prime numbers.";
}
return 0;
}
