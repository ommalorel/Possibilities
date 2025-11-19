#include <iostream>
#include <random>

using namespace std;

int main(){
    
    int tries = 0;
    int congrats = 0;
    int fails = 0;
    int tryinput;
    cout << "input how many times do you want the program to run the simulation: " << endl;
    cin >> tryinput;
    while(tries < tryinput){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 3);
    int x = 0;
    int y = 0;
    int z = 0;
    int xc = -1;
    int yc = -1;
    int zc = -1;
    int choice;
    int mypos = distrib(gen);
    int equal = 0;
    choice = distrib(gen);
    switch(choice){
        case 1:
            x = 1;
        break;
        case 2:
            y = 1;
        break;
        case 3:
            z = 1;
        break;
    }
    switch(mypos){
        case 1:
            xc = 1;
        break;
        case 2:
            yc = 1;
        break;
        case 3:
            zc = 1;
        break;
}
    if(xc == x){
        equal += 1;
    }
    if(yc == y){
    
        equal += 1;
    }
    if(zc == z){
        equal += 1;
    }
    
    if(equal > 0){
        tries += 1;
        congrats += 1;
    }else{
        tries += 1;
        fails += 1;
    }
            
}
    cout << "number of tries: " << tries << endl;
    cout << "number of wins: " << congrats << endl;
    cout << "number of fails: " << fails << endl;
return 0;
}

