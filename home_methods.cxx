#include <iostream>
#include <string>

using namespace std;

void suggestCleaningMethod(const string& room) {
    cout << "\nCleaning Methods for " << room << ":\n";

    if (room == "kitchen") {
        cout << "1. Start by clearing countertops and putting away dishes.\n";
        cout << "2. Wipe down surfaces with a kitchen-friendly cleaner.\n";
        cout << "3. Sweep or mop the floor as needed.\n";
    } else if (room == "bathroom") {
        cout << "1. Clean and disinfect surfaces like sinks, countertops, and mirrors.\n";
        cout << "2. Scrub the toilet and bathtub/shower.\n";
        cout << "3. Replace towels and refill soap dispensers.\n";
    } else if (room == "living room") {
        cout << "1. Dust all surfaces, including furniture and electronics.\n";
        cout << "2. Vacuum or sweep the floor.\n";
        cout << "3. Arrange and fluff pillows, tidy up any clutter.\n";
    } else {
        cout << "Sorry, we don't have specific cleaning methods for this room. Consider consulting a cleaning guide.\n";
    }
}

int main() {
    string roomToClean;

    cout << "Welcome to the Home Cleaning Guide\n";
    cout << "----------------------------------\n";

    cout << "Enter the room you want to clean (kitchen, bathroom, living room, etc.): ";
    getline(cin, roomToClean);

    suggestCleaningMethod(roomToClean);

    return 0;
}
