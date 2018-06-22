#include<stdio.h>
#include<vector>

using namespace std;

int main() {
    vector<int*> vi;

    for(int i = 0; i < 10; i++) {
        vi.push_back(new int(i));
    }

    for(vector<int*>::iterator it = vi.begin(); it != vi.end();) {
        if(*(*it) % 2 == 0) {
            delete (*it);
            vi.erase(it);
        } else {
            ++it;
        }
    }

    for(vector<int*>::iterator it = vi.begin(); it != vi.end();) {
        printf("### %d \n", (*(*it)));
        ++it;
    }
}

