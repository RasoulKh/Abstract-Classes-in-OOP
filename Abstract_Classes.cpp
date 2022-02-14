#include <iostream>
using namespace std;

class Programming{
    /* Abstract Class: A class that has at least one pure virtual function */
    /* A Pure Virtual Fuction can force other sub-classes 
    which inherits from the base-class to have their own Function (e.g., "ProgLanguage()")     */
public:
    virtual void ProgLanguage() = 0;
};

class PythonProgramming: public Programming{
public:
    void ProgLanguage(){
        cout << "Pyhton is the main Programming Language" << endl;
    }
};

class JavaProgramming: public Programming{
public:
    void ProgLanguage(){
        cout << "Java is the main Programming Language" << endl;
    }
};
//*********************************//
//***********   Main   ************//
//*********************************//
int main()
{

    Programming* L1 = new PythonProgramming();
/*     L1->ProgLanguage(); */

    Programming* L2 = new JavaProgramming();
/*     L2->ProgLanguage(); */

    Programming* Languages[2] = {L1, L2};

    for(int i=0; i<2; i++){
        Languages[i]->ProgLanguage();
    }

}