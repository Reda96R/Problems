# include<deque>
# include<stack>
# include<iostream>

class MinStack {
	private:
		int	  min;
		std::deque<int>  stack;
		std::stack<int>  minStack;

	public:
		void	push( int val ){
			if (stack.empty() || minStack.top() >= val)
				minStack.push(val);
			this->stack.push_front(val);
		}
		
		void	pop( ){
			if (minStack.top() == this->stack.front()){
				minStack.pop();
			}
			this->stack.pop_front();
		}
		
		int	top( ){
			return (stack[0]);
		}
		
		int	getMin( ){
			return (this->minStack.top());
		}
};

// int	main(){
// 	MinStack* obj = new MinStack();
// 	obj->push(0);
// 	obj->push(1);
// 	obj->push(0);
// 	std::cout << obj->getMin() << std::endl;
// 	obj->pop();
// 	std::cout << obj->getMin() << std::endl;
// }
