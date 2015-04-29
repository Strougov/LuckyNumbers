#include <iostream>
#include <vector>

int main()
{
	unsigned int counter = 0;

	for( unsigned int s3 = 0; s3 <= 27u; ++s3 )
	{
		std::cout << "SUM = "<< s3 << std::endl;

		unsigned int const s2Min = std::max( 0u, s3 - 9u );
		unsigned int const s2Max = std::min( 18u, s3 );

    std::vector<unsigned int> triplets;
    triplets.reserve((s2Max - s2Min) + 1);

		for( unsigned int s2One = s2Min, aOne = s3 - s2One; s2One <= s2Max; ++s2One, --aOne)
		{
		  unsigned int const bOne_max = std::min( 9u, s2One );
			for( unsigned int bOne = std::max( 0u, s2One - 9u ), cOne = s2One - bOne; bOne <= bOne_max; ++bOne, --cOne)
			{
        triplets.emplace_back((aOne * 100u) + (bOne * 10u) + cOne);
			}
		}

    for(auto const &it_left : triplets)
    {
      for(auto const &it_right : triplets)
      {
        std::cout << "\t: " << it_left << it_right << std::endl;
      }
    }
	}

	std::cout << "Total : " << counter;
 	return EXIT_SUCCESS;
}
