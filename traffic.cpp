#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void trafficLight() {
    while (true) {
        
        cout << "Green light: GO" << endl;
        this_thread::sleep_for(chrono::seconds(5)); // s

    
        cout << "Yellow light: SLOW DOWN" << endl;
        this_thread::sleep_for(chrono::seconds(2)); // Yellow light for 2 seconds

        
        cout << "Red light: STOP" << endl;
        this_thread::sleep_for(chrono::seconds(5)); // Red light for 5 seconds
    }
}

int main() {
    trafficLight();
    return 0;
}
