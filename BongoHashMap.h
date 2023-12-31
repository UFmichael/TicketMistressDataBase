#ifndef PERSONALGITFRONT_BONGOHASHMAP_H
#define PERSONALGITFRONT_BONGOHASHMAP_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include "Ticket.hpp"

using namespace std;

class BongoHashMap {
private:
    int numStates = 50, numMakes = 49, numModels = 23, numColors = 18;
    unordered_map<int, vector<Ticket*>> hashArray;
    int capacity;
    int size;
    float maxLoadFactor = 0.75f;

public:
    BongoHashMap();
    void addCase(State state, Make make, Model model, Color color, int year);
    vector<vector<string>> getCase(State state, Make make, Model model, Color color, Year year);
    vector<vector<string>> getCaseInt(int state, int make, int model, int color, int year);
    vector<vector<string>> getAllCases(State state, Make make, Model model, Color color, Year year);
    int hashFunction(State state, Make make, Model model, Color color, int year);
    int hashFunctionInt(int state, int make, int model, int color, int year);
    int sizeOfMap();
    bool isEmpty();
    void resizeArr();

};


#endif //PERSONALGITFRONT_BONGOHASHMAP_H
