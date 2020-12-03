#include <iostream>
#include <stdlib.h> 
#include <fstream>
using namespace std;
class Roll{ 
  public: 
 int result; 
 void rollingDice(int t){ 
     ofstream data;
    data.open("data.txt"); 
     for(int i=0;i<t;i++){
         result = rand() % 6 + 1;
     data << result << " ";
     }
     data<<"\n";
    data.close();
 }
};
int main() { 
    Roll call;
    int t;
    cout<<"How many times do you want to roll the dice ? ";
    cin>>t;
    call.rollingDice(t);
    cout<<"saved to data.txt"<<endl;
    return 0; 
}
