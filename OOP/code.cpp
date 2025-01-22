#include <iostream>
using namespace std;
//CONSTRUCTOR Copa of constructor. Destructor
class  Student
{
private:
    string phone;
public:
    string name;
    double* cgpaPtr;//dynamic memory allocation
     Student(string name, double cgpa){//CONSTRUCTOR
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
     }
    Student(Student &obj){//deep copy constructor
       this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;

    }
    Student(){
        delete cgpaPtr;
    }
    void setPhone(string p){
        phone=p;
    }
    void getInfo(){
        cout<<"Student name:"<<name<<endl;
        cout<<"CGPA:"<<*cgpaPtr<<endl;
        cout<<"Phone:"<<phone<<endl;
     }
};
//INHERITANCE
class Person {
    public:
    string name;
    int age;
    /* Person(string name,int age){
        this->name = name;
        this->age = age;
    } */
};
class Teacher : public Person{
    public:
    double salary;
    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main(){
    Student s1("Tarik",3.89);
    s1.setPhone("01876688776");
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr)=9.3;
    s1.getInfo();
    s2.name="Jamil";
    s2.getInfo();


    //Inheritance

    Teacher t1;
    t1.name="Shahadat";
    t1.age=34;
    t1.salary=3450;
    t1.getInfo();
    return 0;
}