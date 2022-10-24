#include <iostream>
using namespace std;
int n,i,j,temp=0,minp;
void array_sort(int * a, int n)
{
    int min;
    for(i=0;i<n;i++)
    {
        min=a[i];
        minp=i;
        for(j=i;j<n;j++)
        {

            if(min>a[j])
            {
                min=a[j];
                minp=j;
            }
        }
        temp = a[i];
        a[i]=min;
        a[minp]=temp;
    }
for(i=0;i<n;i++)
{
        cout << a[i] << endl;
}
}
int main( )
{
    cout << "Enter number of terms in array.";
    cin >> n;
    int a[n];
for(i=0;i<n;i++)
{
        cout << "enter the element " << i <<"," << "\t";
        cin >> a[i];
}
array_sort(a,n);
return 0;
}
