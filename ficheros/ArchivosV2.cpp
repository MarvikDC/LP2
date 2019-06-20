#include<iostream>
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

void bin_save_array(vector<A> Va1)
{
	ofstream fsbin;
	fsbin.open("binout.dat",ios::binary);
	for(int i=0; i<Va1.size();i++)
		{
			fsbin.write((char*)&Va1[i].x,sizeof(int));
			int size_str=Va1[i].str.size();
			fsbin.write((char*)&size_str,sizeof(size_str));
			//    casting char //modulo del tamaño de str del tipo A en la posicion I//tamaño en bytes del modulo antes mencionado
			fsbin.write(Va1[i].str.c_str(),Va1[i].str.size());
			//c_str : metodo de la clase string que devuelve un puntero a char de una cadena
		}
	fsbin.close();
}

void bin_load_array(vector<A> &Va2)
{
	ifstream binfs;
	binfs.open("binout.dat",ios::binary);
	A load;
	int x_tmp, size_tmp;
    while (binfs.read((char*)&x_tmp,sizeof(int)))
    {
        load.x=x_tmp;
        binfs.read((char*)&size_tmp,sizeof(int));
        char *char_tmp=new char[size_tmp];
        binfs.read(char_tmp,size_tmp);
        load.str=char_tmp;
        Va2.push_back(load);
        delete []char_tmp;
    }
	binfs.close();
}

int main()
{
	A a;
	vector<A> Va;
	bin_load_array(Va);
	cout<<"datos existentes"<<endl;
	for(int j=0;j<Va.size();j++)
        cout<<Va[j]<<endl;
    //cout<<"fin de array cargado-----------------------"<<endl;
    //cout<<"-----------------------------"<<endl;*/
    cout<<"agregando datos \nNumero de datos:"<<endl;
	int cont=0;
	cin>>cont;
	while (cont--)
	{
		cin>>a;
		Va.push_back(a);
	}
    /*cout<<"todos los datos:"<<endl;
	for(int j=0;j<Va.size();j++)
        cout<<Va[j]<<endl;
    //cout<<"guarda en binario el array modificado"<<endl;*/
    bin_save_array(Va);
	return 0;
}
