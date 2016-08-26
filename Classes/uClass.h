class uClass{
	protected:
		char className[100];
		char section[50];
		char subSection[50];
	public:
		void getuClass(){
			cout<<"\t\tEnter Class Name:";
			fflush(stdin);
			cin.get(className,100);
			cout<<"\t\tEnter Section:";
			fflush(stdin);
			cin.get(section,50);
			cout<<"\t\tEnter Subsetion:";
			fflush(stdin);
			cin.get(subSection,50);
		}
		void showuClass(){
			cout<<className<<" "<<section<<"-"<<subSection;
		}
		
		char* getClassName(){
			return className;
		}
		char* getSection(){
			return section;
		}
};
