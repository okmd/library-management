	int bookId,adminId,ch1,ch3,ch2,ch4,ch5;
	long long int enroll;	
	studentRecord student;
	adminRecord admin;

void RegStudent()
{
	adminRecord admin;
	system("CLS");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\tEnter Enrollment Number \n";
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\t     ";
	fflush(stdin);
	cin>>enroll;
	
	if(student.check_enrollment(enroll))
	{
		system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t         STUDENT'S DASHBOARD\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t||\tSTUDENT:\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 1.  View \t2.  Update\t  ||\n";
		cout<<"\t\t||\tBOOK:\t\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 3.  Issue \t4.  Return\t  ||\n";
		cout<<"\t\t||\t\t 5.  Exit\t\t\t  ||\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t\tEnter Your Choice:";
		fflush(stdin);
		cin>>ch3;
		switch(ch3)
		{
			case 1:
			{	
				studentRecord s;
				system("CLS");
				s.Find_Student(enroll);
				break;
			}
			case 2:
			{
				student.Update_Student(enroll);
				break;
			} 
			case 3:
			{
				system("CLS");
				cout<<"\n\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t\t  Enter Book Id\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t\t    ";
				fflush(stdin);
				cin>>bookId;
				student.issueBook(bookId);
				break;
			}
			case 4:
			{
				cout<<"\n\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t\t  Enter Book Id\n";
				cout<<"\t\t||------------------------------------------------||\n";
				cout<<"\t\t\t\t    ";
				fflush(stdin);
				cin>>bookId;
				student.returnBook(bookId);
				break;
			}
			case 5: break;		
			}
	}
	else
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t  You are not registered student!\n";
		cout<<"\t\t||------------------------------------------------||\n";
	}
}

void RegAdmin()
{
	system("CLS");
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\tEnter your Id \n";
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\t     ";
	fflush(stdin);
	cin>>adminId;
	system("CLS");
	if(admin.check_admin(adminId))
	{	
		adminRecord admin;
		
						
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t  MANAGER'S DASHBOARD\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t||\tPROFILE:\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 1.  View \t2.  Update\t  ||\n";
						
		cout<<"\t\t||\tSTUDENT:\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 3.  View \t4.  New\t\t  ||\n";
		cout<<"\t\t||\t\t 5.  Find \t6.  Update\t  ||\n";
		cout<<"\t\t||\t\t 7.  Delete\t\t\t  ||\n";
						
		cout<<"\t\t||\tBOOK:\t\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 8.  View \t9.  New\t\t  ||\n";
		cout<<"\t\t||\t\t 10. Find \t11. Update\t  ||\n";
		cout<<"\t\t||\t\t 12. Delete\t\t\t  ||\n";
						
		cout<<"\t\t||\tFINE:\t\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 13. Submit\t14. Exit\t  ||\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t\tEnter Your Choice:";				
						fflush(stdin);
						int ch5;
						cin>>ch5;
						system("CLS");
						switch(ch5)
						{
							case 1: 
							{
								system("CLS");
								admin.Display_Admin();
								break;
							}
							case 2:
							{
								admin.Update_Admin(adminId);
								break;
							} 
							case 3:
							{
								
								admin.displayStudent();
								break;
								
							}
							case 4:
							{
								admin.addStudent();
								break;
							}
							case 5: 
							{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Enrollment Number \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>enroll;
								admin.searchStuden(enroll);
								break;
								
							}
							case 6: 
							{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Enrollment Number \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>enroll;
								admin.updateStudent(enroll);
								break;
							}
							case 7:
							{
								
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Enrollment Number \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>enroll;
								admin.removeStuden(enroll);
								break;
							}
							case 8:
							{
								admin.showBook();
								break;
							}
							case 9:
							{
								admin.addBook();
								break;
							} 
							case 10:
							{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Book Id \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>bookId;
								admin.searchBook(bookId);
								break;
							}
							case 11:
							{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Book Id \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>bookId;
								admin.updateBook(bookId);
								break;
							}
							case 12:
							{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter Book Id \n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								fflush(stdin);
								cin>>bookId;
								admin.removeBook(bookId);
								break;
							}
							case 13:
							{
								admin.submitFine();
								break;
							}
							
							case 14: break;
						}
					}
					else
					{
						cout<<"\n\n\n";
						cout<<"\t\t||------------------------------------------------||\n";
						cout<<"\t\t\t  You are not registered member!\n";
						cout<<"\t\t||------------------------------------------------||\n";
					}
						
}

void homeScreen()
{
	do{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t          LIBRARY MANAGEMENT\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t||\tSTUDENT:\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 1.  New \t2.  Registred\t  ||\n";
		
		cout<<"\t\t||\tMANAGER:\t\t\t\t  ||\n";
		cout<<"\t\t||\t\t 3.  New \t4.  Registred\t  ||\n";				
		cout<<"\t\t||\t\t 5.  Exit\t\t\t  ||\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t\tEnter Your Choice:";
		fflush(stdin);
		cin>>ch1;
		switch(ch1)
		{
			case 1://new student
			{	system("CLS");
				admin.addStudent();
				
				break;
			}
			
			case 2://registered student
			{
				system("CLS");
				RegStudent();
				break;
			}
			case 3:{//new admin
					system("CLS");
					admin.Enter_Admin();
					break;
			}
			case 4:
			{//registered admin
				system("CLS");
				RegAdmin();
				break;
			}
			case 5: exit(0);
			default:{
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\tEnter (1 to 3) only!\n";
								cout<<"\t\t||------------------------------------------------||\n";
								cout<<"\t\t\t\t     ";
								break;
			}
		}
	}
	while(ch1!=3);	
}
