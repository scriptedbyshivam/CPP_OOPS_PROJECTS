/*Develop a application to impleranteurrency converter (Dollar to INR, EURO to INR, Yen to IR and vice versa),
 distance conv meter to KM, miles to KM and vice versa), time converter (hours to minutes, seconds and vice versa) using packages.*/

#include<iostream>
using namespace std;
class hello{
		public:
			double USD_IN_INR = 88.06;
			double EURO_IN_INR = 102.78;
			double YEN_IN_INR = 0.59;
			 
			void currency()
		    {
		    int ch;
			double money;
			
			cout<<"Press 1. To Get USD To INR"<<endl;    
			cout<<"Press 2. To Get EURO To INR"<<endl;
			cout<<"Press 3. To Get YEN To INR"<<endl;
			cout<<"Press 4. To Get INR To USD"<<endl;
			cout<<"Press 5. To Get INR To EURO"<<endl;
			cout<<"Press 6. To Get INR To YEN"<<endl;
			cin>>ch;
			
			cout<<"Please Enter Your Money = ";
		    cin>>money;
			
			switch(ch){
				case 1:
					cout<<"Your Amount USD To INR = "<<money*USD_IN_INR<<endl;
					break;
				case 2:
					cout<<"Your Amount EURO To INR = "<<money*EURO_IN_INR<<endl;
					break;
				case 3:
					cout<<"Your Amount YEN To INR = "<<money*YEN_IN_INR<<endl;
					break;
				case 4:
					cout<<"Your Amount INR To USD = "<<money/USD_IN_INR<<endl;
					break;
				case 5:
					cout<<"Your Amount INR To EURO = "<<money/EURO_IN_INR<<endl;
					break;
				case 6:
					cout<<"Your Amount INR To YEN = "<<money/YEN_IN_INR<<endl;
					break;
				default:
					cout<<"Please Enter Valid Number, Try Again"<<endl;
			}
		    	
			}
			void distance()
			{
				int p;
			    double unit;
			    
			    cout<<"Press 1. To Convert Distance Meter To Kilometer"<<endl;
			    cout<<"Press 2. To Convert Distance Miles To Kilometer"<<endl;
			    cout<<"Press 3. To Convert Distance Kilometer To Meter"<<endl;
			    cout<<"Press 4. To Convert Distance Kilometer To Miles"<<endl;
			    cin>>p;
			    
			    cout<<"Please Enter Your Distance = ";
			    cin>>unit;
			    
			    switch(p){
				case 1:
					cout<<"Your Distance Meter To Kilometer = "<<unit/1000<<endl;
					break;
				case 2:
					cout<<"Your Distance Miles To Kilometer = "<<unit*1.609<<endl;
					break;
				case 3:
					cout<<"Your Distance Kilometer To Meter = "<<unit*1000<<endl;
					break;
				case 4:
					cout<<"Your Distance Kilometer To Miles = "<<unit/1.609<<endl;
					break;
				
				default:
					cout<<"Please Enter Valid Number, Try Again"<<endl;
			}
			    
			    
				
			}
			void time()
			{
				int r;
				double t;
				
				cout<<"Press 1. To Convert Time Hours TO Minutes"<<endl;
				cout<<"Press 2. To Convert Time Hours TO Seconds"<<endl;
				cout<<"Press 3. To Convert Time Minutes TO Hours"<<endl;
				cout<<"Press 4. To Convert Time Seconds TO Hours"<<endl;
				cin>>r;
				
				cout<<"Please Enter Your Time = ";
			    cin>>t;
				
				switch(r){
				case 1:
					cout<<"Your Time Hours TO Minutes = "<<t*60<<endl;
					break;
				case 2:
					cout<<"Your Time Hours TO Seconds = "<<t*60*60<<endl;
					break;
				case 3:
					cout<<"Your Time Minutes TO Hours = "<<t/60<<endl;
					break;
				case 4:
					cout<<"Your Time Seconds TO Hours = "<<t/(60*60)<<endl;
					break;
				
				default:
					cout<<"Please Enter Valid Number, Try Again"<<endl;
			} 
			}
			
			
		
};

int main()
		{
			int a;
			char c;
			hello s1;
			
			
			do{
			cout<<"=====Welcome To Converters Hub===="<<endl;
			cout<<"Which Converter do you want?"<<endl;
			cout<<"Press 1. For Currency Converter "<<endl;
			cout<<"Press 2. For Distance Converter "<<endl;
			cout<<"Press 3. For Time Converter "<<endl;
			cout<<"Press 4. For Exit "<<endl;
			cin>>a;
			
			
			if(a==1){
				s1.currency();
			}
			else if(a==2){
				s1.distance();
			}
			else if(a==3){
				s1.time();
			}
			else if(a==4){
				cout<<"Thank You For Comming"<<endl;
				cout<<endl;
			}
			else{
				cout<<"Please Choice Valid Option, Try Again"<<endl;
			}
			
			
			cout<<"Do You Continue More ? "<<endl;
			cout<<"Press Y For Continue "<<endl;
			cout<<" Press N For End"<<endl;
			cin>>c;
			
			}while(c=='y' || c=='Y');
			
			
			
		}
