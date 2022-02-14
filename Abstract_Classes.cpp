#include <iostream>
using namespace std;

class Programming{
    /* Abstract Class: A class that has at least one pure virtual function */
    /* A Pure Virtual Fuction can force other sub-classes 
    which inherits from the base-class to have their own Function (e.g., "ProgLanguage()")     */
public:
    virtual void ProgLanguage() = 0;
    virtual void GetInfo() = 0; 
};

class PythonProgramming: public Programming{
public:
    void ProgLanguage(){
        cout << "Pyhton is the main Programming Language" << endl;
    }
    void GetInfo(){
        cout << "Python is an interpreted high-level general-purpose programming language." << endl;
    }
};

class JavaProgramming: public Programming{
public:
    void ProgLanguage(){
        cout << "Java is the main Programming Language" << endl;
    }
    void GetInfo(){
        cout << "Java is a high-level, class-based, object-oriented programming language"; 
        cout << " that is designed to have as few implementation dependencies as possible." << endl;
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
        Languages[i]->GetInfo();
    }

    system("pause>0");
}
