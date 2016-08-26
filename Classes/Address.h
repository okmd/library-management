class Address{
	protected:
		char buildingNo[2];
		char flatNo[5];
		char floorNo[10];
		char city[20];
		char district[20];
		char state[20];
		int pinCode;
	public:
		void getAddress(){
			
			
						
						cout<<"\t\t\t   Enter Bulding Letter: ";
						fflush(stdin);
						cin.get(buildingNo,2);
						cout<<"\t\t\t   Enter Flat No:\t";
						fflush(stdin);
						cin.get(floorNo,10);
						cout<<"\t\t\t   Enter Floor:\t\t";
						fflush(stdin);
						cin.get(flatNo,5);
						cout<<"\t\t\t   Enter City:\t\t";
						fflush(stdin);
						cin.get(city,20);
						cout<<"\t\t\t   Enter District:\t";
						fflush(stdin);
						cin.get(district,20);
						cout<<"\t\t\t   Enter State:\t\t";
						fflush(stdin);
						cin.get(state,20);
						cout<<"\t\t\t   Enter PinCode:\t";
						cin>>pinCode;
						cout<<" \n";
						
							
		}		
		void showAddress(){
			cout<<buildingNo<<"-"<<flatNo<<" "<<floorNo<<endl;
			cout<<"\t\t\t\t\t"<<city<<" "<<district<<endl;
			cout<<"\t\t\t\t\t"<<state<<" "<<pinCode<<endl;
		}
		char* getCity(){
			return city;
		}
		
		char* getDistrict(){
			return district;
		}
		
		char* getState(){
			return state;
		}
		
};
