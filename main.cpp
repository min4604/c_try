#include <iostream>
#include <stdlib.h>
#include <list>
#include <cmath>
#include <time.h>

#define REPEAT 1

using namespace std;

int main() {
    srand(time(NULL));
    cout << "重複 " << REPEAT << " 次取平均" << "\n";
    for (int k = 15; k <31 ; k++)
    {
        
        double addTotalSpendTime = 0;
        double sumTotalSpendTime = 0;
        for (int n = 0; n < REPEAT; n++)
        {
            list<int> linkedList;
            double START, END;
            START = clock();
            for (int i = 0; i < pow(2, k); i++)
            {
                linkedList.push_back(rand());
            }
            END = clock();

            addTotalSpendTime += ((END - START) / CLOCKS_PER_SEC);


            double sum_START, sum_END;
            sum_START = clock();
            int sum = 0;
            for (int n : linkedList)
            {
                sum += n;
            }
            sum_END = clock();
            sumTotalSpendTime += ((sum_END - sum_START) / CLOCKS_PER_SEC);
        }
        double addAvrgSpendTime = addTotalSpendTime / REPEAT;
        double sumAvrgSpendTime = sumTotalSpendTime / REPEAT;
        cout << endl << "Link List新增2^" << k << "個隨機數所需的時間:" << addAvrgSpendTime << " sec" << endl;
        cout << endl << "Link List新增2^" << k << "個隨機數後計算總合所需的時間:" << sumAvrgSpendTime << " sec" << endl << endl;
    }

    return 0;
}


