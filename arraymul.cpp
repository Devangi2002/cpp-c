#include <iostream>
using namespace std;
int n,m,i,j,k,n2,m2;
int main( )
{
    cout << "enter the order of matrix 1.";
    cin >> n >> m;
    cout << "enter the order of matrix 2.";
    cin >> n2 >> m2;    
int a[n][m], b[n2][m2],c[n][m2];
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
      cout << "enter element for matrix 1(" << i << "," << j << ") " ;
      cin >> a[i][j];
    }
} 
for(i=0;i<n2;i++)
{
    for(j=0;j<m2;j++)
    {
      cout << "enter element for matrix 2(" << i << "," << j << ") " ;
      cin >> b[i][j];
    }
}
if(m==n2)
{ 
for(i=0;i<n;i++)
{
  for(j=0;j<m2;j++)
  {
    c[i][j]=0;
   for(k=0;k<m;k++)
    {
        c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
    }
    cout << c[i][j] << "\t";
  }
  cout << "\n";
}
}
else
{
cout << "Matrix multiplication is not possible.";
}
return 0;
}
