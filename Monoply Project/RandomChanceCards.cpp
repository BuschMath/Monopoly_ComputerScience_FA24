#include "RandomChanceCards.h"
#include <iostream>
#include <vector>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#include <iomanip>

using namespace std;

//Makes a struct for the cards
struct Card
{
    string description;
    int moneyChange;
};

std::vector<Card> chanceDeck;
std::vector<Card> communityChestDeck;

//Constructor
RandomChanceCards::RandomChanceCards()
{
    string drawnCard;
    vector<string> chanceDeck;
    vector<string> communityChestDeck;
}

RandomChanceCards::~RandomChanceCards()
{
}

//Draws a random chance card
void RandomChanceCards::drawChanceCard()
{
    srand(static_cast<unsigned>(time(0)));

    // Check if the vector is not empty
    if (!chanceDeck.empty()) {
        // Generate a random index
        int randomIndex = rand() % chanceDeck.size();

        // Access the random element
        Card drawnCard = chanceDeck[randomIndex];
      

		int cardLength = drawnCard.description.size();
		while (cardLength + 4 > 0) {
			cout << "-";
			cardLength--;
		}
        cardLength = drawnCard.description.size();
        cout << endl;
		cout << "|" << setw(cardLength + 3) << "|" << endl;
        std::cout << "| " << drawnCard.description << " |" << std::endl;
        cout << "|" << setw(cardLength + 3) << "|" << endl;
       
        while (cardLength + 4 > 0) {
            cout << "-";
            cardLength--;
        }
		cout << endl;
        // Remove the element from the vector
        chanceDeck.erase(chanceDeck.begin() + randomIndex);

        cout << "Money Change: " << drawnCard.moneyChange << endl;

    }
    else {
        std::cout << "Time to Shuffle" << std::endl;
        shuffleChanceDeck();
    }
}

//Draws a random community chest card
void RandomChanceCards::drawCommuniryChestCard()
{
        srand(static_cast<unsigned>(time(0)));

        // Check if the vector is not empty
        if (!communityChestDeck.empty()) {
            // Generate a random index
            int randomIndex = rand() % communityChestDeck.size();

            // Access the random element
           Card drawnCard = communityChestDeck[randomIndex];


            int cardLength = drawnCard.description.size();
            while (cardLength + 4 > 0) {
                cout << "-";
                cardLength--;
            }
            cardLength = drawnCard.description.size();
            cout << endl;
            cout << "|" << setw(cardLength + 3) << "|" << endl;
            std::cout << "| " << drawnCard.description << " |" << std::endl;
            cout << "|" << setw(cardLength + 3) << "|" << endl;

            while (cardLength + 4 > 0) {
                cout << "-";
                cardLength--;
            }
            cout << endl;
            // Remove the element from the vector
            communityChestDeck.erase(communityChestDeck.begin() + randomIndex);

			cout << "Money Change: " << drawnCard.moneyChange << endl;

        }
        else {
            std::cout << "Time to Shuffle" << std::endl;
            shuffleCommunityChestDeck();
            }
}

//Shuffles the chance deck
void RandomChanceCards::shuffleChanceDeck()
{
    chanceDeck = {
      { "Advance to Go", 200 },
      {"Advance to Nearest Railroad", 0},
      {"Advance to Nearest Utility", 0},
      { "You Have Become Addicted to Gambling Lose $200", -200 },
      { "You Have Won a Beauty Contest Collect $100", 100 },
      { "Invested in the wrong cryptocurrency. Lose $100.", -100 },
      {"Stuck in traffic due to an influencer event. Lose one turn.", 0},
      { "Your smart home device malfunctions. Pay $50 for troubleshooting support.", -50},
      { "You have been selected for a random security check. Pay $50." , -50},
      { "Upgrade your gaming console. Pay $300 to get the latest one.", -300 },
    };
 
}

//Shuffles the community chest deck
void RandomChanceCards::shuffleCommunityChestDeck()
{
    communityChestDeck = {
    { "Your GoFundMe Campaign Was Successful Collect $200", 200 },
    { "You Have Been Cancelled pay $200" , -200},
    { "Your online order arrives early! Move forward three spaces." },
    { "Renew your subscription service. Pay $15.", -15 },
    { "Your online shop rating hits 5 stars! Collect $50 in bonus sales.", 50 },
    { "Oops! Car needs a repair after a long road trip. Pay $200.",-200 },
    { "Your pet becomes an internet star! Collect $100 from ad revenue.",100 },
    {"Caught binge-watching a new series. Lose one turn recovering your sleep schedule." , 0 },
    { "Your favorite restaurant opens nearby. Enjoy it too much—pay $30.", -30 },
    { "An old friend Venmos you back for a forgotten IOU. Collect $20.", 20 },
    };
}


//Changes the money of the player
void RandomChanceCards::moneyChange()
{

}
