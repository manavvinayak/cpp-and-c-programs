#include <iostream>
#include <string>

using namespace std;

int main() {
    string userName;
    string preferredPronouns;

    cout << "Hi and Welcome to the Diversity and Inclusion Program \n";
    cout << "--------------------------------------------\n";

    cout << "Enter your name: ";
    getline(cin, userName);

    cout << "Enter your preferred pronouns (e.g., he/him, she/her, they/them): ";
    getline(cin, preferredPronouns);

    cout << "\nHello, " << userName << "!\n";
    cout << "We appreciate and respect your identity and pronouns (" << preferredPronouns << ").\n";
    cout << "Thank you for contributing to a diverse and inclusive environment.\n";

    return 0;
}
