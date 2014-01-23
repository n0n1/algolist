
class Ticket{

public:
	explicit Ticket(int N);
	~Ticket();
	bool isLuckly(int ticket);
	int count();
private:
	int _N;
};