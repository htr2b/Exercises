#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    void setName(string s){
        name=s;
    }
    void setAge(int a){
        age=a;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    virtual void showInfo(){
        cout<<"Person's Name: "<<getName()<<endl<<"Person's Age: "<<getAge()<<endl;
    }
};
class Student : public Person {
private:
    string studentId;
public:

    void setStudentID(string s){
        studentId=s;
    }
    string getStudentID(){
        return studentId;
    }
    void showInfo() override{
        cout<<"Student's Name: "<<getName()<<endl<<"Student's Age: "<<getAge()<<endl<<"Student's ID: "<<getStudentID()<<endl;
    }

};
class Teacher : public Person{
private:
    string lessonName;
public:
    void setLessonName(string s){
        lessonName=s;
    }
    string getLessonName(){
    return lessonName;
    }
    void showInfo() override{
        cout<<"Teacher's Name: "<<getName()<<endl<<"Teacher's Age: "<<getAge()<<endl<<"Teacher's Lesson: "<<getLessonName()<<endl;
    }
};
int main() {
    Person p ;
    p.setAge(20);
    p.setName("Onur Kahan");
    p.showInfo();
    Student s;
    s.setName(p.getName());
    s.setAge(p.getAge());
    s.setStudentID("22050111035");
    s.showInfo();
    Teacher t;
    t.setAge(35);
    t.setName("Zafer");
    t.setLessonName("OOP");
    t.showInfo();
    return 0;
}
