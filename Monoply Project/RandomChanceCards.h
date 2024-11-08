#ifndef RandomChanceCards_h

#define RandomChanceCards_h
#include <vector>
#include <string>

class RandomChanceCards
{
public:
	RandomChanceCards();
	~RandomChanceCards();
	void drawChanceCard();
	void drawCommuniryChestCard();
	void shuffleChanceDeck();
	void shuffleCommunityChestDeck();
	void moneyChange();

private:
	std::string drawnCard;


};

#endif // !RandomChanceCards_h
