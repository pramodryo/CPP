//WAP to take number of stiudent data using class and object store data into file and read that file

#include<iostream>
#include<fstream>
using namespace std;

class student
{
int rollno;
string name;
float marks;

public:

void set_data()
{
cin>>rollno;
getline(cin,name);
cin>>marks;
}

void print_data()
{
cout<<rollno<<" "<<name<<" "<<marks<<endl;
}

int getrollno() const{
return rollno;
}

string getname() const{
return name;
}

float getmarks() const{
return marks;
}

};


int main()
{
int i, n;
cout<<"enter the number of student"<<endl;
cin>>n;

student st[n];

for(i=0;i<n;i++)
{
cout<<"Enter data student: "<<i+1<<endl;
st[i].set_data();
}

cout<<"data in class"<<endl;
for(i=0;i<n;i++)
{
st[i].print_data();
}
cout<<endl;


fstream fio("data.txt", ios::in|ios::out|ios::trunc);
for(i=0;i<n;i++)
{
fio<<st[i].getrollno()<<" "<<st[i].getname()<<" "<<st[i].getmarks()<<endl;
}

fio.seekg(0,ios::beg);


cout<<"data in file"<<endl;
string s;
while(getline(fio,s))
{
cout<< s <<endl;
}



fio.close();
}


