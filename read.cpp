#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char ** argv)
{
if(argc != 3)
{
cout<<"Usage: a.out filename"<<endl;
return 0;
}

fstream fin(argv[1],ios::in|ios::out);
if(fin.fail())
{
cout<<"file is not present"<<endl;
return 0;
}

fstream fout(argv[2], ios::in|ios::out|ios::trunc);
if(fin.fail())
{
cout<<"file is not present"<<endl;
return 0;
}


string s;
while(fin >> s)
{
if(s == "hello")
continue;

fout<<s<<" ";
}

fout.seekg(0,ios::beg);
while(getline(fout, s))
cout<<s<<endl;

fin.close();
fout.close();
}
