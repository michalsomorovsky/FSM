/* 
 * File:   FSM.cpp
 * Author: m.somorovsky
 * 
 * Created on March 12, 2014, 12:59 PM
 */

#include "FSM.h"
#include <iostream>

FSM::FSM(int num) {
    stavy = new string[num];
}

FSM::FSM(const FSM& orig) {
}

FSM::~FSM() {
}

void FSM::addState(string text)
{
    //cout<<text<<endl;
    int i=0;
    while(!stavy[i].empty()) i++;
    stavy[i] = text;
}
