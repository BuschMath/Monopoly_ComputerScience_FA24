#include "GamePieces.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct GamePieces
{
    int player;
    string GamePiece;
};
string selectGamePiece() {
    int choice;
    while (true) {
    cout << "Select a game piece:\n"
    << "1. Dog\n"
    << "2. Car\n"
    << "3. Hat\n"
    << "4. Ship\n"
    << "5. Thimble\n"
    << "6. Boot\n"
    << "7. Wheelbarrow\n"
    << "8. Iron\n"
    << "Enter your choice (1-8): ";
    cin >> choice;
    
    switch (choice) {
        case 1: return "Dog";
        case 2: return "Car";
        case 3: return "Hat";
        case 4: return "Ship";
        case 5: return "Thimble";
        case 6: return "Boot";
        case 7: return "Wheelbarrow";
        case 8: return "Iron";
        default:
            cout << "Invalid choice. Please try again";
            cin.clear();  // Clear any error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
      }
   }
}
int main ()
    {
    vector<GamePieces> gamePieces;
    int numPlayers;
        cout << "Enter the number of players: ";
        cin >> numPlayers;

        for (int i = 0; i < numPlayers; ++i) {
            cout << "Player " << i + 1 << ", ";
            string selectedPiece = selectGamePiece();

            // Check if the piece is already selected
            bool pieceTaken = false;
            for (const auto& piece : gamePieces) {
                if (piece.GamePiece == selectedPiece) {
                    pieceTaken = true;
                    break;
                }
            }

            if (pieceTaken) {
                cout << "Piece already taken. Please choose another.\n";
                --i;  // Decrement the counter to let the player choose again
            } else {
                gamePieces.push_back({ i + 1, selectedPiece });
                cout << "Player " << i + 1 << " selected " << selectedPiece << ".\n";
            }
        }

        // Display all selected pieces
        cout << "\nGame Setup Complete. Selected Pieces:\n";
        for (const auto& piece : gamePieces) {
            cout << "Player " << piece.player << ": " << piece.GamePiece << endl;
        }

        return 0;
}
