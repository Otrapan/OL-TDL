//this is the windows version of the code
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main () {
    
    system("color 2");
    string input;
    string carrot[65];
    int car = 65;
    int armani = 0;
    int sand;
    int bbc;
    char command;
fstream File;
int lines = 0;
char i;
int x;
 system("cls");
 cout<<"**Welcome to otrapan's lightweight To-do list**"<<endl;
cout<<"To check available commands type: 5 "<<endl<<endl;
cout<<"Tasks:"<<endl;
int close = 0;
File.open("List.txt",ios::in);//read
if (File.is_open()){
    string line;
    while(getline(File, line)){
        cout<<line<<endl;
    }
    File.close();
}
while  (close == 0 ) {


cout<<"$";cin>>command;
switch (command)
{
case '5':
 system("cls");
cout<<"Help comand:"<<endl;
cout<<"Type 1 to add a new task"<<endl;
cout<<"Type 2 to delete all tasks"<<endl;
cout<<"Type 3 to erase only 1 task"<<endl;
cout<<"Type 4 to exit OL-TDL"<<endl;
cout<<"Github:https://github.com/Otrapan/OL-TDL"<<endl;
cout<<"A special thanks to pookies:"<<endl<<"just_tax"<<endl<<"spyros_21_"<<endl;
cout<<"Thanks"<<endl;
break;
    case '1':
     system("cls");
     cout<<"Type task name"<<endl;
   cin.ignore();
    getline(cin,input);
File.open("List.txt",ios::app);//append
if (File.is_open()){
    File<<input<<endl;
    File.close();
}
 system("cls");
 cout<<"tasks:"<<endl;
File.open("List.txt",ios::in);//read
if (File.is_open()){
    string line;
    while(getline(File, line)){
        cout<<line<<endl;
    }
    File.close();
}

    break;
    case '2':
    system("cls");
    cout<<"Are you sure you want to erase all your tasks?(y/n)"<<endl;
    cin>>i;
    if (i == 'y'){
File.open("List.txt",ios::out);//write
if (File.is_open()){
    File<<"";
    File.close();
}
system("cls");
cout<<"**You have deleted all your tasks**"<<endl;
cout<<"To check available commands type: 0 "<<endl;}
    break;
    case '4':
    system("exit");
    system("cls");
close = 1;
    break;
    default:
    system("cls");
cout<<"Invalid command"<<endl<<"Tasks:"<<endl;
File.open("List.txt",ios::in);//read
if (File.is_open()){
    string line;
    while(getline(File, line)){
        cout<<line<<endl;
    }
    File.close();
}
    break;
    case '3':
    armani = 0;
    lines = 0;
    bbc = 0;
    system("cls");
    cout<<"tasks:"<<endl;
    lines = 0;
   File.open("List.txt");
    while (!File.eof())
  {
    getline(File, carrot[lines]);
   armani++;
 lines++;
  };
  armani = armani-2;
  File.close();
   for (int i = 0; i < lines-1; i++){
    cout <<i<<":"<< carrot[i] << endl;}
    
    File.close();
    cout<<"Please type the number of the task you want to erase:"<<endl;
    cin>>sand;
   for (int i = 0; i < armani; i++){
         swap(carrot[sand], carrot[sand + 1]);
        sand++;
    }

File.open("List.txt",ios::out);//write
if (File.is_open()){
    File<<"";
    File.close();
}

 for (int i = 0; i < armani; i++){
    File.open("List.txt",ios::app);//append
if (File.is_open()){
    File<<carrot[i]<<endl;
    File.close();
}
     }
     
     system("cls");
     cout<<"Tasks:"<<endl;
     File.open("List.txt",ios::in);//read
if (File.is_open()){
    string line;
    while(getline(File, line)){
        cout<<line<<endl;
    }
    File.close();
}
    break;

}
}
return 0;
}
