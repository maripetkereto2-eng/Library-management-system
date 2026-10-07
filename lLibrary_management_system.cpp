  /* 
  
  NAME:  MARIPET KERETO
  REG: CT101/G/26655/25
  
  LIBRARY MANAGEMENT SYSTEM
  
  
  */
  
  
  
  
  
  
   #include <iostream>
   
   using namespace std;
   
   
	 class Book{
			   public:
			   	string bookTitle, author;
			   	int copies_Available;
			   	
			   	void inputDetails(){
					   
					   cout<<"Enter book title: "<<endl;
					   getline(cin, bookTitle);
					   
					   cout<<"Enter Author: "<<endl;
					   getline(cin, author);
					   
					   cout<<"Enter copies available: "<<endl;
					   cin>>copies_Available;
					   
					   
					   
				   }
				   
				    void borrowBook( int borrow){
				   	
				   	if(copies_Available > 0){
				   		
				   	
				   	copies_Available = copies_Available - borrow;
				   	cout<<"Books borrowed: "<<borrow<<endl;
				   	cout<<"Update copies available: "<<copies_Available;
					   }
					   else{
						  cout<<"No copy available "<<endl;
					   }
					   
				   }
				   
				   void displayDetails(){
				   	cout<<"LIBRARY MANAGEMENT SYSTEM"<<endl;
				   	cout<<"================"<<endl;
				   	cout<<"Book title: "<<bookTitle<<endl;
				   	cout<<"Author : "<<author<<endl;
				   	cout<<"copies available : "<< copies_Available<<endl;
				   }
			   	
			   	
	 };
	 
	 
	 int main(){
		 
		 Book book1;
		 
		 book1.inputDetails();
		 book1.displayDetails();
		 book1.borrowBook(2);
		 
		 

	 }
	 
	 