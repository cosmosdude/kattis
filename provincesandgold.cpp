#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int buyingPower = 0;
    
    
    int g, s, c;
    
    cin >> g >> s >> c;
    
    buyingPower += (g * 3);
    buyingPower += (s * 2);
    buyingPower += (c * 1);
    
    // cout << "Buying power => " << buyingPower << endl;

    string victoryCard = "";
    string treasureCard = "";
    string output = "";
    
    // victory card
    if (buyingPower >= 8) {
        victoryCard = "Province";
    } else if (buyingPower >= 5) {
        victoryCard = "Duchy";
    } else if (buyingPower >= 2) {
        victoryCard = "Estate";
    }
    
    // treasure card
    if (buyingPower >= 6) {
        treasureCard = "Gold";
    } else if (buyingPower >= 3) {
        treasureCard = "Silver";
    } else {
        treasureCard = "Copper";
    }
    
    
    if (victoryCard.length() != 0) {
        output = victoryCard;
        output += " or ";
        output += treasureCard;
    } else {
        output = treasureCard;
    }
    
    cout << output << endl;
    
    
    
    
    
    
}
