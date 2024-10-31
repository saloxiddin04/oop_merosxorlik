//
//  main.cpp
//  merosxorlik
//
//  Created by Saloxiddin Sayfuddinov on 25/09/24.
//

#include <iostream>
#include <string>

using namespace std;

/*class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout<<"Tuut, tuut \n";
    }
};

class Car: public Vehicle {
public:
    string model = "Mustang";
}; */


class person {
public:
    string name;
    int age;
    
    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
};

class employee: public person {
    public:
    string employeeId;
    double salary;
    
    string getEmployeeID() {
        return employeeId;
    }
    
    double getSalary() {
        return salary;
    }
    
    void displayInfoEmployee() {
        cout<<"Ismi: "<<name<<"\n"<<endl;
        cout<<"ID: "<<employeeId<<"\n"<<endl;
        cout<<"Salary: "<<salary<<"\n"<<endl;
    }
};

class student: public person {
    public:
    string studentId;
    string major;
    
    string getStudentId() {
        return studentId;
    }
    
    string getMajor() {
        return major;
    }
    
    void displayInfo() {
        cout<<"Ismi: "<<name<<"\n"<<endl;
        cout<<"ID: "<<studentId<<"\n"<<endl;
        cout<<"Major: "<<major<<"\n"<<endl;
    }
};

int main() {
    /* Car myCar;
    myCar.honk();
    cout<<myCar.brand + " " + myCar.model<<endl; */
    student st;
    employee emp;
    
    emp.name = "Saloxiddin";
    emp.age = 20;
    emp.employeeId = "id123";
    emp.salary = 100000;
    emp.displayInfoEmployee();
    
    st.name = "Test";
    st.age = 18;
    st.studentId = "student123";
    st.major = "Isee01U";
    st.displayInfo();
    
    return 0;
}
