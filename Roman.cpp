void make_integer(int *a, string roman){
	for(int i=0;i<roman.length();i++){
		if(roman[i]=='I'){
			a[i]=1;
		}if(roman[i]=='V'){
			a[i]=5;
		}if(roman[i]=='X'){
			a[i]=10;
		}if(roman[i]=='L'){
			a[i]=50;
		}if(roman[i]=='C'){
			a[i]=100;
		}if(roman[i]=='D'){
			a[i]=500;
		}if(roman[i]=='M'){
			a[i]=1000;
		}
	}
}


int convert_decimal(string roman){

	int temp=0,a[roman.length()];
	make_integer(a,roman);
	int p=roman.length()-1;int i=p-1;

	while(p!=i){
		if(a[p]<=a[i]){
			temp+=a[p]+a[i];	
		}
		else
			temp+=a[p]-a[i];
	}

	return temp;

}



int main(){

	cout<<"Enter the Roman Number: ";

	string roman;

	cin>>roman;

	int s=convert_decimal(roman);

	cout<<s<<endl;

	return 0;

}
