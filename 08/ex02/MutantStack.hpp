#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		typedef std::stack<T, Container>						stack_class;
		typedef typename stack_class::container_type			container_type;
		typedef typename container_type::iterator				iterator;
		typedef typename container_type::const_iterator			const_iterator;
		typedef typename container_type::reverse_iterator		reverse_iterator;
		typedef typename container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &object) { *this = object; };
		MutantStack	&operator=(const MutantStack &object);

		MutantStack(const Container &container) : stack_class::stack(container) {};
		iterator				begin(void)			{ return (this->c.begin()); };
		const_iterator			begin(void) const	{ return (this->c.begin()); };
		iterator				end(void) 			{ return (this->c.end()); };
		const_iterator			end(void) const 	{ return (this->c.end()); };
		reverse_iterator		rbegin(void)		{ return (this->c.rbegin()); };
		const_reverse_iterator	rbegin(void) const	{ return (this->c.rbegin()); };
		reverse_iterator		rend(void) 			{ return (this->c.rend()); };
		const_reverse_iterator	rend(void) const 	{ return (this->c.rend()); };
};

template <typename T, typename Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=(const MutantStack &object)
{
	if (this == &object)
		return (*this);
	std::stack<T, Container>::operator=(object);
	return (*this);
}

#endif