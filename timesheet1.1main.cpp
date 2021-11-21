#include<stdlib.h>

#include<conio.h>

#include <stdlib.h>

#include<string>                 

#include<ctype.h>                   

#include<dos.h> 

#include<iostream>

#include<ctime>

#include<fstream>

#include<iomanip>

#include <vector>

#include<iterator>

#include<sstream>

#include <unistd.h>



using namespace std;
int c=0 ;
int Id [10] = {12345,11111,22222,33333,44444,55555,66666,77777,88888,54321};
int IdAttempt;
int qiz;
int n;
char anther;
string lgIN;
string date;
string user;
string hollydayDate;
string hollyday = "Hollyday";
string hollydayWord = hollyday;







string usertest(){

					
		cout<<"Enter User ID :"<<endl;
		cin>>user;
		return user;	
		
}



					
int logInInformation12345(){
	
	ofstream Fout;
	time_t now;
	struct tm nowLocal;
	now = time (NULL);
	nowLocal = *localtime(&now);
	Fout.open("12345.csv", ios::app);
	//Fout<<"ID Number"<<','<<"Date LogIn :"<<','<<" Time :"<<','<<endl;
	Fout<<IdAttempt<<','<<"LOGIN"<<','<<nowLocal.tm_mday<<"/"<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_year+1900<<','<<" "<<','<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<" "<<'\n';
	cout<<"L";
	usleep(33000);
	cout<<"O";
	usleep(33000);
	cout<<"D";
	usleep(33000);
	cout<<"I";
	usleep(33000);
	cout<<"N";
	usleep(33000);
	cout<<"G"<<endl;
	cout<<"Have A Good Working Day :)"<<endl<<"Dont Forget To Logout When You Finsh Your Work Day!!!"<<endl;
		
}




int logOutInformation12345(){
	
	ofstream Fout;
	time_t now;
	struct tm nowLocal;
	now = time (NULL);
	nowLocal = *localtime(&now);
	Fout.open("12345.csv", ios::app);
	//Fout<<"ID Number"<<','<<"Date LogIn :"<<','<<" Time :"<<','<<endl;
	Fout<<IdAttempt<<','<<"LOGOUT"<<','<<"   "<<','<<nowLocal.tm_mday<<"/"<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_year+1900<<','<<"   "<<','<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<'\n';
	cout<<"L";
	usleep(33000);
	cout<<"O";
	usleep(33000);
	cout<<"D";
	usleep(33000);
	cout<<"I";
	usleep(33000);
	cout<<"N";
	usleep(33000);
	cout<<"G"<<endl;
	cout<<"Good Evning :)"<<endl<<"Dont Forget to Login Tomorrow!!!"<<endl;
	
	
}





class csvRow{
	
	public :
		
		string const& operator[](size_t index)const {
		
		return m_data[index];
		
		}
		
		size_t size()const {
		return m_data.size();
		
		}
		
		void readNextRow(istream& str){
			
			string line;
			getline(str, line);
			std::stringstream lineStream(line);
			string cell;
			
			m_data.clear();
			while(getline(lineStream, cell, ',')){
				
				m_data.push_back(cell);
				
			}
			if(!lineStream && cell.empty()){
				
				m_data.push_back("");
			}
			
		}
	private :
		
		vector<string>m_data; 	
};




istream& operator>>(istream& str, csvRow& data) {
	data.readNextRow(str);
	return str;
}



string showHollyDay(){
		
		ifstream file("12345.csv");
		csvRow row ;
		
		
			
			
			while(file >> row ){
					
				if ((row[7]==hollydayWord&&row[0]==user)||(row[0]==user&&row[7]==hollydayWord)){
					cout<<"hollydayDate :"<<row[0]<<"-"<<row[1]<<"-"<<row[2]<<"-"<<row[3]<<"-"<<row[4]<<"-"<<row[5]<<row[6]<<row[7]<<endl;
				}	
	
					else {
							 
						cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
						sleep(1);
						system("CLS");
						showHollyDay();
					}	
			}
	
	return hollydayDate;
}




//Need to make reset password function here !!

class logIn{
	
	public :
		string userNameAttempt;
		string passWordAttempt;


