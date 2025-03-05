#include<iostream>
#include<vector>

using namespace std;
struct Pharmacy {
	  char id;
	  string name;
	  int quantity;
	  int price;
};
      Pharmacy phar;
      vector<Pharmacy> medics;
      
      addval(){
      	int choice;
      	do {
      		cout<<"Id: "; cin>> phar.id;
      		cout<<"Name: "; cin>> phar.name;
      		cout<<"Quantity: "; cin>> phar.quantity;
      		cout<<"Price: "; cin>> phar.price;
      		medics.push_back(phar);
      		cout<<"Saved Successfully!" <<endl;
      		cout<<"Enter '0' for exit OR Enter '1' to continue: ";
			cin>>choice;
		  }
		  while(choice!=0 && choice==1);
	  }
      
      search() {
      	string n;
      	cout<<"Enter name for search: "; 
		  cin>>n;
		  for (int i=0; i<medics.size(); i++) {
		  	if (n==medics[i].name) {
		  		cout<<i+1<<". ID: " <<medics[i].id <<endl;
		  			cout<<i+1<<". Name: " <<medics[i].name <<endl;
		  				cout<<i+1<<". Quantity: " <<medics[i].quantity <<endl;
		  					cout<<i+1<<". Price: " <<medics[i].price <<endl<<endl;
			  }
		  }
	  }
	  
	  del(){
	  	string n;
      	cout<<"Enter name for delete: "; 
		  cin>>n;
		  for (int i=0; i<medics.size(); i++) {
		  	if (n==medics[i].name) {
		  	medics.erase(medics.begin()+i);
			  cout<<"Deleted Succesfully! " <<medics[i].name <<endl<<endl;	
		  	}
		  }
	  }
      
      show(){
      	for(int i=0; i<medics.size(); i++) {
      		cout<<". ID: " <<medics[i].id <<endl;
		  			cout<<". Name: " <<medics[i].name <<endl;
		  				cout<<". Quantity: " <<medics[i].quantity <<endl;
		  					cout<<". Price: " <<medics[i].price <<endl<<endl;
		  }
      	
	  }
	  

	  
      int main() {
      	cout<<"----- PHARMACY MANAGEMENT SYSTEM -----" <<endl <<endl;
      	while(true) {
      		int value;
      		cout<<"1. For add medicines: "<<endl;
      		cout<<"2. For search medicines: "<<endl;
      		cout<<"3. For delete medicines: "<<endl;
      		cout<<"4. For show all medicines: "<<endl;
      		cout<<"5. For save medicines to file: "<<endl;
      		cout<<"6. For exit from program:  "<<endl;
      		cout<<"Type Here: "; cin>>value;
      			switch(value) { system("cls");
      				case 1:{
      					addval();
						break;
					  }//case 1
					  case 2:{  system("cls");
					  	search();
						break;
					  }//case 2
					  case 3:{  system("cls");
					  	del();
						break;
					  }//case 3
					  case 4:{ system("cls");
					  	show();
						break;
					  }//case 4
					 
                      case 6:{
                      	exit(0);
						
					  }//case6
					  default:
					  	{
					  		system("cls"); cout<<"Invalid Input!" <<endl<<endl;
						  }
				  }//switch
      	
		  }//while
	  }//main
