#include <iostream>
#include <string>

using namespace std;

int main() {
    string newcomerName;

    cout << "Welcome to Our Community!\n";
    cout << "--------------------------\n";

    cout << "Enter your name: ";
    getline(cin, newcomerName);

    cout << "\nDear " << newcomerName << ",\n";
    cout << "Welcome to our diverse and inclusive community!\n";
    cout << "We celebrate the uniqueness each individual brings, creating a rich tapestry of backgrounds, perspectives, and experiences.\n";
    cout << "Your presence enriches our community, and we're excited to learn, grow, and thrive together.\n";
    cout << "If you ever have questions or need support, feel free to reach out. We're here for you!\n\n";

    cout << "Best regards,\n";
    cout << "The Solvers Community \n";

    return 0;
}
