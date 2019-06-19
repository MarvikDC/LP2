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

void bin_save_array(vector<A> Va1)
{
	ofstream fsbin;
	//char *s=Va1;


	fsbin.open("binout.dat",ios::binary);
	for(int i=0; i<Va1.size();i++)
		{
			fsbin.write((char*)&Va1[i],sizeof(Va1));
		}
	fsbin.close();
}

void load_array(vector<A> &Va2)
{
	ifstream fs;
	fs.open("out.txt");
	A load;
	while (!fs.eof())
	{
		fs>>load;
		Va2.push_back(load);

	}
	fs.close();

}

void bin_load_array(vector<A> &Va2)
{
	ifstream binfs;
	binfs.open("binout.dat",ios::binary);
	A load;
	/*binfs.read((char*)&Va2,20);
    //int gg=3;
	//while (gg<3)
	//{
		Va2.push_back(load);
		gg++;
	}*/
	int i=0;
	binfs.read((char*)&Va2[i],sizeof(A));


	binfs.close();

}

int main()
{
	A a;
	vector<A> Va;
	vector<A> Vab;
	vector<A> Vabin;
	int cont=0;
	while (cont<3)
	{
		cin>>a;
		Va.push_back(a);
		cont++;
	}
	save_array(Va);
	bin_save_array(Va);

	load_array(Vab);
    cout<<"carga"<<endl;

	for(int j=0;j<Vab.size()-1;j++)
        cout<<Vab[j]<<endl;

    cout<<"carga binaria"<<endl;
    bin_load_array(Vabin);
    for(int j=0;j<Vabin.size();j++)
        cout<<Vab[j]<<endl;


	//load_array(Va);
	return 0;
}
