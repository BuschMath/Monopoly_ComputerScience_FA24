#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a struct to represent a Monopoly property
struct Property {
    string name;       // Name of the property (e.g., "Mediterranean Avenue")
    int value;         // Property value (e.g., 60)
    int position;      // Location on the board (index 0 to 39)
};

class MonopolyBoard {
public:
    // Constructor initializes all the properties on the board
    MonopolyBoard() {
        // Initialize the properties on the board with names, values, and positions
        properties = {
            {"Mediterranean Avenue", 60, 1},
            {"Baltic Avenue", 60, 3}, {"Reading Railroad", 200, 5},
            {"Oriental Avenue", 100, 6}, {"Vermont Avenue", 120, 8},
            {"Connecticut Avenue", 140, 9}, {"St. Charles Place", 140, 11},
            {"Electric Company", 150, 12}, {"States Avenue", 140, 13}, {"Virginia Avenue", 160, 14},
            {"Pennsylvania Railroad", 200, 15}, {"St. James Place", 180, 16},
            {"Tennessee Avenue", 180, 18}, {"New York Avenue", 200, 19},
            {"Kentucky Avenue", 220, 21},  {"Indiana Avenue", 220, 23},
            {"Illinois Avenue", 240, 24}, {"B&O Railroad", 200, 25}, {"Atlantic Avenue", 260, 26},
            {"Ventnor Avenue", 280, 27}, {"Water Works", 150, 28}, {"Marvin Gardens", 300, 29},
            {"Pacific Avenue", 320, 30}, {"North Carolina Avenue", 350, 31},
            {"Pennsylvania Avenue", 350, 33}, {"Short Line Railroad", 200, 34}, 
            {"Park Place", 350, 36}, {"Boardwalk", 400, 37}
        };
    }
    // Method to display all properties
    void displayProperties() const {
        cout << "Monopoly Properties: " << endl;
        for (const auto& property : properties) {
            cout << "Position: " << property.position << ", "
                 << "Name: " << property.name << ", "
                 << "Value: $" << property.value << endl;
        }
    }
    

    // Method to get a property by position
    Property getPropertyByPosition(int pos) const {
        for (const auto& property : properties) {
            if (property.position == pos) {
                return property;
            }
        }
        // Return an empty property if not found (just for safety, you could also throw an exception)
        return Property{"Unknown", 0, -1};
    }

private:
    vector<Property> properties;  // Vector to store all the properties
};

int main() {
    MonopolyBoard board;  // Create an instance of the MonopolyBoard class

    // Call the method to display all properties
    board.displayProperties();


    
    return 0;
}
