#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    // Create a deck of cards with 52 regular cards, one red joker, and one black joker
    vector<string> deck;
    string suits[4] = {"Detelina", "Srce", "Dijamant", "list"};
    string ranks[13] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "dzandar", "kralica", "kral"};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back(ranks[j] + " - " + suits[i]);
        }
    }
    deck.push_back("Crven Joker");
    deck.push_back("Crn Joker");
    
    // Print the deck in order
    cout << "Podreden spil: " << endl;
    for (string card : deck) {
        cout << card << endl;
    }
    
    // Shuffle the deck
    srand(time(0));
    for (int i = 0; i < deck.size(); i++) {
        int j = rand() % deck.size();
        swap(deck[i], deck[j]);
    }
    
    // Print the shuffled deck
    cout << "Izmesan spil: " << endl;
    for (string card : deck) {
        cout << card << endl;
    }
    
    return 0;
}