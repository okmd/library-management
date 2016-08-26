
class Student
{
	protected:
		Name name;
		Name fatherName;
		Name motherName;
		char gender[6];
		Address address;
		uClass uclass;
		char email[50];
		uDate dob;
		long long int mobile;
		uDate joindate;
		int book_issued;
		float unpaidFine;
		float paidFine;
		int age;
		long long int enrollment;
		
	public:
		void Enter_data()
		{
			cout<<"\n\t\t\t          STUDENT'S DETAILS\n";
			cout<<"\t||---------------------------------------------------------||\n";
			cout<<"\t\tName:\n\n";
			fflush(stdin);
			name.getName();
			cout<<"\t\tEnter Enrollment:";
			cin>>enrollment;
			cout<<"\t\tEnter Gender:";
			fflush(stdin);
			cin.get(gender,6);
			cout<<"\t\tEnter Age:";
			cin>>age;
			cout<<"\n\t\tClass:\n\n";
			fflush(stdin);
			uclass.getuClass();
			cout<<"\n\t\tEnter Email:";
			fflush(stdin);
			cin.get(email,50);
			cout<<"\t\tEnter Mobile:";
			cin>>mobile;
			cout<<"\n\t\tDOB:\n\n";
			fflush(stdin);
			dob.getuDate();
			cout<<"\n\t\tFather Name:\n\n";
			fflush(stdin);
			fatherName.getName();
			cout<<"\t\tMother Name:\n\n";
			fflush(stdin);
			motherName.getName();
			cout<<"\t\tJoin Date:\n\n";
			fflush(stdin);
			joindate.getuDate();
			cout<<"\n\t\tAddress:\n\n";
			fflush(stdin);
			address.getAddress();
			book_issued=0;
			unpaidFine=0;
			paidFine=0;	
			cout<<"\t||---------------------------------------------------------||\n";
		}
		void Display_data()
		{
			
						cout<<"\t\t\t     STUDENT'S PROFILE\n";
						cout<<"\t||-----------------------------------------------------------||\n";
						cout<<"\t\t   Enrollment No:\t"<<enrollment<<"\t\t\t\n";
						cout<<"\t\t   Name:\t\t";
						name.showName();
						cout<<"\t\t\n";
						cout<<"\t\t   Age:\t\t\t"<<age<<"\t\t\t\n";
						cout<<"\t\t   Email:\t\t"<<email<<"\n";
						cout<<"\t\t   Gender:\t\t"<<gender<<"\t\t  \n";
						cout<<"\t\t   Mobile:\t\t"<<mobile<<"\t\t  \n";
						cout<<"\t\t   Class:\t\t";
						uclass.showuClass();
						cout<<"\n\t\t   Dob:\t\t\t";
						dob.showuDateInt();
						cout<<"\n\t\t   Join Date:\t\t";
						joindate.showuDateInt();
						cout<<"\n\t\t   Issued Book:\t\t"<<book_issued<<"\t\t\t";
						cout<<"\n\t\t   Unpaid Fine:\t\t"<<unpaidFine<<"\t  \n";
						cout<<"\t\t   Paid Fine:\t\t"<<paidFine<<"\t  \n";
						cout<<"\t\t   Father's Name:\t";
						fatherName.showName();
						cout<<"  \n";
						cout<<"\t\t   Mother's Name:\t";
						motherName.showName();
						cout<<"  \n";
						cout<<"\t\t   Address:\t\t";
						address.showAddress();
						cout<<" \n";
						cout<<"\t||-----------------------------------------------------------||\n";
		}
		
		long long int getEnrollment(){
			return enrollment;
		}
		float return_unpaidFine(){
			return unpaidFine;
		}
		float return_paidFine(){
			return paidFine;
		}
		void setUfine(float n){
			unpaidFine=n;
		}
		void setPfine(float n){
			paidFine=n;
		}
		 
		
};
