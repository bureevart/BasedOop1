#include <iostream>

using namespace std;

class Human {
    string name;
    int age;

public:
    const string &getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    Human human;

    human.setName("Artem");
    human.setAge(19);

    cout << "Имя: "<< human.getName() << "\nВозраст: " << human.getAge() << " годиков" << endl;

    return 0;
}
