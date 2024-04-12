#include "MyForm1.h"
#include <Windows.h>
#include <cmath>
#include <msclr\marshal_cppstd.h>
#include <fstream>

using namespace std;
using namespace Project15;
using namespace msclr::interop;

using namespace Project15;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}	

double parser(double x, string str)
{
	int size = sizeof(str);
	double a = 1, b;
	long double rez = 0;
	int i = 0, z = 1, flag = 0;

	char* sim = new char[size + 2];

	while (str[i] != '\0')
	{
		sim[i] = str[i];
		i++;
	}
	i = 0;

	while (str[i] != '\0')
	{

		switch (sim[i])
		{
		case '1': a = 1; flag = 1; break;
		case '2': a = 2; flag = 1; break;
		case '3': a = 3; flag = 1; break;
		case '4': a = 4; flag = 1; break;
		case '5': a = 5; flag = 1; break;
		case '6': a = 6; flag = 1; break;
		case '7': a = 7; flag = 1; break;
		case '8': a = 8; flag = 1; break;
		case '9': a = 9; flag = 1; break;


		case '*':
			if ((i + 2 <= size) && (sim[i + 2] != '^'))
			{
				rez += a * x * z;
				a = 1;
				i++;
			}
			else
			{
				switch (sim[i + 3])
				{
				case '2': b = 2; break;
				case '3': b = 3; break;
				case '4': b = 4; break;
				case '5': b = 5; break;
				case '6': b = 6; break;
				case '7': b = 7; break;
				case '8': b = 8; break;
				case '9': b = 9; break;
				}
				i += 3;
				rez += a * pow(x, b) * z;
				a = 1;
				b = 1;
			} flag = 0;
			break;



		case 'x': if (sim[i + 1] != '^')
			rez += a * x * z;
				else
		{
			switch (sim[i + 2])
			{
			case '2': b = 2; break;
			case '3': b = 3; break;
			case '4': b = 4; break;
			case '5': b = 5; break;
			case '6': b = 6; break;
			case '7': b = 7; break;
			case '8': b = 8; break;
			case '9': b = 9; break;
			}
			i += 2;
			rez += a * pow(x, b) * z;
			a = 1;
			b = 1;
		} flag = 0; break;





		case '+':
			z = 1; flag = 0;
			break;

		case '-': a = 2;
			z = -1; flag = 0;
			break;
		}

		i++;
	}

	if ((sim[i - 2] == '+') || (sim[i - 2] == '-') && (flag))
		rez += a * z;

	return(rez);
}

Void MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}

Void MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("��������� ��������� ���������� ������� ������� ���� exp(x) � ln(1+x) �� ���������� [a: b] � ��������� ��������� � �����. // // ��������� �����: ������ ����� ���������� ��������� ������ ��������� ������� a*x^p+b*x^q+...+c*x^h, ��� ����� �� ������������� ����� ���� ����� ���� ������. ��������� �� ��������� ������ � ��������� ������������", "� ���������");
}

Void MyForm::����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "N" && textBox2->Text == "e" && textBox6->Text == "k" && textBox3->Text == "o" && textBox4->Text == "A" && textBox5->Text == "rc") {
		pictureBox1->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		chart1->Visible = false;
	}
	else {
		MessageBox::Show("��������� ����������� ��������� 1 ����� 7 ������ ����������� ���������� ����������� ���������� �����������.", "O ���");
	}
}

Void MyForm::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    for (int i = 0; i < 4; i++) {
        chart1->Series[i]->Points->Clear();
    }
    pictureBox1->Visible = false;
    label7->Visible = false;
    label8->Visible = false; 
	chart1->Visible = true;
}

