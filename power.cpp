#include <iostream>
#include <ctime>    // For time functions
#include <thread>   // For sleep
#include <chrono>   // For seconds
using namespace std;

int main() {
    while (true) {
        // Clear screen (works in most terminals)
        system("cls");   // use "clear" in Linux/Mac

        // Get current time
        time_t now = time(0);          // current time in seconds
        tm *localTime = localtime(&now);  // convert to local time

        int hour = localTime->tm_hour;
        int min  = localTime->tm_min;
        int sec  = localTime->tm_sec;

        cout << "Digital Clock\n";
        cout << "--------------\n";
        cout << hour << " : " << min << " : " << sec << endl;

        // wait for 1 second
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
