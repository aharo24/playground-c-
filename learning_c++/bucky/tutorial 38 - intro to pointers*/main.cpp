//It's important to note that any variable you make is just a piece of memory that holds some value, and you have the address to that memory. It doesn't matter if it's a variable or a pointer or something else, because this is simply how computers work. 
//When you create a local/temporary variable, you're simply giving all the responsibility to the compiler, to ask for some memory to store a value, and to free that memory when the variable goes out of scope. Pointers can be used to do the same thing, and the main difference is that the responsibility and control over the same process is given to you instead of the compiler (or the operating system). That gives you more freedom, but also makes it possible for you to get bugs, for example. 
//Apart from variables being simple to use, the fact that they are generally perfectly safe from memory bugs is the main reason they exist, and the reason you should always use simple variables instead of pointers unless you need to use pointers, for some reason.
//Also note that pointers are generally slower, since jumping between different locations in RAM means you're not using ther cache memory, and that is the largest (!) performance problem in modern software. Using pointers doesn't absolutely have to mean you get this problem, it's about jumping to differnet places in RAM, not the actual use of pointer. It's just that pointers will often do this.

/*
& --> address operator
&var --> find address of varibale | where its store in memory/heap

* --> pointer
*Pointer--> points to a memory address

*/
#include <iostream>
using namespace std;

int main()
{
    int fish= 5;
    cout<<&fish << endl;

    int *fishPointer;
    fishPointer= &fish;

    cout<< fishPointer<< endl;



}