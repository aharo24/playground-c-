/*
case:
    in case something is true

break:
    break out of switch

Also, don't confuse the switch statement for a loop. It's just an if statement on steroids. The way it works is it tests each case one after the other from the top to the bottom. If there is no match for the first case, it moves on to test the next. Once it finds a match, it prints that string (or whatever you have it do), but it doesn't stop there! Once it finds that first match, it goes on to print every string that follows, for each and every case thereafter. This is why you want to break each matching case, for when a match is found and it prints that string, you probably don't want to print the other strings that follow. But of course, this depends on your design. You may actually want to do this, you may want to use more than one case at the same time when at least one match is found. In such design you would not include a break there. But this is not very common. People usually only want to use one case at a time from the switch. It's just worth mentioning that you can use more than one case should you ever need to. Just remove the break from all the statements that follow after the desired case is matched. For example, try moving the default case to the top of your case list for the switch statement. Set the age to 19, and comment out the break statements with two forward slashes. Then try to build and run it. Experiment with different values for age, and try removing the comments for the breaks and see what effect that has on the behavior. Also note that switch statements are treated differently in different languages. Some languages don't have this "problem" of so called fall through.
*/

#include <iostream>
using namespace std;

int main()
{
    int age= 21;

    switch (age) {
        case 16:
            cout<< "hey you can drive now!"<< endl;
        case 18:
            cout<< "buy a lotto ticket"<< endl;
        case 21:
            cout<< "buy me a beer!"<< endl;
        default:
            cout<< "sorry you get nothing";
    }

}