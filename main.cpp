/* 
 * File:   main.cpp
 * Author: m.somorovsky
 *
 * Created on March 12, 2014, 11:44 AM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>

#include "FSM.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream file ("/cygdrive/c/Users/m.somorovsky/Dropbox/Ams.seq");
    string line;
    FSM fsm;
    if(file.is_open())
    {
        while(getline(file, line))
        {
            if(line.find_first_of("`", 0, 1)==0) cout<<"koment: ";
            if(line.find_first_of("[", 0,1)==0) cout<<"stav: ";
            cout<<line<<"\n";
        }
        file.close();
    }
    else cout<<"CHYBA";
    return 0;
}

