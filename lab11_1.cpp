#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future.\n";
    srand(time(0));
    int x = rand()%9;
    string y = "" ;
    string a,b,c ;
    if(x == 0) y = "A";
    else if(x == 1) y = "B+";
    else if(x == 2) y = "B";
    else if(x == 3) y = "C+";
    else if(x == 4) y = "C";
    else if(x == 5) y = "D+";
    else if(x == 6) y = "D";
    else if(x == 7) y = "F";
    else y = "W";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    cout << "You will get " << y << " in this 261102.";
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
