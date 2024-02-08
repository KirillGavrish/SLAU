#include "d3_m.h"


/*    d3_m(double &a, double &b, double &c)
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
    /*    int Dim()
        {
            return this->dim;
        }
*/
template<std::size_t N>
std::array<double, N> solve(d3_m<N> m, std::array<double, N> f)
{
    std::array<double, N-1> p, q;
    std::array<double, N> x;
    std::size_t len_pq = p.size();

    p[0] = -m.c[0]/m.b[0];
    q[0] = f[0]/m.b[0]; 
    for(int i = 1; i < len_pq; ++i)
    {
        p[i] = -m.c[i]/(m.a[i]*p[i-1] + m.b[i]);
        q[i] = (f[i] - m.a[i]*q[i-1])/(m.a[i]*p[i-1] + m.b[i]);
    }

    x[N-1] = (f[N-1] - m.a[N-1] * q[len_pq - 1]) / (m.a[N-1] * p[len_pq - 1] + m.b[N-1]);

    for(int i = N - 2; i >= 0; --i)
    {    
        x[i] = p[i]*x[i+1] + q[i];
    }
    return x;
}

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


