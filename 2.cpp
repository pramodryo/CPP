// WAP to take  student data and stor (append) it into file and read that file.

#include<iostream>
#include<fstream>
using namespace std;

struct student
{
	int rollno;
	string name;
	float marks;
};


void get_data(student &st)        // data taking from keyboard
{
	cout<<"Enter data of student: "<<endl;
	cin>>st.rollno>>st.name>>st.marks;
}

void save_file(student &st)        // data save in file
{
	fstream fwrite("struct.txt", ios::in| ios::out|ios::app);    // open file in a+ mode (append, read)
	fwrite<<st.rollno<<" "<<st.name<<" "<<st.marks<<endl;
	fwrite.close();
}


void read_file()          // read data from saved file
{
	ifstream fread("struct.txt", ios::out);         // open file in r mode (read only) 

	string s;
	while(getline(fread,s))
	{
		cout<<s<<endl;
	}
	fread.close();
}


int main()
{
	student st;
	int op;
	while(1)
	{
		cout<<"Enter option 1) get_data 2) save_file 3) read_file 4)exit file"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: get_data(st); break;
			case 2: save_file(st); break;
			case 3: read_file(); break;
			case 4: exit(0);
			default : cout<<"Invalid option"<<endl;

		} // EO switch
	} // EO while
}
