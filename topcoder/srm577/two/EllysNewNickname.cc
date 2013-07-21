#include <string>

using namespace std;

class EllysNewNickname {
    public:
        int getLength(string);
};

int EllysNewNickname::getLength(string nickname) {
    int ans = 0;
    bool flag = 0;

    for (int i=0; i < nickname.size(); i++) {
        if (nickname[i] == 'a' || nickname[i]=='e' || nickname[i]=='i' || nickname[i] == 'o' || nickname[i] == 'u' || nickname[i] == 'y') {
            if (flag==0) {
                ans++;
            }
            flag = 1;
        } else {
            flag = 0;
            ans++;
        }
    }

    return ans;
}
