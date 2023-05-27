#include<iostream>
#include<vector>
#include<string>

#define MAX 10

enum Color {
    RED,
    GREEN,
    BLUE
};

namespace MyNamespace {
    int x = 5;
}

struct MyStruct {
    int a;
    char b;
};

class MyClass {
    public:
        MyClass(std::string z){
            setName(z);
        }
        void setName(std::string x){
            name = x;
        }
        std::string getName(){
            return name;
        }
        void exampleFunction(int a, std::vector<int> b){
            if(a < MAX) {
                std::cout << "Hello World!\n";
            } else {
                std::cout << "Goodbye World!\n";
            } 
        }
    private:
        std::string name;
};

int main() {
    MyClass obj("Test");
    std::vector<int> vec = {1, 2, 3, 4, 5};
    obj.exampleFunction(5, vec);
    return 0;
}
