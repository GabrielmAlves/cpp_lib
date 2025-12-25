export module Vector;

export template <typename T>
class Vector {
public:
	Vector();
	~Vector();
	void push_back(T&& value);
	void emplace_back(T&& value);
};
