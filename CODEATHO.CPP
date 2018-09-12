#include<iostream.h>
#include<conio.h>
#include<string.h>

void display(int);
		char l, user[20][50],address[50][50],email[20][20],bgroup[20][20],gender[10],choice;
	int age[50],num[50],i,k,ch,temp;
int main()
{

	cout<<"Are you willing to donate the blood";
	cout<<"Enter choice\ny for yes\nn for no";
	cin>>choice;
	while(choice=='y')
	{
		cout<<"Enter your Name";
		cin>>user[i];
		cout<<"Enter Age";
		cin>>age[i];
		cout<<"Enter Address";
		cin>>address[i];
		cout<<"Enter your email id";
		cin>>email[i];
		cout<<"Enter your mobile number";
		cin>>num[i];
		cout<<"Enter your blood group";
		cin>>bgroup[i];
		cout<<"Enter gender\tmale or female";
		cin>>gender[i];
		i++;
		cout<<"Enter data for another user? (y/n)";
		cin>>choice;

	}
	cout<<"To list all the users press 'l' ";
	cin>>l;
	if(choice=='l')
	{
	  cout<<"Name\tAge\tAdress\tEmail Id\tMobile\tblood group\tGender";
	  for(k=0;k<=i;k++)
	  {
	    cout<<user[k]<<"\t"<<age[k]<<address[k]<<"\t"<<email[k]<<"\t"<<num[k]<<"\t"<<bgroup[k]<<"\t"<<gender[k];
	  }
	}
	cout<<"Enter Filter Conditions";
	cout<<"1.Mobile Number\n2.Email ID";
	cin>>ch;
	switch(ch){
	case 1:
		 cout<<"Enter the mobile number";
		 cin>>temp;
		 for(int j=0;j<i;j++)
		 {
		  if(temp==num[j])
		   display(j);
		 }
		  break;
	case 2:
		  char mail[50];
		  cout<<"Enter the email id";
		  cin>>mail;
		  for( j=0;j<i;j++)
		  {
		   if(strcmp(mail,email[j])==0)
		   display(j);
		  }
	}
	return 0;
}

void display(int j)
{
   cout<<user[j]<<"\t"<<age[j]<<address[j]<<"\t"<<email[j]<<"\t"<<num[j]<<"\t"<<bgroup[j]<<"\t"<<gender[j];
}