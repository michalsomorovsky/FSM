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
    string stavy[];
    
public:
    FSM();
    FSM(const FSM& orig);
    virtual ~FSM();
private:

};

#endif	/* FSM_H */

