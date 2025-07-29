#include <iostream>
#include <fstream>
using namespace std;

struct Task {
    string description;
    Task* prev;
    Task* next;
};

Task* head = NULL;

bool isValidLine(const string& line) {
    for (char c : line)
        if (!isspace(c))
            return true;
    return false;
}

void loadTasksFromFile() {
    ifstream inFile("tasks.txt");
    string line;

    while (getline(inFile, line)) {
        if (!isValidLine(line)) 
        continue; 

        Task* newTask = new Task();
        newTask->description = line;
        newTask->next = NULL;
        newTask->prev = NULL;

        if (head == NULL) {
            head = newTask;
        } else {
            Task* temp = head;
            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newTask;
            newTask->prev = temp;
        }
    }

    inFile.close();
}

// Save tasks to file
void saveTasksToFile() {
    ofstream outFile("tasks.txt");
    Task* temp = head;

    while (temp != NULL) {
        if (!temp->description.empty())
            outFile << temp->description << '\n';
        temp = temp->next;
    }

    outFile.close();
}

void addTask(string desc) {
    Task* newTask = new Task();
    newTask->description = desc;
    newTask->next = NULL;
    newTask->prev = NULL;

    if (head == NULL) {
        head = newTask;
    } else {
        Task* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newTask;
        newTask->prev = temp;
    }

    saveTasksToFile();
}

void deleteTask(int index) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    Task* temp = head;
    int i = 1;

    while (temp != NULL && i < index) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        cout << "Invalid index!\n";
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
    cout << "Task deleted!\n";
    saveTasksToFile();
}

void viewTasks() {
    Task* temp = head;
    int i = 1;

    if (!temp) {
        cout << "No tasks added yet.\n";
        return;
    }

    cout << "\nYour To-Do List:\n";
    while (temp != NULL) {
        cout << i++ << ". " << temp->description << endl;
        temp = temp->next;
    }
}

int main() {
    loadTasksFromFile();

    int choice;
    string desc;

    do {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                getline(cin, desc);
                addTask(desc);
                break;
            case 2:
                viewTasks();
                break;
            case 3: {
                int index;
                cout << "Enter task number to delete: ";
                cin >> index;
                deleteTask(index);
                break;
            }
            case 4:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
