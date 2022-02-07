

# include <iostream>

class Data
{
	private:
		int		_number;
		char	_id;
	public:
		Data();
		Data(const Data &toCopy);
		Data &operator=(const Data &toCopy);
		~Data();

		Data(char id, int number);
		void print(void);
};
