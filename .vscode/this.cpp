#include <iostream>
using namespace std;
class Student{
    int rollno;
        public:
           void setRollno(int rollno){
            this->rollno=rollno;
        }
        void display(){
            cout<<"roll number:"<<this->rollno<<endl;
        }
    };
         int main(){
            Student s;
            s.setRollno(11);
            s.display();
            Student *ptr=nullptr;
            if(ptr==nullptr){
                cout<<"ptr is a null pointer"<<endl;
            }
            return 0;
        }
    

