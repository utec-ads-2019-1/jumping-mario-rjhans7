#include <iostream>
#include <vector>
using namespace std;

int main() {

    int nCases = 0;
    cin >> nCases;

    for(int i=0; i<nCases; i++){
        int nWalls = 0, wallLength=0, highJump=0, lowJump=0;
        auto walls = new vector <int>;

        cin >> nWalls;
        for(int i=0; i<nWalls; i++) {
            cin >> wallLength;
            walls->push_back(wallLength);
        }
        for(int i = 1; i < walls->size(); i++){
            if (walls->at(i-1)<walls->at(i)){
                highJump+=1;
            }
            else if (walls->at(i-1)>walls->at(i)){
                lowJump+=1;
            }
        }
        cout << "Case "<<i+1<<": "<< highJump << " "<< lowJump << endl;

        }

	return EXIT_SUCCESS;
}


