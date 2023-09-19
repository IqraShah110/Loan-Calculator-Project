#include <iostream>
using namespace std;
int main()
{
int years, loan_amount, total_amount,remaining_amount, paid_amount,new_total_amount, paid_installment;
	int max_amount=100000;
	double interest_amount,installment_per_year;
	double rate1=0.05; /*interest rate between 1 to 5 years*/
	double rate2=0.06; /*interest rate between 5 to 10 years*/
	double rate3=0.03; /*discount rate if user pay before 5years*/
	double rate4=0.04; /*discount rate if user pay before 10 years */
	char get_offer;

	cout<<"Hey ! iam loan calculator\n";
	cout<<"You can take loan here \n Maximum amount is 1 lac\n";
	cout<<"I will calculate and tell you total amount with interest rate ";
	cout<<" \n Installment per Year \n And New amount if you get any offer \n";
	cout<<"LET'S CONTINUE\n\n\n";
	cout<<"*************************************************\n\n\n";
	cout<<"Enter the Amount for loan =";
	cin>>loan_amount;
	if(loan_amount>100000)
	{
		cout<<" SOORY ! YOU CAN TAKE LOAN upto 1LACK\n";
		cout<<" please Again Enter the Amount for loan";
	cin>>loan_amount;
	}
	    cout<<"Enter duration of time within 10 years :";
	    cin>>years;
	    
	if(years==1 || years<=5)
	{
		interest_amount=loan_amount*rate1;
		total_amount=loan_amount+interest_amount;
		cout<<"Total amount =  "<<total_amount<<" rupees"<<endl;
		installment_per_year = total_amount / years;
		cout<<"you have to pay"<<" "<<installment_per_year <<" Rupees per year till "<< years <<" "<<"years";
	}
	else if (years==6 || years<=10)
	{
		interest_amount=loan_amount*rate2;
		
		total_amount=loan_amount+interest_amount;
		cout<<"Total amount =  "<<total_amount<<" rupees"<<endl;
		installment_per_year = total_amount / years;
      
        cout<<"Yoou will pay "<< installment_per_year<<" Rupees per year till "<<years<<" years";   
	}
	else 
	{
		cout<<"SOORY ! PLEASE ENTER THE YEARS UPTO 10 YEARS";
	}
	cout<<"\n\n\n******* WE HAVE  AMAZING OFFER FOR YOU  ******\n";
	cout<<" If you return total loan amount before time duration we will give you 2% off on interest rate\n";
    cout<<"PRESS Y IF YOU WANT THIS OFFER, OTHERWISE PRESS ANY KEY\n";	
	cin>>get_offer;
	 if (years==1 || years<=5 && get_offer=='y'  )
	{
       cout<<"how many installments you have paid in"<<" "<<years<<"  "<<"years?\n";
        cin>>paid_installment;
			paid_amount=paid_installment*installment_per_year;
			remaining_amount=total_amount-paid_amount;
			interest_amount=remaining_amount*rate3;
			new_total_amount=interest_amount+remaining_amount;
		cout<<"You have get 2% off on interest rate\n Remaining Amount you have to pay is : "<<new_total_amount<<"Rupees only";	
		
}	
	else if (years==6 || years<=10 && get_offer=='y'  )
	{
			cout<<"how many installments you have paid in"<<" "<<years<<"years?\n";
            cin>>paid_installment;
			paid_amount=paid_installment*installment_per_year;
			remaining_amount=total_amount-paid_amount;
			interest_amount=remaining_amount*rate4;
			new_total_amount=interest_amount+remaining_amount;
			cout<<"You have get 2% off on interest rate\n Remaining Amount you have to pay is : "<<new_total_amount<<"Rupees only";	
    }
	else if ( get_offer!='y')
	{
		cout<<"\n total amount to pay is already told above ";
	}
return 0;
}

