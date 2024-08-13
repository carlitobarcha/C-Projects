# include <iostream>
using namespace std;

class total
{
    int n;
    
    public:
        
        
        void getdata()
        {
            cin>>n;
        }
        
       
	        void add(total r, total s)
        {
        	
            n  =  r.n + s.n;    
            cout<<n;
            
        }
        
        
};

int main()
{
    total r,s,f;
    r.getdata();
    s.getdata();
    f.add(r,s);
