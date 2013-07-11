#include <vector>
#include <cmath>

using namespace std;

class ValueHistogram {
public:
    vector <string> build(vector <int>);
};

vector <string> ValueHistogram:build(vector <int> values) {
    vector <int> frec(10, 0);
    int mayor = 1;
    for(int i=0; i < (int) values.size(); i++) {
        frec[values[i]]++;
    }    
    for(int i=0; i < 10; i++) {
        mayor = max(mayor, frec[i]);
    }
    vector <string> res;
    mayor++;
    for(int i=0; i < mayor; i++) {
       res.push_back("..........");
    }
    for(int i=0; i < 10; i++) {
        for(int j=0; j < frec[i]; j++) {
            res[mayor - 1 - j][i] = 'X';
        }
    }
    return res;
}
        
