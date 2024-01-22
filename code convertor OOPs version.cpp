#include<bits/stdc++.h>
using namespace std;

class codeconvertor{
	
	public:
		
	int binarytodecimal(int n){
	int ans = 0;
	int x = 1;
	while(n>0)
	{
		int rem = n%10;
		ans += x*rem;
		x *= 2;
		n /= 10;
    }
	
	return ans;
}
    int octaltodecimal(int a){
	int ans1 = 0;
	int y = 1;
	while(a>0)
	{
		int rem = a%10;
		ans1 += y*rem;
		y *= 8;
		a /= 10;
	}
	return ans1;
}

    int hexadecimaltodecimal(string n){
	int ans2 = 0;
	int z = 1;
	int s = n.size();
	for(int i=s-1; i>=0; i--)
	{
	if(n[i] >= '0' && n[i] <= '9')
	{
	  ans2 += z*(n[i]-'0');	
	}
	else if(n[i] >= 'A' && n[i] <= 'F')
	{
		ans2 += z*(n[i] - 'A'+ 10);
	}
	z *= 16;
	}
   return ans2;
}

    int decimaltobinary(int n){
	int rem,ans = 0 ,base =1;
	while(n>0)
	{
		rem = n%2;
		ans = ans + rem*base;
		n /= 2;
		base *= 10;
	}
	return ans;
	
}

    int decimaltooctal(int n){
	int rem,ans = 0 ,base =1;
	while(n>0)
	{
		rem = n%8;
		ans = ans + rem*base;
		n /= 8;
		base *= 10;
	}
	return ans;
	
}

    string decimaltohexa(int n){
	int x = 1;
	string ans = "";
	string s2;
	while(x <= n)
	    x*= 16;
	    x/= 16;
	    
	    while(x>0){
	    	
	    	int lastdigit = n/x;
	    	n -= lastdigit*x;
	    	x /= 16;
	    	
	    	if(lastdigit<=9){
			
	    string	s2 = to_string(lastdigit);
	    	ans = ans + s2;
	    }
	    	else
	    	{
	    		char c = 'A' + lastdigit - 10;
	    		ans.push_back(c);
			}
		}
	return ans;
	
}
};

    int main(){
	int n, a;
	string s;
	codeconvertor c;
	cout<<"Enter your converting choice: "<<endl<<endl;
	cout<<"1.binary to decimal "<<endl<<"2.octal to decimal"<<endl
	<<"3.hexadecimal to decimal "<<endl<<"4.decimal to binary"<<endl
	<<"5.decimal to octal"<<endl<<"6.decimal to hexadecimal"<<endl<<endl;
	cin>>a;
	
	switch(a){
		case 1:
		cout<<"Enter your binary no:"<<endl;
	    cin>>n;
	    cout<<"Your no in decimal is "<<c.binarytodecimal(n)<<endl;
	    break;
	    
	    case 2:
	    cout<<"Enter your octal no:"<<endl;
	    cin>>n;
	    cout<<"Your no in decimal is "<<c.octaltodecimal(n)<<endl;
	    break;
	    
	    case 3:
	    cout<<"Enter your hexadecimal no:"<<endl;
	    cin>>s;
	    cout<<"Your no in decimal is "<<c.hexadecimaltodecimal(s)<<endl;
	    break;
	    
	    case 4:
	    cout<<"Enter your decimal no:"<<endl;
	    cin>>n;
	    cout<<"Your no in binary is "<<c.decimaltobinary(n)<<endl;
	    break;
	    
	    case 5:
	    cout<<"Enter your decimal no:"<<endl;
	    cin>>n;
	    cout<<"Your no in octal is "<<c.decimaltooctal(n)<<endl;
	    break;
	    
	    case 6:
	    cout<<"Enter your decimal no:"<<endl;
	    cin>>n;
	    cout<<"Your no in hexadecimal  is "<<c.decimaltohexa(n)<<endl;
	    break;
	    
	    default:
	    cout<<"1 se 6 ke bitch me no. dal "<<endl;
	    	
	}

	return 0;
}
