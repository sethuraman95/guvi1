#include<iostream.h>                                                                                                            #include <iostream>
using namespace std;


void hanoi(int diskSize, int source, int dest, int spare)
{
  
  if(diskSize == 0)
	{
		std::cout << "Move disk " << diskSize << " from peg " << source << " to peg " << dest << endl;
	}
	else
	{
		
		hanoi(diskSize - 1, source, spare, dest);

		
		hanoi(diskSize - 1, spare, dest, source);
	}
}

int main()
{
  hanoi(2, 0, 1, 2);
  return 0;
}
