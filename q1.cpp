#include <iostream>
#include<string>
using namespace std;

struct Item {
    int id;
    string name;
    float cost;
};

int main() {
    int i,j;
    Item arr[8];
    float total = 0;
    cout<<"Enter elements of array: ";
    for(int i=0;i<8;i++){
        cout<<"Items: "<<i+1<<" Id: \n";
        cin>>arr[i].id;
        cout<<"Name of item: \n";
        cin>>arr[i].name;
        cout<<"Cost \n";
        cin>>arr[i].cost;
        
        total += arr[i].cost;
    }    
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i].cost < arr[j].cost){
                Item temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                    
                }
            }
        }
        
    cout<<"Sorted list of items (high to low) by cost: "<<endl;
    cout<<"Id \t name \t cost\n";
    for(int i=0;i<8;i++){
        cout<<arr[i].id<<"\t"<<arr[i].name<<"\t"<<arr[i].cost<<endl;
    }
    
	cout<<"Average of cost is: "<<total/8;


}
