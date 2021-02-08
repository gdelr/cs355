#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
  cout<<"char:                   "<<right<<setw(10)<<sizeof(char)<<" bytes"<<endl;
  cout<<"unsigned char:          "<<right<<setw(10)<<sizeof(unsigned char)<<" bytes"<<endl;
  cout<<"signed char:            "<<right<<setw(10)<<sizeof(signed char)<<" bytes"<<endl;
  cout<<"int:                    "<<right<<setw(10)<<sizeof(int)<<" bytes"<<endl;
  cout<<"unsigned int:           "<<right<<setw(10)<<sizeof(unsigned int)<<" bytes"<<endl;
  cout<<"signed int:             "<<right<<setw(10)<<sizeof(signed int)<<" bytes"<<endl;
  cout<<"short int:              "<<right<<setw(10)<<sizeof(short int)<<" bytes"<<endl;
  cout<<"unsigned short int :    "<<right<<setw(10)<<sizeof(unsigned short int)<<" bytes"<<endl;
  cout<<"signed short int:       "<<right<<setw(10)<<sizeof(signed short int)<<" bytes"<<endl;
  cout<<"long int:               "<<right<<setw(10)<<sizeof(long int)<<" bytes"<<endl;
  cout<<"signed long int:        "<<right<<setw(10)<<sizeof(signed long int)<<" bytes"<<endl;
  cout<<"unsigned long int:      "<<right<<setw(10)<<sizeof(unsigned long int)<<" bytes"<<endl;
  cout<<"long long int:          "<<right<<setw(10)<<sizeof(long long int)<<" bytes"<<endl;
  cout<<"unsigned long long int: "<<right<<setw(10)<<sizeof(unsigned long long int)<<" bytes"<<endl;
  cout<<"float:                  "<<right<<setw(10)<<sizeof(float)<<" bytes"<<endl;
  cout<<"double:                 "<<right<<setw(10)<<sizeof(double)<<" bytes"<<endl;
  cout<<"long double:            "<<right<<setw(10)<<sizeof(long double)<<" bytes"<<endl;
  cout<<"short:                  "<<right<<setw(10)<<sizeof(short)<<" bytes"<<endl;
  cout<<"long:                   "<<right<<setw(10)<<sizeof(long)<<" bytes"<<endl;
  cout<<"bool:                   "<<right<<setw(10)<<sizeof(bool)<<" bytes"<<endl;
    
  return 0;
}
