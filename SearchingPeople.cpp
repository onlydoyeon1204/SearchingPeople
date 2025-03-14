#include <iostream>
using namespace std;

/*����ü�� �̿��ؼ� ����� ���� �Է�*/
struct Member
{
	string group;
	string agency;
	string debut;
	string mbti;
	string birthday;
};

/*�ʿ��� ���� ����*/
int number, average, member;
int age;
int sum = 0;
string name;
string isTrue = "TRUE";
string ans;

/*MAIN�Լ����� ����� �ٸ� �Լ� ����*/
int getAverageage(int member);
void output_information();
void print_member(Member member);
int checkAverageage(string ans);

int main()
{ 
	cout << "*****************************************************************" << endl;
	cout << "                      �̸��� �Է��ϼ���                          " << endl;
	cout << "*****************************************************************" << endl;
	cout << " " << endl;
	cout << "�̸�: ";
	cin >> name;

	output_information();

	if (isTrue == "FALSE")//����ڿ� ��ϵ��� ���� ����� �Է½� �ٷ� ����
	{
		return 0;
	}

	/*�׷��� ���� ����� ���ϰ� ������ ����� ����*/
	cout << " " << endl;
	cout << "*****************************************************************" << endl;
	cout << "    �ش� �׷��� ���� ����� ���ϰ� �����Ű���? (�� / �ƴϿ�)     " << endl;
	cout << "*****************************************************************" << endl; \
		cout << " " << endl;
	cout << "���: ";
	cin >> ans;

	return checkAverageage(ans);
	
	return 0;
}

/*����� ���� �Է��Ͽ� ����� ������ ����� ���ϴ� �Լ�*/
int getAverageage(int member)
{
	for (number = 0; number != member; number++)//��� ���� �°� for�� ������
	{
		cout << "[" << number + 1 << "��° ����� ���̸� �Է��Ͻÿ�] : ";
		cin >> age;
		sum += age;
	}
	average = sum / member; //�� ���� ������� ������
	
	cout << " " << endl;
	cout << "*****************************************************************" << endl;
	cout << "                               ���                              " << endl;
	cout << "*****************************************************************" << endl;
	cout << " " << endl;
	cout << "* �ش� �׷��� ��� ���̴� " << "'" << average << "'" << " �Դϴ�." << endl;
	return 0; //���� average���� ��ȯ�Ѵ�.

}

/*����ڰ� ���ϴ� �׷��� ������� �Է�*/
int checkAverageage(string ans) 
{
	if (ans == "��")
	{
		cout << " " << endl;
		cout << "*****************************************************************" << endl;
		cout << "                       ������� �Է��ϼ���.                      " << endl;
		cout << "*****************************************************************" << endl;
		cout << " " << endl;
		cout << "�����: " ;
		cin >> member;
		cout << " " << endl;
		
		getAverageage(member);
		
		cout << " " << endl;
		cout << "*****************************************************************" << endl;
		cout << " " << endl;
		cout << "* �̿��� �ּż� �����մϴ�. *";
		cout << " " << endl;
	}
	else  
	{
		cout << " " << endl;
		cout << "* �̿��� �ּż� �����մϴ�. *";
		cout << " " << endl;
		return 0;
	}
}


/*����ü�� �ִ� �������� ����ϴ� �Լ�*/
void print_member(Member member)
{	
	cout << "\n";
	cout << "[�������] : " << member.birthday << endl;
	cout << "[�׷�] : " << member.group << endl;
	cout << "[�Ҽӻ�] : " << member.agency << endl;
	cout << "[���߳�¥] : " << member.debut << endl;
	cout << "[MBTI] : " << member.mbti << endl;
}

/*������� ���� �Լ�*/
void output_information()
{
	Member doyeon = { "���̿�����,��Ű��Ű","��Ÿ����","5�� 4��", "ESTJ" ,"1999�� 12�� 4��" }; // ����� ���� �Է°�
	Member sejeong = { "���̿�����","�����ǽ�","5�� 4��","INTP","1996�� 8�� 28��" };
	Member yoojung = { "���̿�����,��Ű��Ű","��Ÿ����","5�� 4��","INFP","1999�� 11�� 12��" };
	Member chungha = { "���̿�����","M&H","5�� 4��","????","1996�� 2�� 9��" };
	Member nayoung = { "���̿�����","SUBLIME","5�� 4��","ESFJ","1995�� 12�� 18��" };
	Member chaeyeon = { "���̿�����","POCKETDOL STUDIO","5�� 4��","ISFJ","1997�� 12�� 1��" };
	Member kyulkyung = { "���̿�����","�������� ��Ʃ���","5�� 4��","????","1998�� 12�� 16��" };
	Member sohye = { "���̿�����","S&P","5�� 4��","ENFP","1999�� 7�� 19��" };
	Member yeonjung = { "���̿�����,���ּҳ�","��Ÿ��","5�� 4��","ISTP","1999�� 8�� 3��" };
	Member mina = { "���̿�����","�����ǽ�","5�� 4��","INFP","1999�� 12�� 4��" };
	Member somi = { "���̿�����","THE BLACK LABEL","5�� 4��","ENFP","2001�� 3�� 9��" };
	Member suyeon = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","ISFJ","1997�� 4�� 20��" };
	Member elly = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","ESFP","1998�� 7�� 20��" };
	Member sei = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","INFJ","2000�� 1�� 7��" };
	Member lua = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","????","2000�� 10�� 6��" };
	Member rina = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","????","2001�� 9�� 27��" };
	Member lucy = { "��Ű��Ű","��Ÿ����","2017�� 8�� 8��","????","2002�� 8�� 31��" };

	/*�Է°��� ���� ���� ���*/
	if (name == "�赵��")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(doyeon);
	}
	else if (name == "�輼��")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sejeong);
	}
	else if (name == "������")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(yoojung);
	}
	else if (name == "��û��")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(chungha);
	}
	else if (name == "�ӳ���")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(nayoung);
	}
	else if (name == "��ä��")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(chaeyeon);
	}
	else if (name == "�ְ��")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(kyulkyung);
	}
	else if (name == "�����")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sohye);
	}
	else if (name == "������")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(yeonjung);
	}
	else if (name == "���̳�")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(mina);
	}
	else if (name == "���ҹ�")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(somi);
	}
	else if (name == "������")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(suyeon);
	}
	else if (name == "����")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(elly);
	}
	else if (name == "����")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(sei);
	}
	else if (name == "���")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(lua);
	}
	else if (name == "����")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(rina);
	}
	else if (name == "���")
	{
		cout << "\n";
		cout << "[" << name << "]" << endl;
		print_member(lucy);
	}
	else
	{
		cout << "\n";
		cout << "*****************************************************************" << endl;
		cout << "        �߸� �Է��ϼ̽��ϴ�. ��ϵ� ����ڸ� �Է����ּ���.       " << endl;
		cout << "*****************************************************************" << endl;
		isTrue = "FALSE";
	}
}