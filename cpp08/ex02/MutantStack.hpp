
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
    MutantStack() : std::stack<T>(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &o) : std::stack<T>(o){};
    MutantStack &operator=(const MutantStack &o)
    {
        if (this == &o)
            return (*this);
        this->std::stack<T>::operator=(o);
        return (*this);
    };

    // container_type is the underlying container used by stack
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator cbegin() { return this->c.cbegin(); }
    const_iterator cend() { return this->c.cend(); }
    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }
    const_reverse_iterator crbegin() { return this->c.crbegin(); }
    const_reverse_iterator crend() { return this->c.crend(); }

  private:
};
