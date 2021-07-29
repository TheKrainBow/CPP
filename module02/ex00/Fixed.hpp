
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

class Fixed
{
	private:
		int					value;
		static const int	fixedPoint = 8;
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		void operator=(const Fixed &toAdd);
		int getRawBits(void);
		void setRawBits(const int raw);
		
		~Fixed();
};