Void  MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
        
        pictureBox1->Visible = false;
        label7->Visible = false;
        label8->Visible = false;
		chart1->Visible = true;

        for (int i = 0; i < 4; i++){
               chart1->Series[i]->Points->Clear();
           }

        if ((textBox1->Text == "" && textBox2->Text == "") || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
            MessageBox::Show("������� ��� ���������", "��������");
            return;
        }

		string strArg1 = marshal_as<string>(textBox1->Text);
		string strArg2 = marshal_as<string>(textBox2->Text);

        double a, b, h, E;
        a = Convert::ToDouble(textBox3->Text);
        b = Convert::ToDouble(textBox4->Text);
        h = Convert::ToDouble(textBox5->Text);
        E = Convert::ToDouble(textBox6->Text);

        if (a>b) {
            MessageBox::Show("������� ������� ������ � ����� �������", "��������");
            return;
        }

        bool bExp, bLn;
        checkBox1->Checked ? bExp = true : bExp = false;
        checkBox2->Checked ? bLn = true : bLn = false;

        if (!bExp && !bLn) {
            MessageBox::Show("�������� ���� �� ���� ������ ��� ����������!", "��������");
        }
		else {
			double s;
			long double sum, t;
			int i;
			if (bExp) {
					for (double x = a; x <= b; x += h) {
						t = parser(x, strArg1);
						i = 0;
						s = 1;
						sum = 0;
						while (fabs(s) > E)
						{
							sum += s;
							i++;
							s *= t / i;
						}
						chart1->Series[3]->Points->AddXY(x, sum);
					}
					if (checkBox3->Checked) {
						for (double x = a; x <= b; x += h) {
							chart1->Series[1]->Points->AddXY(x, exp(parser(x, strArg1)));
						}
					}
				}
			if (bLn) {
				for (double x = a; x <= b; x += h) {
					t = parser(x, strArg2);
					sum = 0;
					i = 1;
					s = t;
					while (fabs(i/s) > E)
					{
						sum += s/i;
						i++;
						s *= -t * (i - 1);
						MessageBox::Show(Convert::ToString(s/i), "s");
					}
					chart1->Series[2]->Points->AddXY(x, sum);
					MessageBox::Show(Convert::ToString(x), "x");
				}
				if (checkBox3->Checked) {
					for (double x = a; x <= b; x += h) {
						if (parser(x, strArg2) != -1) {
							chart1->Series[0]->Points->AddXY(x, log(parser(x, strArg2)+1));
						}
					}
				}
			}
        }
}        

Void MyForm::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	pictureBox1->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	chart1->Visible = true;

	for (int i = 0; i < 4; i++) {
		chart1->Series[i]->Points->Clear();
	}

	if ((textBox1->Text == "" && textBox2->Text == "") || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
		MessageBox::Show("������� ��� ���������", "��������");
		return;
	}

	string strArg1 = marshal_as<string>(textBox1->Text);
	string strArg2 = marshal_as<string>(textBox2->Text);

	double a, b, h, E;
	a = Convert::ToDouble(textBox3->Text);
	b = Convert::ToDouble(textBox4->Text);
	h = Convert::ToDouble(textBox5->Text);
	E = Convert::ToDouble(textBox6->Text);

	if (a > b) {
		MessageBox::Show("������� ������� ������ � ����� �������", "��������");
		return;
	}

	bool bExp, bLn;
	checkBox1->Checked ? bExp = true : bExp = false;
	checkBox2->Checked ? bLn = true : bLn = false;

	if (!bExp && !bLn) {
		MessageBox::Show("�������� ���� �� ���� ������ ��� ����������!", "��������");
	}
	else {
		double s;
		long double sum, t;
		int i;
		if (bExp) {
			for (double x = a; x <= b; x += h) {
				t = parser(x, strArg1);
				i = 0;
				s = 1;
				sum = 0;
				while (fabs(s) > E)
				{
					sum += s;
					i++;
					s *= t / i;
				}
				chart1->Series[3]->Points->AddXY(x, sum);
			}
			if (checkBox3->Checked) {
				for (double x = a; x <= b; x += h) {
					chart1->Series[1]->Points->AddXY(x, exp(parser(x, strArg1)));
				}
			}
		}
		if (bLn) {
			for (double x = a; x <= b; x += h) {
				t = parser(x, strArg2);
				i = 1;
				s = t;
				sum = 0;
				while (fabs(s) > E)
				{
					sum += s;
					i++;
					s *= -t;
					s = s / i;
				}
				chart1->Series[2]->Points->AddXY(x, sum);
			}
			if (checkBox3->Checked) {
				for (double x = a; x <= b; x += h) {
					if (parser(x, strArg2) != -1) {
						chart1->Series[0]->Points->AddXY(x, log(1 + parser(x, strArg2)));
					}
				}
			}
		}
	}
}

