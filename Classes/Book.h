class Book{
	protected:
		int bookId;
		char bookName[100];
		char bookSubject[100];
		Name   bookAuthor;
		long long int bookISBN;
		float bookPrice;
		int bookQty;
	public:
		void Enter_Book(){
			cout<<"\t\t\t         ENTER BOOK DETAILS\n";
			cout<<"\t||--------------------------------------------------------------||\n";
			cout<<"\n\t\tEnter Book Id:";
			fflush(stdin);
			cin>>bookId;
			cout<<"\t\tEnter Book Name:";
			fflush(stdin);
			cin.get(bookName,100);
			cout<<"\t\tEnter Book Subject:";
			fflush(stdin);
			cin.get(bookSubject,100);
			cout<<"\n\t\tEnter Book Author:\n\n";
			fflush(stdin);
			bookAuthor.getName();
			cout<<"\t\tEnter Book ISBN:";
			fflush(stdin);
			cin>>bookISBN;
			cout<<"\t\tEnter Book Price:";
			cin>>bookPrice;
			cout<<"\t\tBook Quantity:";
			cin>>bookQty;
			cout<<endl;
			cout<<"\t||--------------------------------------------------------------||\n";
			
		}
		void Display_Book(){
			
						cout<<"\t\t\t         BOOK DETAILS\n";
						cout<<"\t||--------------------------------------------------------||\n";
						cout<<"\t\t   Book Id:\t\t"<<bookId<<"\t\t\t\n";
						cout<<"\t\t   Book Name:\t\t"<<bookName;
						cout<<"\t\t\n";
						cout<<"\t\t   Book Subject:\t"<<bookSubject<<"\t\t\t\n";
						cout<<"\t\t   Book Author:\t\t";
						bookAuthor.showName();
						cout<<"\n";
						cout<<"\t\t   ISBN:\t\t"<<bookISBN<<"\t\t  \n";
						cout<<"\t\t   Price:\t\t"<<bookPrice<<"\t  \n";
						cout<<"\t\t   No of books:\t\t"<<bookQty<<"\t\t  \n";
						cout<<" \n";
						cout<<"\t||--------------------------------------------------------||\n";
		}
		int Return_bookId(){
			return bookId;;
		}
		int Return_bookQty(){
			return bookId;;
		}
		void updateQty(int n){
			bookQty=n;
		}
		
};
