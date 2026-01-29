#include <iostream>
#include<fstream>
using namespace std;
  int main(){
    ofstream file("practice.txt");
    (file.is_open());
    file<<"hi my name is jarvis.I am a programmer/n";
       cout<<"file opening done/n";
    return 0;
  }