		void login(){
			cout<<"Please Enter Your Username And Password.\nUsername:";
			cin>> userNameAttempt;
			if (userNameAttempt == userName)
			{
				cout<<"Password:\n";
  			 	char ch;
   				ch = _getch();
   			while(ch != 13){
				
      			if(ch=='\b')
      		  	{
      		  	
            	cout<<"\b \b";
            	passWordAttempt.erase( passWordAttempt.end() -1 );//taken from internet.
        		
				}
        			else{
						passWordAttempt.push_back(ch);
						cout << '*';
				
					}
      			
				ch = _getch();

   			}
				// dont know any other ways to do it 
				if(passWordAttempt == passWord )
				{
					cout<<"\nC";
					usleep(33000);
					cout<<"H";
					usleep(33000);
					cout<<"E";
					usleep(33000);
					cout<<"C";
					usleep(33000);
					cout<<"K";	
					usleep(33000);
					cout<<"I";
					usleep(33000);
					cout<<"N";
					usleep(33000);
					cout<<"G";
					usleep(33000);
					cout<<".";
					usleep(33000);
					cout<<".";	
					usleep(33000);
					cout<<"."<<endl;
					usleep(33000);
					cout<<"\t\t\t\t\t\t\t\t\t\t\t\tWelcome to ADMIN mood\n";
					cout<<"\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
					
				}
				else
				{
				cout<<"\nYour Password Is Inviled, Please Try Agian \n ";
				login();	
								}				
			}
			else 
			{
				cout<<"\nYour Username Is Inviled, Please Try Agian \n ";
				login();
			}
		}
	private :
		string userName= "Admin";
		string passWord= "Admin12345";	


};



class logInWorker{
	
	public :
		//IdAttempt= Id;
		
		void loginWorker(){
				usertest();
		//	for(int index =0;index<=Id [10];Id[]++){
		//		index++;
		//		if (IdAttempt ==Id){
			
				cout<<"Welcome to Worker system:\n";

				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<1> L O G I N   M O D E \n\t\t\t\t\t\t\t\t\t\t\t\t<2> L O G O U T   M O D E \n\t\t\t\t\t\t\t\t\t\t\t\t<3> H O L L Y   D A Y \n \n  Enter your choice:"<<endl;
				cin>>qiz;
			switch(qiz){
		
				case 1:
					logInInformation12345();
			
					break;
			
				case 2:
			
					logOutInformation12345();
			
					break;
				
				case 3:
					
					showHollyDay();
					
					break;		
			
				default :{
		
					cout<<"You Entered Wrrong Choice Please Try Agin :"<<endl;
		
					logInWorker();
				
					break;
				}
				
			}
	
		}	
																			
		//			else{
		//	
		//		cout<<"Your ID Number Is Inviled, Please Try Agian \n ";
		//		loginWorker();
		//		
		//		
		//		}
		//	}
		//}		
};






int  enterFace() {


		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME\n\t\t\t\t\t\t\t\t\t\t\t\t\t  To \n\t\t\t\t\t\t\t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb T I M E   S H E E T   S Y S T E M \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
    	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tMAIN MENU \n ";
    	cout<<"\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<1> A D M I N   M O D E \n\t\t\t\t\t\t\t\t\t\t\t\t<2> W O R K E R   M O D E \n\t\t\t\t\t\t\t\t\t\t\t\t<3> E X I T  \n \n  Enter your choice:\n";
    	cin>>c;

   	return c;
}



int IDtest(){
	
		cout<<"\nPlease Enter the User ID"<<endl;
		cin>>IdAttempt;
		return IdAttempt;
}



string lgINtest(){
	
	
		cout<<"Enter The Regestration Type (LOGIN/LOGOUT) :"<<endl;
		cin>>lgIN;
		return lgIN;
	
}






string datetest(){
			
		cout<<"Enter The Date :"<<endl;
		cin>>date;
		return date;	
		
}








int enterFaceManager(){


			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<1> S E A R C H   D A T E\n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<2> S E A R C H   L O G I N \n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<3>    H O L L A D A Y\n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<4> T O T A L    H O U R S\n \n  Enter your choice:"<<endl;
									  cin>>n;

		return n; 
}






