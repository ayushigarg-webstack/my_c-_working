#include <iostream>
using namespace std;

const int SEATS_PER_BOGIE = 10;

struct Seat {
    int seatNumber;
    bool isReserved;
};

struct Bogie {
    int bogieNumber;
    Seat seats[SEATS_PER_BOGIE];
    Bogie* next;
};


Bogie* createTrain(int count) {
    Bogie* head = NULL;
    Bogie* tail = NULL;

    for (int i = 1; i <= count; ++i) {
        Bogie* newBogie = new Bogie;
        newBogie->bogieNumber = i;
        for (int j = 0; j < SEATS_PER_BOGIE; ++j) {
            newBogie->seats[j].seatNumber = j + 1;
            newBogie->seats[j].isReserved = false;
        }
        newBogie->next = NULL;

        if (head == nullptr) {
            head = newBogie;
            tail = newBogie;
        } else {
            tail->next = newBogie;
            tail = newBogie;
        }
    }

    return head;
}

// Display train
void displayTrain(Bogie* head) {
    Bogie* current = head;

    while (current != nullptr) {
        cout << "Bogie " << current->bogieNumber << ": ";
        for (int i = 0; i < SEATS_PER_BOGIE; ++i) {
            cout << "[" << current->seats[i].seatNumber << ":"
                 << (current->seats[i].isReserved ? "R" : "F") << "] ";
        }
        cout << endl;
        current = current->next;
    }
}

// Reserve a seat
bool reserveSeat(Bogie* head, int bogieNum, int seatNum) {
    Bogie* current = head;
    while (current != nullptr) {
        if (current->bogieNumber == bogieNum) {
            if (seatNum >= 1 && seatNum <= SEATS_PER_BOGIE) {
                if (!current->seats[seatNum - 1].isReserved) {
                    current->seats[seatNum - 1].isReserved = true;
                    cout << "Seat " << seatNum << " in Bogie " << bogieNum << " reserved.\n";
                    return true;
                } else {
                    cout << "Seat already reserved.\n";
                    return false;
                }
            } else {
                cout << "Invalid seat number.\n";
                return false;
            }
        }
        current = current->next;
    }
    cout << "Bogie not found.\n";
    return false;
}

// Cancel a seat
bool cancelSeat(Bogie* head, int bogieNum, int seatNum) {
    Bogie* current = head;
    while (current != nullptr) {
        if (current->bogieNumber == bogieNum) {
            if (seatNum >= 1 && seatNum <= SEATS_PER_BOGIE) {
                if (current->seats[seatNum - 1].isReserved) {
                    current->seats[seatNum - 1].isReserved = false;
                    cout << "Seat " << seatNum << " in Bogie " << bogieNum << " cancelled.\n";
                    return true;
                } else {
                    cout << "Seat already free.\n";
                    return false;
                }
            } else {
                cout << "Invalid seat number.\n";
                return false;
            }
        }
        current = current->next;
    }
    cout << "Bogie not found.\n";
    return false;
}

// Check available seats
void checkAvailability(Bogie* head) {
    int freeSeats = 0;
    Bogie* current = head;

    while (current != nullptr) {
        for (int i = 0; i < SEATS_PER_BOGIE; ++i) {
            if (!current->seats[i].isReserved)
                freeSeats++;
        }
        current = current->next;
    }

    cout << "Total Available Seats: " << freeSeats << endl;
}

// Find next available seat
void findNextAvailableSeat(Bogie* head) {
    Bogie* current = head;

    while (current != nullptr) {
        for (int i = 0; i < SEATS_PER_BOGIE; ++i) {
            if (!current->seats[i].isReserved) {
                cout << "Next available: Bogie " << current->bogieNumber
                     << ", Seat " << current->seats[i].seatNumber << endl;
                return;
            }
        }
        current = current->next;
    }

    cout << "No seats available.\n";
}

int main() {
    int bogieCount=10;
    
    cout<<"Your train has "<<bogieCount<<" bogies.\n";

    if (bogieCount <= 0) {
        cout << "Invalid number of bogies.\n";
        return 1;
    }

    Bogie* train = createTrain(bogieCount);

    int choice;
    do {
        cout << "\n---- Train Reservation Menu ----\n";
        cout << "1. Display Train\n";
        cout << "2. Reserve Seat\n";
        cout << "3. Cancel Seat\n";
        cout << "4. Check Availability\n";
        cout << "5. Find Next Available Seat\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int bogieNum, seatNum;

        switch (choice) {
            case 1:
                displayTrain(train);
                break;
            case 2:
                cout << "Enter Bogie Number: ";
                cin >> bogieNum;
                cout << "Enter Seat Number: ";
                cin >> seatNum;
                reserveSeat(train, bogieNum, seatNum);
                break;
            case 3:
                cout << "Enter Bogie Number: ";
                cin >> bogieNum;
                cout << "Enter Seat Number: ";
                cin >> seatNum;
                cancelSeat(train, bogieNum, seatNum);
                break;
            case 4:
                checkAvailability(train);
                break;
            case 5:
                findNextAvailableSeat(train);
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
