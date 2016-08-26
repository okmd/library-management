class Name{
	protected:
		char fName[20];
		char lName[20];
		char mName[20];
	public:
		void getName(){
			cout<<"\t\tEnter First Name:";
			fflush(stdin);
			cin.get(fName,20);
			cout<<"\t\tEnter Middle Name:";
			fflush(stdin);
			cin.get(mName,20);
			cout<<"\t\tEnter Last Name:";
			fflush(stdin);
			cin.get(lName,20);
			cout<<endl;
		}
		void showName(){
			
			cout<<fName<<" "<<mName<<" "<<lName;
		}
};
