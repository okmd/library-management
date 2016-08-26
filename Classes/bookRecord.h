
class bookRecord{
	protected:
		ofstream out;
		ifstream in;
		fstream finout;
		Book book;
		string fileName="Records/Book.dat";
	public:
		void Display_Book()
		{
		    in.open(fileName.c_str(), ios::binary);
			while(in.read((char*)&book, sizeof(book)))
		    {
		      book.Display_Book();
		    }        
		    in.close();
		}		
		void Enter_Book()
		{
		    out.open(fileName.c_str(),ios::binary | ios::app);
		    book.Enter_Book();
		    out.write((char*)&book, sizeof(book));
		    out.close();
		}
	
		void Find_Book(int n)
		{
		    in.open(fileName.c_str(), ios::binary);
			int found=0;
		    while(in.read((char*)&book, sizeof(book)))
		    {
		        if(book.Return_bookId() == n)
		        {
		            book.Display_Book();
		            found=1;
		        }
		    }
		    if(found==0)
		    	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t  Book Not Found!\n";
				cout<<"\t\t||------------------------------------------------||\n";
		    in.close();
		}
		
		void Delete_Book(int n)
		{	
			int found=0;
		    in.open(fileName.c_str(), ios::binary);
		    out.open("Records/temp.dat", ios::out | ios::binary);
		    while(in.read((char*)&book, sizeof(book)))
		    {
		        if(book.Return_bookId()!= n)
		            out.write((char*)&book, sizeof(book));
		        else
		        	found =1;		
		    }
			in.close();
		    out.close();
		    remove(fileName.c_str());
		    rename("Records/Temp.dat",fileName.c_str());
			if(found==0)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t  Book Not Found!\n";
				cout<<"\t\t||------------------------------------------------||\n";
			}
			else
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t  Book Deleted!\n";
				cout<<"\t\t||------------------------------------------------||\n";	
			}
		}
		
		void Update_Book(int n)
		{
		    finout.open(fileName.c_str(),ios::binary|ios::in | ios::out);
			while(finout.read((char*)&book, sizeof(book)))
		    {
		      if(book.Return_bookId()==n)
		       {
		            book.Display_Book();
		          	long long  int pos = -1 * sizeof(book);
		            finout.seekp(pos, ios::cur);
		            cout<<"\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t||------------------------------------------------||\n";
					cout<<"\t\t\t  Enter the new details of Book\n";
					cout<<"\t\t||------------------------------------------------||\n";	
					book.Enter_Book();
		            finout.write((char*)&book, sizeof(book)); 
		        }  
			}
			finout.close();
		}
		
		/*int Get_BookQty(){	
			return bookQty;
		}
		
		char* getBookName(){
			return bookName;
		}
		char* getBookSubject(){
			return bookSubject;
		}
		Name getBookAuthor(){
			return bookAuthor;
		}
		float getBookPrice(){
			return bookPrice;
		}
		*/
		int returnBookId(){
			return book.Return_bookId();	
		}
};
