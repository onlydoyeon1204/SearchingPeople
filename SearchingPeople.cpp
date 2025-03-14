#include <iostream>
using namespace std;

/*Section of Information By Using Structure*/
struct Member
{
	string group;
	string agency;
	string debut;
	string mbti;
	string birthday;
};

/*Variation Declaration*/
int number, average, member;
int age;
int sum = 0;
string name;
string isTrue = "TRUE";
string ans;

/*Function Declaration*/
int getAverageage(int member);
void output_information();
void print_member(Member member);
int checkAverageage(string ans);

int main()
{ 
	cout << "*****************************************************************" << endl;
	cout << "                        Enter the name                           " << endl;
	cout << "*****************************************************************" << endl;
	cout << " " << endl;
	cout << "NAME: ";
	cin >> name;

	output_information();

	if (isTrue == "FALSE")//If the name didn't exist in database
	{
		return 0;
	}

	/*Check wheter they will find average or not*/
	cout << " " << endl;
	cout << "*****************************************************************" << endl;
	cout << "    Do you want to calcuate an average of their age? (Yes / No)     " << endl;
	cout << "*****************************************************************" << endl; \
		cout << " " << endl;
	cout << "AVERAGE: ";
	cin >> ans;

	return checkAverageage(ans);
	
	return 0;
}

/*Calculating Average Function*/
int getAverageage(int member)
{
	for (number = 0; number != member; number++)//Calculate all memebers' age
	{
		cout << "[Enter a" << number + 1 << "th member's age : ";
		cin >> age;
		sum += age;
	}
	average = sum / member; //Calcuate an average
	
	cout << " " << endl;
	cout << "*****************************************************************" << endl;
	cout << "                               Result                            " << endl;
	cout << "*****************************************************************" << endl;
	cout << " " << endl;
	cout << "* Their average age is " << "'" << average << "'" << endl;
	return 0; //Return the final average age

}

/*Enter the number what you want to know*/
int checkAverageage(string ans) 
{
	if (ans == "Yes")
	{
		cout << " " << endl;
		cout << "*****************************************************************" << endl;
		cout << "                       Enter a number of member                  " << endl;
		cout << "*****************************************************************" << endl;
		cout << " " << endl;
		cout << "NUMBER_OF_MEMBER: " ;
		cin >> member;
		cout << " " << endl;
		
		getAverageage(member);
		
		cout << " " << endl;
		cout << "*****************************************************************" << endl;
		cout << " " << endl;
		cout << "* THANK YOU *";
		cout << " " << endl;
	}
	else  
	{
		cout << " " << endl;
		cout << "* THANK YOU *";
		cout << " " << endl;
		return 0;
	}
}


/*Print information in sturcture*/
void print_member(Member member)
{	
	cout << "\n";
	cout << "[BIRTHDAY] : " << member.birthday << endl;
	cout << "[GROUP] : " << member.group << endl;
	cout << "[AGENCY] : " << member.agency << endl;
	cout << "[DEBUTDATE] : " << member.debut << endl;
	cout << "[MBTI] : " << member.mbti << endl;
}

/*Information Function�*/
void output_information()
{
	Member doyeon = { "IOI,WEKIMEKI","FANTAGIO","4TH MAY", "ESTJ" ,"04121999" }; // User Information
	Member sejeong = { "IOI","JELLYFISH","4TH MAY","INTP","28081996" };
	Member yoojung = { "IOI,WEKIMEKI","FANTAGIO","4TH MAY","INFP","12111999" };
	Member chungha = { "IOI","M&H","4TH MAY","????","09021996" };
	Member nayoung = { "IOI","SUBLIME","4TH MAY","ESFJ","18121995" };
	Member chaeyeon = { "IOI","POCKETDOL STUDIO","4TH MAY","ISFJ","01121997" };
	Member kyulkyung = { "IOI","???????","4TH MAY","????","16121998" };
	Member sohye = { "IOI","S&P","4TH MAY","ENFP","19071999" };
	Member yeonjung = { "IOI,WJSN","STARSHIP","4TH MAY","ISTP","03081999" };
	Member mina = { "IOI","JELLYFISH","4TH MAY","INFP","04121999" };
	Member somi = { "IOI","THE BLACK LABEL","4TH MAY","ENFP","09032001" };
	Member suyeon = { "WEKIMEKI","FANTAGIO","8TH AUG","ISFJ","20041997" };
	Member elly = { "WEKIMEKI","FANTAGIO","8TH AUG","ESFP","120071998" };
	Member sei = { "WEKIMEKI","FANTAGIO","8TH AUG","INFJ","07012000" };
	Member lua = { "WEKIMEKI","FANTAGIO","8TH AUG","????","06102000" };
	Member rina = { "WEKIMEKI","FANTAGIO","8TH AUG","????","27092001" };
	Member lucy = { "WEKIMEKI","FANTAGIO","28TH AUG","????","31082002" };

	/*Print according to insert value*/
	if (name == "Kimdoyeon" or name == "KIMDOYEON" or name == "Doyeon" or name == "DOYEON")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(doyeon);
	}
	else if (name == "Kimsejeong" or name == "KIMSEJEONG" or name == "Sejeong" or name == "SEJEONG")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sejeong);
	}
	else if (name == "Choiyoojung" or name == "CHOIYOOJUNG" or name == "Yoojung" or name == "YOOJUNG")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(yoojung);
	}
	else if (name == "Kimchungha" or name == "KIMCHUNGHA" or name == "Chungha" or name == "CHUNGHA")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(chungha);
	}
	else if (name == "Limnayoung" or name == "LIMNAYOUNG" or name == "Nayoung" or name == "NAYOUNG")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(nayoung);
	}
	else if (name == "Jungchaeyeon" or name == "JUNGCHAEYEON" or name == "Chaeyeon" or name == "CHAEYEON")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(chaeyeon);
	}
	else if (name == "Zukyulkyung" or name == "ZUKYULKYUNG" or name == "Kyulkyung" or name == "KYULKYUNG")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(kyulkyung);
	}
	else if (name == "Kimsohye" or name == "KIMSOHYE" or name == "Sohye" or name == "SOHYE")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sohye);
	}
	else if (name == "Youyeonjung" or name == "YOUYEONJUNG" or name == "Yeonjung" or name == "YEONJUNG")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(yeonjung);
	}
	else if (name == "Kangmina" or name == "KANGMINA" or name == "Mina" or name == "MINA")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(mina);
	}
	else if (name == "Jeonsomi" or name == "JEONSOMI" or name == "Somi" or name == "SOMI")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(somi);
	}
	else if (name == "Jisuyeon" or name == "JISUYEON" or name == "Suyeon" or name == "SUYEON")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(suyeon);
	}
	else if (name == "Elly" or name == "ELLY" )
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(elly);
	}
	else if (name == "Sei" or name == "SEI")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sei);
	}
	else if (name == "Lua" or name == "LUA")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(lua);
	}
	else if (name == "Rina" or name == "RINA")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(rina);
	}
	else if (name == "Lucy" or name == "LUCY")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(lucy);
	}
	else
	{
		cout << "\n";
		cout << "*****************************************************************" << endl;
		cout << "     YOU ENTER WRONG. PLEASE ENTER THE USER WHO IS ALLOCATED     " << endl;
		cout << "*****************************************************************" << endl;
		isTrue = "FALSE";
	}

}
