#include <iostream>
#include <string>
using namespace std;

class  clsPerson {
private:
	int _id;
	string _nom;
	string _prenom;
	string _phone;
	string _email;
    public:
	clsPerson(int id, string nom, string prenom, string phone, string email) {
		_id = id;
		_nom = nom;
		_prenom = prenom;
		_phone = phone;
		_email = email;
	}
	string fullname() {
		return _nom + " " + _prenom;
	}
	void print() {
		cout << "_______________info______________" << endl;
		cout << "ID: " << _id << endl;
		cout << "Nom: " << _nom << endl;
		cout << "Prenom: " << _prenom << endl;
		cout << "fullname: " << fullname() << endl;
		cout << "Phone: " << _phone << endl;
		cout << "Email: " << _email << endl;
		cout << "________________________________" << endl;
	}
	void Sendemail(string subject, string body) {
		cout << "the following message sent successfully to email : " << _email << endl;
		cout << "subject :" << subject << endl;
		cout << "body : " << body << endl;
		cout << endl;
	}
    void Sendsms(string sms) {
		cout << "the following message sent successfully :" << _phone << endl;
		cout << sms << endl;
		cout << endl;
	}
	

};

int main() {
    clsPerson p1(1, "Thuram", "Marcos", "+123456789", "Thuram@mail.com");
	clsPerson p2(1, "Najwa", "Karam", "+236858090", "karam@mail.com");

	p1.print();
	p2.print();
	p1.Sendemail("hi", "how are you?");
	p1.Sendsms("how are you?");
    p2.Sendsms("call me")

	system("pause");



}