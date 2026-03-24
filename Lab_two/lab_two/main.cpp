#include <iostream>
using namespace std;

// Function declarations
bool problem_3();
void problem_5();
void problem_7();
void problem_9();
void problem_11();
void problem_13();
void problem_15();
void problem_17();

int main() {
    int option;
    
    do {
        // Display menu
        cout << "\n=== MENU ===" << endl;
        cout << "3. Execute Problem 3" << endl;
        cout << "5. Execute Problem 5" << endl;
        cout << "7. Execute Problem 7" << endl;
        cout << "9. Execute Problem 9" << endl;
        cout << "11. Execute Problem 11" << endl;
        cout << "13. Execute Problem 13" << endl;
        cout << "15. Execute Problem 15" << endl;
        cout << "17. Execute Problem 17" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;
        
        switch(option) {
            case 3:
                if(problem_3()) {
                    cout << "Problem 3 returned true" << endl;
                } else {
                    cout << "Problem 3 returned false" << endl;
                }
                break;
            case 5:
                problem_5();
                break;
            case 7:
                problem_7();
                break;
            case 9:
                problem_9();
                break;
            case 11:
                problem_11();
                break;
            case 13:
                problem_13();
                break;
            case 15:
                problem_15();
                break;
            case 17:
                problem_17();
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
        
    } while(option != 0);
    
    return 0;
}
