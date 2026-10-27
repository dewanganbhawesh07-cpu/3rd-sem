#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNo;
public:
    void setData(std::string n, int r) { name = n; rollNo = r; }
    void display() const {
        std::cout << "Student: " << name << " | Roll No: " << rollNo << "\n";
    }
};

int main() {
    Student s;
    s.setData("Bhawesh Dewangan", 101);
    s.display();
    return 0;
}
