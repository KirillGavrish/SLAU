#include<array>

template<std::size_t N>
struct d3_m
{
    private:
        std::size_t const dim = N;

    public:

        using arr = std::array<double, N>;
        arr a, b, c;

    d3_m()
    {
        for(int i = 0; i < N; ++i)
        {
            this->a[i] = 0;
            this->b[i] = 0;
            this->c[i] = 0;
        }
    }
 /*    d3_m(auto a, auto b, auto c)
        : dim(a.size())
    {
        for(int i = 0; i < N; ++i)
        {    
            this->a[i] = a[i];
            this->b[i] = b[i];
            this->b[i] = c[i]; 
        }
    }
  */
/*        int Dim()
         {
            return this->dim;
        }
*/
};

template<std::size_t N>
std::array<double, N> solve(d3_m<N> m, std::array<double, N> f);

/*    d3_m &operator=(d3_m const &other)
    {
        for(int i = 0; i < N; ++i)
        {
            this->a[i] = other.a[i];
            this->b[i] = other.b[i];
            this->b[i] = other.c[i];
        }
        return *this;
    }   */


