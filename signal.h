#include <string>
namespace oop3 {
      struct sig{
          int signal;
          int time;
      };
    class signal {
    private:
       static const int QUOTA = 10;
       struct sig *signals;
       int max_time;
       int num_of_signals;
       int sz;
    public:
        signal();
        signal(unsigned char,int);
        signal( char *, int);
        signal(signal &&) ;
        friend std::ostream& operator << (std::ostream& out, const signal& ) ;
        friend int operator + ( signal& , signal&);
        signal &operator()(signal&, int);
        signal &operator>>=( int);
        signal &operator<<=( int);
        friend std::istream& operator >> (std::istream& in, signal& ) ;
        signal(const signal&);
        signal &operator =(const signal &);
        ~signal(){ delete[] signals; }
         signal &operator =(signal &&);
    };
    int check(int);

}

