#include<iostream>

using namespace std;

int main(){
	int n,n2,r,r2,len,count=0,sum=0,m=1;
	string s1;
	cout<<"Enter any number: "<<endl;
	cin>>n;
	n2=n;
	len=n;
	
	while(len != 0){
		count++;
		len /= 10;
	}

    while(n>0){
		r=n%10;  //finding reminder
		sum=sum+r;
		n=n/10;
	}
	
	while(n2>9){
		r2=n2%10;
		m=m*r2;
		n2=n2/10;
}
		
	if(n2<=9){
		m=m*n2;
	}
	
	
	if(sum == 7 ){
		cout<<"Yooo dowg Thala for reason "<<endl<<" Sum of digits in number is 7 "<<endl;
	}
	
	else if(m == 7){
		cout<<"Yooo  dowg Thala  for reason "<<endl<<" multiplication of digits is 7 "<<endl;
	}
		
	else if(count == 7){
		cout<<"Yooo  dowg Thala for reason "<<endl<<" No. of digits in number is 7 "<<endl;
		}
		
	
	return 0;
}
