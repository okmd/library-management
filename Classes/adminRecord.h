
class adminRecord{
	protected:
		ofstream out;
		ifstream in;
		fstream finout;
		Admin admin;
		studentRecord student;
		string fileName="Records/Admin.dat";
		bookRecord book;
	public:
		void Display_Admin()
		{
		    in.open(fileName.c_str(), ios::binary);
			while(in.read((char*)&admin, sizeof(admin)))
		    {
			  admin.Display_Admin();
		    }        
		    in.close();
		}	
			
		void Enter_Admin()
		{
		    out.open(fileName.c_str(),ios::binary | ios::app);
		    admin.Enter_Admin();
		    out.write((char*)&admin, sizeof(admin));
		    out.close();
		}
		
		void Find_Admin(int n)
		{
		    in.open(fileName.c_str(), ios::binary);
			int found=0;
		    while(in.read((char*)&admin, sizeof(admin)))
		    {
		        if(admin.Return_id()== n)
		        {
		            admin.Display_Admin();
		            found=1;
		        }
		    }
		    if(found==0){
		    	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t      Admin Not Found!\n";
				cout<<"\t\t||------------------------------------------------||\n";
			}
		    in.close();
		}
		
		void deleteAdmin(int n)
		{
		    in.open(fileName.c_str(), ios::binary);
		    out.open("Records/Temp.dat", ios::out | ios::binary);
		    while(in.read((char*)&admin, sizeof(admin)))
		    {
		        if(admin.Return_id()!= n)
		        {
		            out.write((char*)&admin, sizeof(admin));
		        }
		    }
			in.close();
		    out.close();
		    
			
		    if(admin.Return_id()==n){
				remove(fileName.c_str());
				rename("Records/Temp.dat",fileName.c_str());
				cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t      Record Deleted!\n";
				cout<<"\t\t||------------------------------------------------||\n";
			}
			
			if(admin.Return_id()!=n){
				cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t      Record Could Not be Deleted!\n";
				cout<<"\t\t||------------------------------------------------||\n";
			}
	}
		
		void Update_Admin(int n)
		{
		    finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
		    int found=0;
			while(finout.read((char*)&admin, sizeof(admin)))
		    {
		      if(admin.Return_id()==n)
		       {
		            admin.Display_Admin();
		          	long long int pos = -1 * sizeof(admin);
		            finout.seekp(pos, ios::cur);
		            cout<<"\n";
					cout<<"\t\t||------------------------------------------------||\n";
					cout<<"\t\t\t Enter new details of student\n";
					cout<<"\t\t||------------------------------------------------||\n\n";
					admin.Enter_Admin();
		            finout.write((char*)&admin, sizeof(admin)); 
		        }
			}
			finout.close();
		}
		
		void addBook(){
			book.Enter_Book();	
		}
		void showBook(){
			book.Display_Book();
		}
		void updateBook(int n){
			book.Update_Book(n);	
		}
		void searchBook(int n){
			book.Find_Book(n);	
		}
		void removeBook(int n){
			book.Delete_Book(n);

		}
		
		void addStudent(){	
		student.Enter_Student();
		}
		void displayStudent(){
		 student.Display_Student();	
		 }
		void removeStuden(long long int n){
			student.Delete_Student(n);
		}
		void searchStuden(long long int n){
			student.Find_Student(n);
		}
		void updateStudent(long long int n){
			student.Update_Student(n);
		}
		
		int check_admin(int n){
			in.open(fileName.c_str(), ios::binary);
			int found=0;
		    while(in.read((char*)&admin, sizeof(admin)))
		    {
		        if(admin.Return_id()==n){
		        	found=1;
					break;
				}  
		        else
		            found =0;
		    }
		    return found;
		}
		
		void collectedFine(){
				cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t      Total collected Fine:\t"<<student.return_uppaidFine()<<endl;;
				cout<<"\t\t||------------------------------------------------||\n";
		}
		void remainingFine(){
			cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t      Total remaining Fine:\t"<<student.return_paidFine()<<endl;;
				cout<<"\t\t||------------------------------------------------||\n";
		}
		void submitFine(){
			long long int e;
			float ufine=0,pfine=0,dep=0;
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Enrollment Number \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
			cin>>e;
			if(student.check_enrollment(e)){
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\tEnter Fine to deposite \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
				cin>>dep;
				if(dep<=student.return_uppaidFine())
				{
					ufine=student.return_uppaidFine()-dep;
					pfine=student.return_paidFine()+dep;
					student.updateFine(e,ufine,pfine);
				}
				else{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Fine less than unpaid fine!\n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
				}
				
			}
		}
};
