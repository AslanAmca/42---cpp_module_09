#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw ": Enter args";
		std::vector<int> Vec;
		std::deque<int> Deq;
		double vectorSortingTime;
		double dequeSortingTime;
		int number;
		for (int index = 1; index < argc; index++)
		{
			std::stringstream readstring(argv[index]);
			if (!(readstring >> number) || !(readstring.eof()))
				throw "";
			if (number < 0)
				throw ": Negative number !";
			Vec.push_back(number);
			Deq.push_back(number);
		}

		PmergeMe pMergeMe;
		std::cout << "--> Before <---" << std::endl;
		;
		pMergeMe.print(Vec, Deq);
		pMergeMe.calculateTime(Vec, Deq, vectorSortingTime, dequeSortingTime);
		std::cout << std::endl;
		std::cout << "--> After <---" << std::endl;
		pMergeMe.print(Vec, Deq);
		std::cout << std::endl
				  << "Time to process a range of " << argc - 1 << " elements with std::vector : " << vectorSortingTime << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque :  " << dequeSortingTime << " us" << std::endl;
	}
	catch (const char *errorMsg)
	{
		std::cout << "Error " << errorMsg << std::endl;
	}
}