#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Vehicle {
public:
    // Parameterized constructor to initialize vehicle details
    Vehicle(int id, string type, bool allocated = false)
        : id(id), type(type), allocated(allocated) {}

    // Copy constructor to create a deep copy of another Vehicle object
    Vehicle(const Vehicle& other) {
        // Deep copy member variables to avoid shallow copying issues
        id = other.id;
        type = other.type;
        allocated = other.allocated;
    }

    // Function to print vehicle details
    void print() {
        cout << "Vehicle ID: " << id << endl;
        cout << "Vehicle Type: " << type << endl;
        cout << "Allocated: " << (allocated ? "Yes" : "No") << endl;
    }

private:
    int id;
    string type;
    bool allocated;
};

int main() {
    queue<Vehicle> vehicleQueue;  // Queue to store vehicles waiting for entry

    int choice;
    do {
        cout << "\nCollege Campus Vehicle Entry System:" << endl;
        cout << "1. Enter Vehicle Details" << endl;
        cout << "2. Assign ID to User" << endl;
        cout << "3. Check Queue Availability" << endl;
        cout << "4. Allot Space in Queue" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string type;
                cout << "Enter Vehicle ID: ";
                cin >> id;
                cout << "Enter Vehicle Type: ";
                cin >> type;
                vehicleQueue.push(Vehicle(id, type)); // Create and enqueue a new vehicle
                cout << "Vehicle added to queue successfully!" << endl;
                break;
            }
            case 2: {
                // Check if there are vehicles waiting in the queue
                if (vehicleQueue.empty()) {
                    cout << "No vehicles in queue for ID assignment." << endl;
                } else {
                    // Assign ID to the first vehicle in the queue
                    Vehicle frontVehicle = vehicleQueue.front();
                    cout << "Assigned ID " << frontVehicle.id << " to user." << endl;
                    vehicleQueue.pop();  // Remove the assigned vehicle from the queue
                }
                break;
            }
            case 3: {
                cout << "Number of vehicles waiting in queue: " << vehicleQueue.size() << endl;
                break;
            }
            case 4: {
                // Check if there are vehicles waiting and space available
                if (vehicleQueue.empty() || vehicleQueue.front().allocated) {
                    cout << "No unallocated vehicle in queue or no space available." << endl;
                } else {
                    // Allot space to the first unallocated vehicle in the queue
                    vehicleQueue.front().allocated = true;
                    cout << "Space allotted to vehicle with ID " << vehicleQueue.front().id << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}

