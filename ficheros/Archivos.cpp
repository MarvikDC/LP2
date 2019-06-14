#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

struct A
{
	int x;
	string str;
	
	 friend ostream &operator<<(ostream &o, const A &p)
	{
		o<<p.x<<"  "<<p.str;
		return o;
	}	
	
	friend istream &operator>>(istream &is, A&p)
	{
		is>>p.x>>p.str;
		return is;
	}
};

void save_array(vector<A> Va1)//, string namef )
{
	ofstream fs;
	//fs.open(namef,ios::out);
	fs.open("out.txt");//,ios::out);
	for(int i=0; i<Va1.size();i++)
		{
			fs<<Va1[i]<<endl;
		}
	fs.close();
}
void load_array(vector<A> &Va2)
{
	ifstream fs;
	fs.open("out.txt");
	A load;
	fs>>load;
	
	while (true)
	{
		Va2.push_back(load);

	}	
	fs.close();
	
}
int main()
{
	A a;
	vector<A> Va;
	int cont=0;
	/*while (cin>>a && cont<3)
	{
		Va.push_back(a);
		cont++;
	}	
	save_array(Va);*/
	
	load_array(Va);
	return 0;
}