int main() {
	logIn logInManager;
	logInWorker logInworker0;
	enterFace();
	
	if (c==1){
		logInManager.login();
		
				
		
		
			ifstream file("12345.csv");
			csvRow row ;
		
			enterFaceManager();			
								 							  

			if (n==1){
				
				
				datetest();
				//cout<<"ID Number-Regestration-Date LogIn-Date LogOut-Time Login-Time LogOut"<<endl;
			
				while(file >> row ){
				
					if (row[2]==date){
						cout<<"Regestration :"<<row[1]<<"-"<<row[0]<<"-"<<row[2]<<"-"<<row[3]<<"-"<<row[4]<<"-"<<row[5]<<"-"<<row[6]<<endl;
				
				
					}

				}					
					
			}
			



			if (n==2){
				
				
				lgINtest();
				//cout<<"ID Number-Regestration-Date LogIn-Date LogOut-Time Login-Time LogOut"<<endl;
			
				while(file >> row ){
				
					if (row[1]==lgIN){
						cout<<"Regestration :"<<row[1]<<"-"<<row[0]<<"-"<<row[2]<<"-"<<row[3]<<"-"<<row[4]<<"-"<<row[5]<<"-"<<row[6]<<endl;
				
						//system ("PAUSE");
					}
						
						else {
							 
							 cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
							 sleep(1);
							 system("CLS");
							 main();
						}

				}					
					
			}
			
			
			
			
			
			
			if (n==3){			
				
				
					cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<1> A D D         H O L L A D A Y\n\t\t\t\t\t\t\t\t\t\t\t\t"
						  						  "<2> S E A R C H   H O L L A D A Y\n\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
									  cin>>n;
				
					
				if (n==1){
				
					IDtest();
					cout<<"What date You what to make the hollday!!"<<endl;
					cin>>hollydayDate;
					ofstream Fout;
					Fout.open("12345.csv", ios::app);
					//Fout<<"ID Number"<<','<<"Date LogIn :"<<','<<" Time :"<<','<<endl;
					Fout<<IdAttempt<<','<<"-----"<<','<<"-----"<<','<<"-----"<<','<<"-----"<<','<<"-----"<<','<<hollydayDate<<','<<"Hollyday"<<'\n';
				}
				
				if(n==2){
								
					//cin>>hollydayWord;
					cout<<"\nC";
					usleep(33000);
					cout<<"H";
					usleep(33000);
					cout<<"E";
					usleep(33000);
					cout<<"C";
					usleep(33000);
					cout<<"K";	
					usleep(33000);
					cout<<"I";
					usleep(33000);
					cout<<"N";
					usleep(33000);
					cout<<"G";
					usleep(33000);
					cout<<".";
					usleep(33000);
					cout<<".";	
					usleep(33000);
					cout<<"."<<endl;
					usleep(33000);
					ifstream file("12345.csv");
					csvRow row ;
					while(file >> row ){
					
						if (row[7]==hollydayWord){
							cout<<"hollydayDate :"<<row[0]<<"-"<<row[1]<<"-"<<row[2]<<"-"<<row[3]<<"-"<<row[4]<<"-"<<row[5]<<"-"<<row[6]<<"-"<<row[7]<<endl;
						}	
					
							else {
							 
							 cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
							 sleep(1);
							 system("CLS");
							 main();
							}

					}
					
				}									//if(row[7]!=hollydayDate) {
													//		cout <<"Sorry There Are No Hollydays"<<endl;
													//		enterFaceManager();
	
				else {
							 
							 cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
							 sleep(1);
							 system("CLS");
							 main();
				}
				
						
			}									





			if(n==4){
			
				IDtest();
				
				if(IdAttempt==Id[0]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID12345.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}
							//else {
							 
							// cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
							 //sleep(1);
							 //system("CLS");
							 //main();
						//}


					
					}
					//Fout.open("UserID12345.csv", ios::app);
					//Fout<<"ToTal Hours :"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';


				}
				
				if(IdAttempt==Id[1]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID54321.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				if(IdAttempt==Id[2]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID11111.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				if(IdAttempt==Id[3]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID22222.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				if(IdAttempt==Id[4]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID33333.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				
				if(IdAttempt==Id[5]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID44444.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				if(IdAttempt==Id[6]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID55555.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				
				if(IdAttempt==Id[7]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID66666.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}
				
				if(IdAttempt==Id[8]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID77777.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}		
				
				if(IdAttempt==Id[9]){
					usertest();
					while(file >> row ){
				
						if (row[0]==user){
							ofstream Fout;
							Fout.open("UserID88888.csv", ios::app);
							Fout<<"INFORMATION:"<<','<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<row[4]<<','<<row[5]<<','<<row[6]<<'\n';
				
				
						}

					}
					
				}																																
									
			
			}
			
			else {
							 
				 cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
				 sleep(1);
				 system("CLS");
				 main();
			}			
			
				
	
	}	
		
			
	else if (c==2){

		logInworker0.loginWorker();		

	}
	
	else if (c==3){
		exit(0);
	}	
	
	
						else {
							 
							 cout<<"Sorry You Entered Wrong Defenition!!"<<endl;
							 sleep(1);
							 system("CLS");
							 main();
						}	

					
		
									}
