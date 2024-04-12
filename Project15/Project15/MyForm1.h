#pragma once

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòğîèòüÃğàôèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÄàííûõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ToolStripMenuItem^ îÍàñToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox3;








	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòğîèòüÃğàôèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÍàñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(15, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"e";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 23);
			this->textBox1->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->âûõîäToolStripMenuItem, this->îÏğîãğàììåToolStripMenuItem, this->îÍàñToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(768, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïîñòğîèòüÃğàôèêèToolStripMenuItem,
					this->ıêñïîğòÄàííûõToolStripMenuItem, this->î÷èñòèòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ïîñòğîèòüÃğàôèêèToolStripMenuItem
			// 
			this->ïîñòğîèòüÃğàôèêèToolStripMenuItem->Name = L"ïîñòğîèòüÃğàôèêèToolStripMenuItem";
			this->ïîñòğîèòüÃğàôèêèToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->ïîñòğîèòüÃğàôèêèToolStripMenuItem->Text = L"Ïîñòğîèòü ãğàôèêè";
			this->ïîñòğîèòüÃğàôèêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîñòğîèòüÃğàôèêèToolStripMenuItem_Click);
			// 
			// ıêñïîğòÄàííûõToolStripMenuItem
			// 
			this->ıêñïîğòÄàííûõToolStripMenuItem->Name = L"ıêñïîğòÄàííûõToolStripMenuItem";
			this->ıêñïîğòÄàííûõToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->ıêñïîğòÄàííûõToolStripMenuItem->Text = L"İêñïîğò äàííûõ";
			this->ıêñïîğòÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ıêñïîğòÄàííûõToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			this->îÏğîãğàììåToolStripMenuItem->DoubleClick += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_DoubleClick);
			// 
			// îÍàñToolStripMenuItem
			// 
			this->îÍàñToolStripMenuItem->Name = L"îÍàñToolStripMenuItem";
			this->îÍàñToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->îÍàñToolStripMenuItem->Text = L"Î íàñ";
			this->îÍàñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÍàñToolStripMenuItem_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 23);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(15, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ln(1+";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(156, 201);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Âûáîğ ôóíêöèé äëÿ ğàçëîæåíèÿ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(4, 83);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(4, 57);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(127, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L")";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox2->Location = System::Drawing::Point(12, 234);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(156, 90);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Îòğåçîê [a, b]";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox6->Location = System::Drawing::Point(96, 125);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 29);
			this->textBox6->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(1, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Òî÷íîñòü";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(33, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 23);
			this->textBox3->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->Location = System::Drawing::Point(6, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 26);
			this->label4->TabIndex = 13;
			this->label4->Text = L"a";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(83, 167);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(57, 23);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(33, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 23);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->Location = System::Drawing::Point(6, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 26);
			this->label5->TabIndex = 14;
			this->label5->Text = L"b";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label6->Location = System::Drawing::Point(1, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 22);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Ñ øàãîì";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(12, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 55);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ïîñòğîèòü ãğàôèê";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(174, 27);
			this->chart1->Name = L"chart1";
			series13->BorderWidth = 3;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->LabelBorderWidth = 3;
			series13->Legend = L"Legend1";
			series13->Name = L"ln(1+a)";
			series14->BorderWidth = 3;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->LabelBorderWidth = 3;
			series14->Legend = L"Legend1";
			series14->Name = L"e^a";
			series15->BorderWidth = 3;
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->LabelBorderWidth = 3;
			series15->Legend = L"Legend1";
			series15->Name = L"ln(1+a) (Òåéëîğ)";
			series16->BorderWidth = 3;
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series16->LabelBorderWidth = 3;
			series16->Legend = L"Legend1";
			series16->Name = L"e^a (Òåéëîğ)";
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Series->Add(series16);
			this->chart1->Size = System::Drawing::Size(582, 453);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\\\Users\\\\sevam\\\\source\\\\repos\\\\Project15\\\\Project15\\\\Neko.jpg";
			this->pictureBox1->Location = System::Drawing::Point(351, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 225);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(373, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Ğàáîòíèê ìåñÿöà";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->Location = System::Drawing::Point(379, 355);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Âñåâîëîä Áóğàíÿ";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(2, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 17);
			this->label10->TabIndex = 19;
			this->label10->Text = L"ğàçëîæåíèÿ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox3->Location = System::Drawing::Point(12, 330);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(156, 89);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ãğàôèê îğèã-é ôóíêöèè";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point(21, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 20;
			this->label11->Text = L"îğèã-é ôóíêöèè";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(5, 39);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(148, 21);
			this->checkBox3->TabIndex = 21;
			this->checkBox3->Text = L"Ïîñòğîèòü ãğàôèê";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 491);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîñòğîèòüÃğàôèêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îÏğîãğàììåToolStripMenuItem_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = true;
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void îÍàñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ıêñïîğòÄàííûõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
