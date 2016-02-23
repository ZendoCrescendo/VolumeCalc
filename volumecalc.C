#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//declare funct prototypes here

int main()
{
	int choice=0;
	do
	{
		choice=menu();
		if (choice==1)
		{
			double l=ReadDouble("Length of any edge");
			cout<<"Volume of cube:"<<VolumeCube(l)<<endl;
			cout<<"Surface area of cube:"<<SACube(l)<<endl;
		}
		else if(choice==2)
		{
			double h=ReadDouble("Height of cylinder");
			double r=ReadDouble("Radius of cylinder");
			cout<<"Volume of cylinder:"<<VolumeCylinder(h,r)<<endl;
			cout<<"Surface area of cylinder:"<<SACylinder(h,r)<<endl;
		}
		else if(choice==3)
		{
			double h=ReadDouble("Height of cone");
			double r=ReadDouble("Radius of cone");
			cout<<"Volume of cone:"<<VolumeCone(h,r)<<endl;
			cout<<"Surface area of cone:"<<SACone(h,r)<<endl;
		}
		else if(choice==4)
		{
			double l=ReadDouble("Length of prism");
			double w=ReadDouble("Width of prism");
			double h=ReadDouble("Height of prism);
			cout<<"Volume of prism:"<<VolumeRectPrism(l,w,h)<<endl;
			cout<<"Surface area of prism:"<<SARectPrism(l,w,h)<<endl;
		}
		else if(choice==5)
		{
			double h=ReadDouble("Height of pyramid");
			double l=ReadDouble("Length of base edge");
			cout<<"Volume of pyramid:"<<VolumeSquarePyramid(l,h)<<endl;
			cout<<"Surface area of pyramid:"<<SASquarePyramid(l,h)<<endl;
		}
		else if(choice==6)
		{
			double r=ReadDouble("Radius of sphere");
			cout<<"Volume of sphere:"<<VolumeSphere(r)<<endl;
			cout<<"Surface area of sphere:"<<SASphere(r)<<endl;
		}
		else 
		{
			cout<<"Goodbye"<<endl;
		}
	} while(choice!=7)
	return 0;
}

int menu()
{
	int rv=0;
	do
	{
		cout<<"1.Cube"<<endl;
		cout<<"2.Cylinder"<<endl;
		cout<<"3.Cone"<<endl;
		cout<<"4.Rectangular Prism"<<endl;
		cout<<"5.Square Pyramid"<<endl;
		cout<<"6.Sphere"<<endl;
		cout<<"7.Quit"<<endl;
		rv=ReadInt("Choose the number of one of the above options")
	} while(rv<1||rv>3)
	return rv;
}

double VolumeCube(l)
{
	return pow(l,3.0);
}

double SACube(l)
{
	return 6.0*(pow(l,2));
}

double VolumeCylinder(h,r)
{
	return M_PI*(pow(r,2.0))*h;
}

double SACylinder(h,r)
{
	return 2.0*M_PI*r*h+2.0*M_PI*(pow(r,2.0));
}

double VolumeCone(h,r)
{
	return M_PI*(pow(r,2.0))*(h/3);
}

double SACone(h,r)
{
	return M_PI*r*(r+sqrt(pow(h,2.0)+pow(r,2.0)));
}

double VolumeRectPrism(l,w,h)
{
	return l*w*h;
}

double SARectPrism
{
	return 2.0*(w*l+h*l+h*w);
}

double VolumeSquarePyramid(l,h)
{
	return pow(l,2.0)*h/3.0;
}

double SASquarePyramid(l,h)
{
	return pow(l,2.0)+2*l*(sqrt((pow(l,2.0)/4.0)+pow(h,2.0)));
}

double VolumeSphere(r)
{
	return 4.0/3.0*M_PI*pow(r,3.0);
}

double SASphere(r)
{
	return 4.0*M_PI*pow(r,2.0);
}

	
int ReadInt(string prompt)
{
	int rv=0.0;
	cout<<prompt<<endl;
	bool done=false;
	while(done==false)
	{
		cin >>returnval;
		if(cin.fail()!=0)
		{
			cerr<<"Cannot read data."<<endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else
		{
			done=true;
		}
	}
	return rv;
}


double ReadDouble(string prompt)
{
	double rv=0.0;
	cout<<prompt<<endl;
	bool done=false;
	while(done==false)
	{
		cin >>returnval;
		if(cin.fail()!=0)
		{
			cerr<<"Cannot read data."<<endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else
		{
			done=true;
		}
	}
	return rv;
}

