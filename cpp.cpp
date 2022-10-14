#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    public:
        int a1,a2,b1,b2,r,i;
        Complex()
        {
            cout<<"enter the real n imgaginary coefficient\n";
            cin>>a1>>b1;
            cout<<"enter the real n imgaginary coefficient\n";
            cin>>a2>>b2;
        }
        void operator ++ ()
        {
            r=a1+a2;
            i=b1+b2;
        }
        void disp()
        {
            cout<<""<<r<<"+"<<i<<"i\n";
        }
};
int main()
{   
    Complex c;
    ++c;
    c.disp();
}



#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    public:
        int x,y,z;
        Point()
        {
            cout<<"enter x y z\n";
            cin>>x>>y>>z;
        }
        void operator ++ ()
        {
            x=x+1;
            y=y+1;
            z=y+1;
        }
        void operator -- ()
        {
            x=x-1;
            y=y-1;
            z=y-1;
        }
        void operator - ()
        {
            x=-x;
            y=-y;
            z=-y;
        }
        void disp()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
};
int main()
{   
    Point c;
    ++c;
    c.disp();
    --c;
    c.disp();
    -c;
    c.disp();
}





#include <iostream>
using namespace std;
class shape
{
	public:
		int l,b,h;
		void len()
		{
			cout<<"enter the length";
			cin>>l;
		}
		void bred()
		{
			cout<<"enter the breadth";
			cin>>b;
		}
		void hei()
		{
			cout<<"enter the height";
			cin>>h;
		}
};
class triangle : public shape
{
	public:
		void area()
		{
			len();
			hei();
			cout<<"area ="<<0.5*(l*h)<<endl;
		}
};
class rectangle : public shape
{
	public:
		void area()
		{
			len();
			bred();
			cout<<"area = "<<l*b<<endl;
		}
};
int main()
{
	cout<<"for triangle\n";
	triangle t;
	t.area();
	cout<<"for rectangle\n";
	rectangle r;
	r.area();
}



#include <iostream>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"mother class"<<endl;
		}
};
class Daughter : public Mother
{
	public:
		void display()
		{
			cout<<"daughter class"<<endl;
		}
};
int main()
{
	Daughter d;
	d.display();
	d.Mother::display();
}


#include <iostream>
using namespace std;
class Plate
{
public:
    int length, width;
};
class Box : public Plate
{
public:
    int height;
};
class Woodbox : public Box
{
public:
    int thickness;
    Woodbox(int l,int w,int h,int t)
    {
        length=l;
        width=w;
        height=h;
        thickness=t;
    }
    void display()
    {
        cout<<"Length="<<length<<"\nWidth="<<width<<"\nHeight="<<height<<"\nThickness="<<thickness<<endl;
    }
};
int main()
{
    int l,w,h,t;
    cout<<"enter the length width height and thickness"<<endl;
    cin>>l>>w>>h>>t;
    Woodbox w1(l,w,h,t);
    w1.display();
}




#include <iostream>
using namespace std;
class box
{
	public:
    int l,w,h;
        void len()
		{
			cout<<"enter the length";
			cin>>l;
		}
		void wid()
		{
			cout<<"enter the width";
			cin>>w;
		}
		void hei()
		{
			cout<<"enter the height";
			cin>>h;
		}
};
class d2 : public box
{
	public:
    int a;
    void cost()
    {
        cout<<"\nCost of Sheet= "<<a*40<<endl;
    }
    void c()
    {
    	len();
    	wid();
        a=l*w;
        cost();
    }
};
class d3 : public box
{
	public:
    int vol;
    void cost()
    {
        cout<<"\nCost of Box= "<<vol*60<<endl;
    }
    void c()
    {
    	len();
    	wid();
    	hei();
        vol=l*w*h;
        cost();
    }
};
int main()
{
	cout<<"for 2D\n";
	d2 t;
	t.c();
	cout<<"for 3D\n";
	d3 r;
	r.c();
}
