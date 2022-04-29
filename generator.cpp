#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    srand(3);
    string s[] = {
                "Out Of Home", 
                "Just Do It", 
                "Think Different", 
                "Because You're Worth It",
                "A Better Life, A Better World",
                "Let Us Guide You Home",
                "The Quicker Picker"
                "I'm Loving It"};

    for (int i = 0; i < 50; i++)
    {
        cout << s[rand() % 9] << endl;
    }
    
    return 0;
}