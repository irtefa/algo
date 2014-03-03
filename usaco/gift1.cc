/*
    ID: irtefa11
    PROB: gift1
    LANG: C++
*/

#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main() {
    int n;
    ofstream output;
    ifstream in ("gift1.in");

    string names[11];
    map<string, long> init;
    map<string, long> final;

    in >> n;

    // Collect names
    for (int i = 0; i < n; i++) {
        string prsn = "";
        in >> prsn;
        names[i] = prsn;
        final[prsn] = 0;
    }

    // Distribute
    for (int i = 0; i < n; i++) {
        int amt, n_ppl;
        string prsn = "";

        in >> prsn;
        in >> amt >> n_ppl;

        if (amt == 0 && n_ppl == 0);
        else {
            // Assign initial amount
            init[prsn] = amt;
            final[prsn] += amt%n_ppl;
            // Give away
            for (int j = 0; j < n_ppl; j++) {
                string give_prsn = "";
                in >> give_prsn;
                final[give_prsn] += amt/n_ppl;
            }
        }
    }

    output.open("gift1.out");
    for (int k = 0; k < n; k++) {
        output << names[k] << " " << final[names[k]] - init[names[k]] << endl;
    }
    output.close();

    return 0;
}
