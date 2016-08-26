class uDate{
	protected:
		int day;
		int month;
		int year;
	public:
		void getuDate()
		{
			cout<<"\t\tEnter Day:";
			cin>>day;
			cout<<"\t\tEnter Month:";
			cin>>month;
			cout<<"\t\tEnter Year:";
			cin>>year;
		}
		string getCurrentDate(){
	
			time_t now=time(0);
			tm *ltm=localtime(&now);
			int year=1900+ltm->tm_year;
			int month=1+ltm->tm_mon;
			int day=ltm->tm_mday;
			string result=to_string(day)+"/"+to_string(month)+"/"+to_string(year);
			return result;
		}
		void showuDateInt()
		{
			cout<<day<<"/"<<month<<"/"<<year;
		}
		int getDay()
		{
			return day;
		}
		int getMonth()
		{
			return month;
		}
		int getYear()
		{
			return year;
		}
		
};
