#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class EllysRoomAssignmentsDiv2 {
    public:
        double getProbability(vector <string>);
};

double EllysRoomAssignmentsDiv2::getProbability(vector <string> ratings) {
    int N = 0;
    string s = "";
    for (int i=0; i < ratings.size(); i++) {
        s += ratings[i];
    }
    int buf;
    stringstream ss(s);

    vector<int> t;
    while (ss >> buf) {
        t.push_back(buf);
    }
    N = t.size();
    int pos = t[0]; 
    
    sort(t.begin(), t.end(), greater<int>());
    if (t[0] == pos) { return 1.0 ;}

    int R = 0;
    if (N%20 ==  0) {R = N/20;}
    else {R = N/20 + 1;}

    int n = 0;
    for(int i=0; i < t.size(); i++) {
        if (t[i] == pos) {
            n = i;
        }
    }
    if (n < R) {
        return 0.0;
    } else if (N < 20) {
        return 1.0;
    } else {
        return 1.0/R;
    }
}
