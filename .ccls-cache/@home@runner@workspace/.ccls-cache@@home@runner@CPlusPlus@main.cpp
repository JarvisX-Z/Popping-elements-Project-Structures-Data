#include <iostream>
#include<fstream>
using namespace std;
int main() {
ofstream filestream(mylabs.txt);
if {
(filestream.is_open());
cout<<"done/n";
filestream<<"my name is jd/n";
}
else cout<<"opening fail/n";
return 0;
}