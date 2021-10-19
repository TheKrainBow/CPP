

# include <iostream>

class Data
{
	private:
		int		_number;
		char	_id;
	public:
		Data(char id, int number);
		~Data();
		void print(void);
};
