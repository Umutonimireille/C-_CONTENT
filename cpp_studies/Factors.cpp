#include<iostream>
using namespace std;

 int minDistance(int n)
        {
            int minDist = n, count = 0, f1 = 0;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    if (count == 0)
                        f1 = i;
                    count++;
                    if (count > 1)
                    {
                        if (minDist > i - f1)
                            minDist = i - f1;
                        f1 = i;
                    }

                }
                
                if (count == 1 && i == n - 1)
                    minDist = i - i;
            }
            if (count == 0)
            {
                return -1;
            }
            return minDist;

        }



int main(){
	
	int num ;
	cout<<endl;
	cout<<"enter your number:";
	cin>>num;
	cout<<"the distance is :"<<minDistance(num);
	
	return 0;
}
