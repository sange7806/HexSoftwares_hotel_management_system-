#include <iostream>
#include <string>
using namespace std;

int totalSales = 0;

// View rooms
void viewRooms() {
    cout << "\nAvailable Room Types:\n";
    cout << "1. Single Room   - R500 per night\n";
    cout << "2. Double Room   - R800 per night\n";
    cout << "3. Deluxe Room   - R1200 per night\n";
}

// Book room
void bookRoom() {
    int choice, nights;
    int roomPrice = 0;

    viewRooms();
    cout << "\nSelect Room Type: ";
    cin >> choice;

    cout << "Number of nights: ";
    cin >> nights;

    switch (choice) {
        case 1: roomPrice = 500; break;
        case 2: roomPrice = 800; break;
        case 3: roomPrice = 1200; break;
        default:
            cout << "Invalid room choice!\n";
            return;
    }

    int cost = roomPrice * nights;
    totalSales += cost;

    cout << "Room booked successfully!\n";
    cout << "Room Cost: R" << cost << endl;
}

// Order food using comma-separated input
void orderFood() {
    string order;
    int foodBill = 0;

    cout << "\nFOOD MENU\n";
    cout << "1. Pizza  - R120\n";
    cout << "2. Burger - R80\n";
    cout << "3. Coke   - R30\n";
    cout << "4. Pasta  - R100\n";

    cout << "\nOrder type (example: 1,3): ";
    cin >> order;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == ',') continue;

        switch (order[i]) {
            case '1': foodBill += 120; break;
            case '2': foodBill += 80;  break;
            case '3': foodBill += 30;  break;
            case '4': foodBill += 100; break;
            default:
                cout << "Invalid item ignored.\n";
        }
    }

    totalSales += foodBill;
    cout << "Total Food Bill: R" << foodBill << endl;
}

// View total sales
void viewSales() {
    cout << "\nTotal Hotel Sales: R" << totalSales << endl;
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n=================================\n";
        cout << "     HOTEL MANAGEMENT SYSTEM\n";
        cout << "=================================\n";
        cout << "1. View Available Rooms\n";
        cout << "2. Book a Room\n";
        cout << "3. Order Food\n";
        cout << "4. View Total Sales\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: viewRooms(); break;
            case 2: bookRoom(); break;
            case 3: orderFood(); break;
            case 4: viewSales(); break;
            case 5: cout << "Thank you for using the system!\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
