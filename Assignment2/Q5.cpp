#include <iostream>
using namespace std;

struct TowerOfHanoi {
    private:
        int numDisks;
        int rods[3][10];
        int top[3];
    public:
        TowerOfHanoi(int n) {
            numDisks = n;
            top[0] = n;
            top[1] = 0;
            top[2] = 0;
            for (int i = 0; i < n; i++)
                rods[0][i] = n - i;
        }
        void moveDisk(int fromRod, int toRod) {
            int disk = rods[fromRod][top[fromRod]-1];
            rods[fromRod][top[fromRod]-1] = 0;
            top[fromRod]--;
            rods[toRod][top[toRod]] = disk;
            top[toRod]++;
            cout << "Moved disk " << disk << " from rod " << fromRod+1 << " to rod " << toRod+1 << "."<< endl;
        }
        int getDisks(){
            return numDisks;
        }
        void solve(int numDisks = -1, int fromRod = 0, int toRod = 2, int auxRod = 1) {
            if (numDisks == -1)
                numDisks = getDisks();
            if (numDisks == 1)
                moveDisk(fromRod, toRod);
            else {
                solve(numDisks-1, fromRod, auxRod, toRod);
                moveDisk(fromRod, toRod);
                solve(numDisks-1, auxRod, toRod, fromRod);
            }
        }
};

int main() {
    int disks = 6;
    TowerOfHanoi game = TowerOfHanoi(disks);
    game.solve();
    return 0;
}