#include<iostream>
#include<string>
using namespace std;



namespace nutil {
	class Complex {
	private:
		int real;
		int imag;
	public:
		Complex(void): real( 0 ), imag( 0 ){
		}

		Complex(int real, int imag): real( real ), imag( imag ){
		}

		int getReal(void) const{
			return this->real;
		}

		void setReal(const int real){
			this->real = real;
		}

		int getImag(void) const{
			return this->imag;
		}

		void setImag(const int imag){
			this->imag = imag;
		}

		friend istream& operator>>(istream &shubham, Complex &other);

		friend ostream& operator<<(ostream &out, const Complex &other);

	};
}
istream& nutil::operator>>( istream &shubham, Complex &other ){
	cout << "Enter real number	:	";
	shubham >> other.real;
	cout << "Enter imag number	:	";
	shubham >> other.imag;
	return shubham;
}
ostream& nutil::operator<<( ostream &out, const Complex &other ){
	out << "Real Number	:	"<< other.real <<endl;
	out << "Imag Number	:	"<< other.imag <<endl;
	return out;
}

using namespace nutil;
int main( void ){
	Complex c1;
	cin >> c1;	//operator>>( cin, c1 )

	c1.setReal( c1.getReal() + 5 );
	c1.setImag( c1.getImag() + 5 );

	cout << c1;	//operator<<( cout, c1 );
	return 0;
}
