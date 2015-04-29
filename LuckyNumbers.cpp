#include <iostream>

int main()
{
	unsigned int counter = 0;

	for( unsigned int s3 = 0; s3 <= 27u; ++s3 )
	{
		std::cout << "SUM = "<< s3 << std::endl;

		unsigned int const s2Min = std::max( 0u, s3 - 9u );
		unsigned int const s2Max = std::min( 18u, s3 );

		for( unsigned int s2One = s2Min, aOne = s3 - s2One; s2One <= s2Max; ++s2One, --aOne)
		{
		  unsigned int const bOne_max = std::min( 9u, s2One );
			for( unsigned int bOne = std::max( 0u, s2One - 9u ), cOne = s2One - bOne; bOne <= bOne_max; ++bOne, --cOne)
			{
				for( unsigned int s2Two = s2Min, aTwo = s3 - s2Two; s2Two <= s2Max; ++s2Two, --aTwo)
				{
				  unsigned int const bTwo_max = std::min( 9u, s2Two );
					for( unsigned int bTwo = std::max( 0u, s2Two - 9u ), cTwo = s2Two - bTwo; bTwo <= bTwo_max; ++bTwo, --cTwo)
					{
						std::cout << "\t: " << aOne << bOne << cOne << aTwo << bTwo << cTwo << std::endl;

						++counter;
					}
				}
			}
		}
	}

	std::cout << "Total : " << counter;
 	return EXIT_SUCCESS;
}
