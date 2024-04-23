#ifndef NODE_CPP
#define NODE_CPP

class Node {
	public:
		int value;
		Node* next;
		Node* prev;

		Node(int _value) : value(_value), next(nullptr), prev(nullptr) {
			
		}
};

#endif
