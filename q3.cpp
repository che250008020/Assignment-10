#include<iostream>
#include<string>
using namespace std;

struct Employee{
  int id;
  string name;
  float salary;
};
int main()
{
    int i;
    Employee arr[10];
    for (int i=0;i<10;i++){
        cout<<"Employee: "<<i+1<<" Id"<<endl;
        cin>>arr[i].id;
        cout<<"Employee: "<<i+1<<" Name"<<endl;
        cin>>arr[i].name;
        cout<<"Employee: "<<i+1<<" salary "<<endl;
        cin>>arr[i].salary;
    }
    for(int i=0; i<10; i++){
        cout<<"Employee"<<i+1<<"ID: "<<arr[i].id<<endl;
        cout<<"Employee"<<i+1<<"name: "<<arr[i].name<<endl;
        cout<<"Employee"<<i+1<<"salary: "<<arr[i].salary<<endl;
    }
    int id;
    cin>>id;
    for(int i=0;i<10;i++){
        if(arr[i].id==id){
            cout<<"Employee"<<i+1<<"ID: "<<arr[i].id<<endl;
            cout<<"Employee"<<i+1<<"name: "<<arr[i].name<<endl;
            cout<<"Employee"<<i+1<<"salary: "<<arr[i].salary<<endl;
        }
    }
    
    for(int i=0;i<10;i++){
        if(arr[i].salary<30000){
            arr[i].salary += (arr[i].salary)/10;
        }
        cout<<arr[i].salary;
    }
    
}
