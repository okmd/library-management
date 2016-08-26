class Admin{
	protected:
		int Aid;
		Name Aname;
		int Aage;
		char Agender[6];
		char Aemail[50];
		Name AfatherName;
		Name AmotherName;
		Address Aaddress;
		long long int Amobile;
		double collectedFine;
		double remainingFine;
		
	public:
		void Enter_Admin(){
			
						cout<<"\t\t\t         ENTER ADMIN DETAILS\n";
						cout<<"\t||--------------------------------------------------------------||\n";
						cout<<"\t\t   Enter Id:";
						cin>>Aid;
						cout<<"\n\t\t   Name:\n\n";
						fflush(stdin);
						Aname.getName();
						cout<<"\t\t   Enter Age:";
						cin>>Aage;
						cout<<"\t\t   Enter Gender:";
						fflush(stdin);
						cin.get(Agender,6);
						cout<<"\t\t   Enter Email:";
						fflush(stdin);
						cin.get(Aemail,50);
						cout<<"\n\t\t   Father Name:\n\n";
						fflush(stdin);
						AfatherName.getName();
						cout<<"\n\t\t   Mother Name:\n\n";
						fflush(stdin);
						AmotherName.getName();
						cout<<"\n\t\t   Address:\n\n";
						fflush(stdin);
						Aaddress.getAddress();
						cout<<" \n";
						cout<<"\t||--------------------------------------------------------------||\n";
						collectedFine=0;
						remainingFine=0;
	
		}
		
		void Display_Admin(){
			
						cout<<"\t\t\t         ADMIN PROFILE\n";
						cout<<"\t||--------------------------------------------------------------||\n";
						cout<<"\t\t   Id:\t\t\t"<<Aid<<"\t\t\t\n";
						cout<<"\t\t   Name:\t\t";
						Aname.showName();
						cout<<"\t\t\n";
						cout<<"\t\t   Age:\t\t\t"<<Aage<<"\t\t\t\n";
						cout<<"\t\t   Email:\t\t"<<Aemail<<"\n";
						cout<<"\t\t   Gender:\t\t"<<Agender<<"\t\t  \n";
						cout<<"\t\t   Mobile:\t\t"<<Amobile<<"\t\t  \n";
						cout<<"\t\t   Collected Fine:\t"<<collectedFine<<"\t  \n";
						cout<<"\t\t   Remainig Fine:\t"<<remainingFine<<"\t  \n";
						cout<<"\t\t   Father's Name:\t";
						AfatherName.showName();
						cout<<"  \n";
						cout<<"\t\t   Mother's Name:\t";
						AmotherName.showName();
						cout<<"  \n";
						cout<<"\t\t   Address:\t\t";
						Aaddress.showAddress();
						cout<<" \n";
						cout<<"\t||--------------------------------------------------------------||\n";
			
			
			
			
			
			
			
			
	/*		
		//	cout<<"\n\tId:"<<Aid;
	//		cout<<"\n\tName:";
		//	Aname.showName();
		//	cout<<"\n\tAge:"<<Aage;
			cout<<"\n\tEmial:"<<Aemail;
			cout<<"\n\tGender:"<<Agender;
			cout<<"\n\tFather Name:";
			AfatherName.showName();
			cout<<"\n\tMother Name:";
			AmotherName.showName();
			cout<<"\n\tAddress:";
			Aaddress.showAddress();
			cout<<"\n\tMobile:"<<Amobile;
			cout<<"\n\tCollected Fine:"<<collectedFine;
			cout<<"\n\tRemaining Fine:"<<remainingFine;
			*/
		}
		int Return_id(){
			return Aid;
		}
		
				
};
