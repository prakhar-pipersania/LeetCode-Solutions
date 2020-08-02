class Cashier {
public:
    int N,D,custno=0;
    unordered_map<int,int> A;
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) 
    {
        N=n,D=discount;
        for(int i=0;i<products.size();i++)
            A[products[i]]=prices[i];
    }
    double getBill(vector<int> product, vector<int> amount) 
    {
        double val=0;
        for(int i=0;i<product.size();i++)
            val+=A[product[i]]*amount[i];
        custno++;
        if(custno==N)
            val-=(D*val)/100,custno=0;
        return val;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */
 