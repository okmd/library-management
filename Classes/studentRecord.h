
class studentRecord{
	protected:
		ofstream out;
		ifstream in;
		fstream finout;
		Student student;
		IbookRecord book;
		string fileName="Records/Student.dat";
		int id;
	public:
		void Display_Student()
		{
		    in.open(fileName.c_str(), ios::binary);
			while(in.read((char*)&student, sizeof(student)))
		    {
		      student.Display_data();
		    }        
		    in.close();
		}	
			
		void Enter_Student()
		{
		    out.open(fileName.c_str(),ios::binary | ios::app);
		    student.Enter_data();
		    out.write((char*)&student, sizeof(student));
		    out.close();
		}
		
		void Find_Student(long long int n)
		{
		    in.open(fileName.c_str(), ios::binary);
			int found=0;
		    while(in.read((char*)&student, sizeof(student)))
		    {
		        if(student.getEnrollment() == n)
		        {
		            student.Display_data();
					found=1;
		        }
		    }
		    if(found==0)
			{
		    	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t     Student Not Found!\n";
				cout<<"\t\t||------------------------------------------------||\n";	
			}
		    in.close();
		}
		void Delete_Student(long long int n)
		{	
		    in.open(fileName.c_str(), ios::binary);
		    out.open("Records/Temp.dat", ios::out | ios::binary);
		    while(in.read((char*)&student, sizeof(student)))
		    {
		        if(student.getEnrollment()!= n)
		        {
		            out.write((char*)&student, sizeof(student));
		        }
		    }
			in.close();
		    out.close();
			remove(fileName.c_str());
			rename("Records/Temp.dat",fileName.c_str());
		}
		
		void Update_Student(long long int n)
		{
		    finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
		    int found=0;
			while(finout.read((char*)&student, sizeof(student)))
		    {
		      if(student.getEnrollment()==n)
		       {
		            student.Display_data();
		          	long long  int pos = -1 * sizeof(student);
		            finout.seekp(pos, ios::cur);
		            cout<<"\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t||------------------------------------------------||\n";
					cout<<"\t\t     Enter the new details of Student\n";
					cout<<"\t\t||------------------------------------------------||\n";
		            cout << "\n\n";
					student.Enter_data();
		            finout.write((char*)&student, sizeof(student)); 
		        }		
			}
			finout.close();
		}
		int check_enrollment(long long int n)
		{
			in.open(fileName.c_str(), ios::binary);
			int result;
		    while(in.read((char*)&student, sizeof(student)))
		    {
		        if(student.getEnrollment() == n)
		        {
		            result =1;
		            break;
		        }
		        else{
		        	result=0;
				}
		    }
		    return result;
		}
		void updateFine(long long int n,float ufine,float pfine){
			finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
		    int found=0;
			while(finout.read((char*)&student, sizeof(student)))
		    {
		      if(n==student.getEnrollment()){
		      		student.Display_data();
		          	long long  int pos = -1 * sizeof(student);
		            finout.seekp(pos, ios::cur);
					student.setPfine(pfine);
					student.setUfine(ufine);
		            finout.write((char*)&student, sizeof(student)); 
		            cout<<"\n\n";
					cout<<"\t\t||------------------------------------------------||\n";
					cout<<"\t\t\t\t     Updated!\n";
					cout<<"\t\t||------------------------------------------------||\n";	
			  }
			}
			finout.close();
		}
		
		void issueBook(int id){
			book.ibook(id);
		}
		void returnBook(int n){
			book.Delete_Book(n);
		}
		void viewIssuedBook(){
			book.Display_Book();
		}
		float return_uppaidFine(){
			float upf=0;
			finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
			while(finout.read((char*)&student, sizeof(student)))
		    {
		      upf=upf+student.return_unpaidFine();
			}
			finout.close();
			return upf;
		}
		float return_paidFine(){
			float pf=0;
			finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
			while(finout.read((char*)&student, sizeof(student)))
		    {
		      pf=pf+student.return_paidFine();
			}
			finout.close();
			return pf;
		}
		
};
