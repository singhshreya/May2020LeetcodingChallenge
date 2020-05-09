class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        unsigned int i=1;
        for(i=1;i*i<=num;i++)
        {
            if(num/i==i && num%i==0)
            {
                return true;
            }
        }
        return false;
    }
};

// We used unsigned int here as simple [read signed] int gave overflow error.