Void MyForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	pictureBox1->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	chart1->Visible = true;

	for (int i = 0; i < 4; i++) {
		chart1->Series[i]->Points->Clear();
	}

	if ((textBox1->Text == "" && textBox2->Text == "") || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
		MessageBox::Show("������� ��� ���������", "��������");
		return;
	}

	string strArg1 = marshal_as<string>(textBox1->Text);
	string strArg2 = marshal_as<string>(textBox2->Text);

	double a, b, h, E;
	a = Convert::ToDouble(textBox3->Text);
	b = Convert::ToDouble(textBox4->Text);
	h = Convert::ToDouble(textBox5->Text);
	E = Convert::ToDouble(textBox6->Text);

	if (a > b) {
		MessageBox::Show("������� ������� ������ � ����� �������", "��������");
		return;
	}

	bool bExp, bLn;
	checkBox1->Checked ? bExp = true : bExp = false;
	checkBox2->Checked ? bLn = true : bLn = false;

	if (!bExp && !bLn) {
		MessageBox::Show("�������� ���� �� ���� ������ ��� ����������!", "��������");
	}
	else {
		ofstream output_file("output.txt");
		output_file << "�������� ������:" << endl << "Arg1=" << strArg1 << ", " << "Arg2=" << strArg2 << ";" << endl << "[" << a << ";" << b << "]" << ";" << endl << "h=" << h << ", " << "E" << E << ";" << endl;

		double s;
		long double sum, t;
		int i;
		if (bExp) {
			output_file << "����� ������� exp(x) (���������� �������)" << endl;
			for (double x = a; x <= b; x += h) {
				t = parser(x, strArg1);
				i = 0;
				s = 1;
				sum = 0;
				while (fabs(s) > E)
				{
					sum += s;
					i++;
					s *= t / i;
				}
				chart1->Series[3]->Points->AddXY(x, sum);
				output_file<<"(" << x << ";" << sum <<")";
			}
			if (checkBox3->Checked) {
				output_file<< endl << "����� ������� exp(x)" << endl;
				for (double x = a; x <= b; x += h) {
					chart1->Series[1]->Points->AddXY(x, exp(parser(x, strArg1)));
					output_file << "(" << x << ";" << exp(parser(x, strArg1)) <<")";
				}
			}
		}
		if (bLn) {
			output_file<< endl << "����� ������� ln(1+x) (���������� �������)" << endl;
			for (double x = a; x <= b; x += h) {
				t = parser(x, strArg2);
				i = 1;
				s = t;
				sum = 0;
				while (fabs(s) > E)
				{
					sum += s;
					i++;
					s *= -t;
					s = s / i;
				}
				chart1->Series[2]->Points->AddXY(x, sum);
				output_file << "(" << x << ";" << sum << ")";
			}
			if (checkBox3->Checked) {
				output_file << endl << "����� ������� ln(1+x)" << endl;
				for (double x = a; x <= b; x += h) {
					if (parser(x, strArg2) != -1) {
						chart1->Series[0]->Points->AddXY(x, log(1 + parser(x, strArg2)));
						output_file << "(" << x << ";" << exp(parser(x, strArg2)) << ")";
					}
				}
			}
		}
	}
}