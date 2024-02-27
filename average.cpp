#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char* argv[]){
    if(argc == 1) cout << "Please input numbers to find average.\n" ;
    else{ float sumavg;
          for(int c = 1; c <= argc ; c++){
            sumavg += strtof(argv[c],&argv[argc]);  
          }
            float avg = sumavg/(argc-1) ;

          cout << "---------------------------------\n" ;
          cout << "Average of " << argc-1 << " numbers = " << avg << "\n";
          cout << "---------------------------------";
        }
    return 0;
}