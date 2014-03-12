/* 
 * File:   FSM.h
 * Author: m.somorovsky
 *
 * Created on March 12, 2014, 12:59 PM
 */
#include <string>
#ifndef FSM_H
#define	FSM_H

using namespace std;

class FSM { 
public:
    string* stavy;
    FSM(int num);
    FSM(const FSM& orig);
    virtual ~FSM();
    void addState(string);
private:

};

#endif	/* FSM_H */

