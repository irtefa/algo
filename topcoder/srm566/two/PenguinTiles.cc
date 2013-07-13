#include <vector>
#include <string>

using namespace std;

class PenguinTiles {
    public:
        int minMoves(vector <string>);
};

int PenguinTiles::minMoves(vector <string> tiles) {
    int w = tiles[0].length();
    int h = tiles.size();

    if(tiles[h-1][w-1] == '.') {
        return 0;
    }
    for(int i=0; i < w; i++) {
        if(tiles[h-1][i] == '.') {
            return 1;
        }
    }
    for(int j=0; j < h; j++) {
        if(tiles[j][w-1] == '.') {
            return 1;
        }
    }
    return 2;
}


