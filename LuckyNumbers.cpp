#include <iostream>

int main()
{
	int counter = 0;

	for( int s3 = 0; s3 <= 27; ++s3 )
	{
		std::cout << "SUM = "<< s3 << std::endl;

		int s2Min = std::max( 0, s3 - 9 );
		int s2Max = std::min( 18, s3 );

		for( int s2One = s2Min, aOne = s3 - s2One; s2One <= s2Max; ++s2One, --aOne)
		{
			for( int bOne = std::max( 0, s2One - 9 ), cOne = s2One - bOne; bOne <= std::min( 9, s2One ); ++bOne, --cOne)
			{
				for( int s2Two = s2Min, aTwo = s3 - s2Two; s2Two <= s2Max; ++s2Two, --aTwo)
				{
					for( int bTwo = std::max( 0, s2Two - 9 ), cTwo = s2Two - bTwo; bTwo <= std::min( 9, s2Two ); ++bTwo, --cTwo)
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
