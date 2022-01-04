#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <iomanip>      // std::setw

using namespace std;
int main()
{
	cout << "\x1B[2J\x1B[H";
	cout << "Downloading the internet ...\n";
	for (int i=0;i<=100;++i)
	{
		cout <<"\r"<<setw(2)<< i <<"%................20TiBps " << flush;
		this_thread::sleep_for(chrono::milliseconds(50));

	}
	cout << "\nDone!\n";
	return 0;
}

