#include "Blockchain.h"


void getTime()
{
   time_t now = time(0);
   // convert now to string form
   char* date_time = ctime(&now);
   cout<< "" <<endl;
   cout << "The current date and time is: " << date_time << endl;
}


int main()
{
    Blockchain bChain = Blockchain();
    getTime();
    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));
    getTime();
    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));
    getTime();
    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}


