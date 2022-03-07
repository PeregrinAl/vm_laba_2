#include <math.h>
#pragma once

namespace lab2VMath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Производные;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Погрешность;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Значение;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
















	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Производные = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Погрешность = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Значение = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"sin(x)", L"cos(x)", L"sin(x)^2", L"cos(x)^2",
					L"ln(x)", L"exp(x)", L"x^2", L"x^3", L"sqrt(x)", L"x - sin(x)^2 - cos(x)"
			});
			this->comboBox1->Location = System::Drawing::Point(5, 34);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 24);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"sin(x)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 38);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0,001";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Точка";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Шаг";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(191, 68);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Функция";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Производные,
					this->Погрешность, this->Значение
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 68);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(436, 86);
			this->dataGridView1->TabIndex = 16;
			// 
			// Производные
			// 
			this->Производные->Frozen = true;
			this->Производные->HeaderText = L"Производные";
			this->Производные->MinimumWidth = 6;
			this->Производные->Name = L"Производные";
			this->Производные->ReadOnly = true;
			this->Производные->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Производные->Width = 125;
			// 
			// Погрешность
			// 
			this->Погрешность->Frozen = true;
			this->Погрешность->HeaderText = L"Значение";
			this->Погрешность->MinimumWidth = 6;
			this->Погрешность->Name = L"Погрешность";
			this->Погрешность->ReadOnly = true;
			this->Погрешность->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Погрешность->Width = 125;
			// 
			// Значение
			// 
			this->Значение->Frozen = true;
			this->Значение->HeaderText = L"Погрешность";
			this->Значение->MinimumWidth = 6;
			this->Значение->Name = L"Значение";
			this->Значение->ReadOnly = true;
			this->Значение->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Значение->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 159);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(333, 331);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->ShowEditingIcon = false;
			this->dataGridView2->Size = System::Drawing::Size(436, 119);
			this->dataGridView2->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Методы";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->Frozen = true;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Результат";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->Frozen = true;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Погрешность";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(381, 302);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(515, 302);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 21;
			this->textBox4->Text = L"3,14";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(648, 302);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(416, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 17);
			this->label5->TabIndex = 23;
			this->label5->Text = L"X1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(549, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 17);
			this->label6->TabIndex = 24;
			this->label6->Text = L"X2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(653, 282);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Кол-во узлов";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(657, 455);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(333, 15);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(440, 198);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Дифференцирование";
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(333, 261);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(440, 238);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Интегрирование";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(783, 513);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->dataGridView1->Rows->Add("f'");
			this->dataGridView1->Rows->Add("f''");

			this->dataGridView2->Rows->Add("Ц. прям-ов");
			this->dataGridView2->Rows->Add("Трапеций");
			this->dataGridView2->Rows->Add("Симпсона");
		}
	
#pragma endregion
		
		double Sinder(double X, int V) {
			if (V == 1) {
				return cos(X);
			}
			else if (V == 2) {
				return -sin(X);
			}
		}

		double Cosder(double X, int V) {
			if (V == 1) {
				return -sin(X);
			}
			else if (V == 2) {
				return -cos(X);
			}
		}

		double Sin2der(double X, int V) {
			if (V == 1) {
				return 2 * sin(X) * cos(X);
			}
			else if (V == 2) {
				return -2 * pow(sin(X), 2) + 2 * pow(cos(X), 2);
			}
		}

		double Cos2der(double X, int V) {
			if (V == 1) {
				return -2 * sin(X) * cos(X);
			}
			else if (V == 2) {
				return 2 * pow(sin(X), 2) - 2 * pow(cos(X), 2);
			}
		}

		double Lnder(double X, int V) {
			if (V == 1) {
				return 1 / X;
			}
			else if (V == 2) {
				return -1 / (X * X);
			}
		}

		double Expder(double X, int V) {
			if (V == 1) {
				return exp(X);
			}
			else if (V == 2) {
				return exp(X);
			}
		}

		double X2der(double X, int V) {
			if (V == 1) {
				return 2 * X;
			}
			else if (V == 2) {
				return 2;
			}
		}

		double X3der(double X, int V) {
			if (V == 1) {
				return 3 * X * X;
			}
			else if (V == 2) {
				return 6 * X;
			}
		}

		double Sqrtder(double X, int V) {
			if (V == 1) {
				return 1 / (2 * sqrt(X));
			}
			else if (V == 2) {
				return -0.25 / pow(X, 3/2);
			}
		}
		//x - sin(x^2) - cos(x)
		double Complexder(double X, int V) {
			if (V == 0) {
				return X - pow(sin(X), 2) - cos(X);
			}
			else if (V == 1) {
				return -2 * sin(X) * cos(X) + sin(X) + 1;
			}
			else if (V == 2) {
				return 2 * pow(sin(X), 2) - 2 * pow(cos(X), 2) + cos(X);
			}
		}

		double Function(const double X, const int v) {
			if (comboBox1->Text == "sin(x)") {
				if (v == -1) {
					return -cos(X);
				}
				return sin(X);
			}
			else if (comboBox1->Text == "cos(x)") {
				if (v == -1) {
					return sin(X);
				}
				return cos(X);
			}
			else if (comboBox1->Text == "sin(x)^2") {
				if (v == -1) {
					return X/2 - sin(2 * X) / 4;
				}
				return pow(sin(X), 2);
			}
			else if (comboBox1->Text == "cos(x)^2") {
				if (v == -1) {
					return X / 2 + sin(2 * X) / 4;
				}
				return pow(cos(X), 2);
			}
			else if (comboBox1->Text == "ln(x)") {
				if (v == -1) {
					return X * log(X) - X;
				}
				return log(X);
			}
			else if (comboBox1->Text == "exp(x)") {
				if (v == -1) {
					return exp(X);
				}
				return exp(X);
			}
			else if (comboBox1->Text == "x^2") {
				if (v == -1) {
					return (X * X * X) / 3;
				}
				return X * X;
			}
			else if (comboBox1->Text == "x^3") {
				if (v == -1) {
					return pow(X, 4) / 4;
				}
				return X * X * X;
			}
			else if (comboBox1->Text == "sqrt(x)") {
				if (v == -1) {
					return (2 * sqrt(X * X * X)) / 3;
				}
				return sqrt(X);
			}
			else if (comboBox1->Text == "x - sin(x)^2 - cos(x)") {
				if (v == -1) {
					return pow(X, 2) / 2 - X / 2 - sin(X) + sin(2 * X) / 4; ;
				}
				return X - pow(sin(X), 2) - cos(X);
			}
		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Дифференцирование
	double x = Convert::ToDouble(textBox1->Text);
	double h = Convert::ToDouble(textBox2->Text);
	double Deriv1, Deriv2;
	double Range1, Range2;
	if (comboBox1->Text == "sin(x)") {
		//Deriv1 = (sin(x + h) - sin(x)) / h;
		//Range1 = fabs(fabs(Sinder(x, 1)) - fabs(Deriv1));
		Deriv1 = (sin(x + h) - sin(x - h)) / (2 * h);
		Range1 = fabs(Sinder(x, 1) - Deriv1);

		Deriv2 = (sin(x + h) - 2 * sin(x) + sin(x - h)) / pow(h, 2);
		Range2 = fabs(fabs(Sinder(x, 2)) - fabs(Deriv2));
	}

		//Deriv2 = (Sinder(sin(point + step), 1) - Sinder(sin(point), 1)) / step;
		//Deriv2 = (cos(point + step) - cos(point)) / step;
		//Deriv2 = ((cos(point + step) - cos(point)) * step - (sin(point + step) - sin(point))) / (step * step);
		
		/*
		if (Sinder(point, 2) > Deriv2) {
			Range2 = Sinder(point, 2) - Deriv2;
		}
		else Range2 = Deriv2 - Sinder(point, 2);
		*/
		
	else if (comboBox1->Text == "cos(x)") {
		Deriv1 = (cos(x + h) - cos(x - h)) / (2 * h);
		Range1 = fabs(Cosder(x, 1) - Deriv1);

		Deriv2 = (cos(x + h) - 2 * cos(x) + cos(x - h)) / pow(h, 2);
		Range2 = fabs(Cosder(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "sin(x)^2") {
		Deriv1 = (pow(sin(x + h), 2) - pow(sin(x - h), 2)) / (2 * h);
		Range1 = fabs(Sin2der(x, 1) - Deriv1);

		Deriv2 = (pow(sin(x + h), 2) - 2 * pow(sin(x), 2) + pow(sin(x - h), 2)) / pow(h, 2);
		Range2 = fabs(Sin2der(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "cos(x)^2") {
		Deriv1 = (pow(cos(x + h), 2) - pow(cos(x - h), 2)) / (2 * h);
		Range1 = fabs(Cos2der(x, 1) - Deriv1);

		Deriv2 = (pow(cos(x + h), 2) - 2 * pow(cos(x), 2) + pow(cos(x - h), 2)) / pow(h, 2);
		Range2 = fabs(Cos2der(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "ln(x)") {
		Deriv1 = (log(x + h) - log(x - h)) / (2 * h);
		Range1 = fabs(Lnder(x, 1) - Deriv1);

		Deriv2 = (log(x + h) - 2 * log(x) + log(x - h)) / pow(h, 2);
		Range2 = fabs(Lnder(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "exp(x)") {
		Deriv1 = (exp(x + h) - exp(x - h)) / (2 * h);
		Range1 = fabs(Expder(x, 1) - Deriv1);

		Deriv2 = (exp(x + h) - 2 * exp(x) + exp(x - h)) / pow(h, 2);
		Range2 = fabs(Expder(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "x^2") {
		Deriv1 = (pow(x + h, 2) - pow(x - h, 2)) / (2 * h);
		Range1 = fabs(X2der(x, 1) - Deriv1);

		Deriv2 = (pow(x + h, 2) - 2 * pow(x, 2) + pow(x - h, 2)) / pow(h, 2);
		Range2 = fabs(X2der(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "x^3") {
		Deriv1 = (pow(x + h, 3) - pow(x - h, 3)) / (2 * h);
		Range1 = fabs(X3der(x, 1) - Deriv1);

		Deriv2 = (pow(x + h, 3) - 2 * pow(x, 3) + pow(x - h, 3)) / pow(h, 2);
		Range2 = fabs(X3der(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "sqrt(x)") {
		Deriv1 = (sqrt(x + h) - sqrt(x - h)) / (2 * h);
		Range1 = fabs(Sqrtder(x, 1) - Deriv1);

		Deriv2 = (sqrt(x + h) - 2 * sqrt(x) + sqrt(x - h)) / pow(h, 2);
		Range2 = fabs(Sqrtder(x, 2) - Deriv2);
	}
	else if (comboBox1->Text == "x - sin(x)^2 - cos(x)") {
		Deriv1 = (Complexder(x + h, 0) - Complexder(x - h, 0)) / (2 * h);
		Range1 = fabs(Complexder(x, 1) - Deriv1);

		Deriv2 = (Complexder(x + h, 0) - 2 * Complexder(x, 0) + Complexder(x - h, 0)) / pow(h, 2);
		Range2 = fabs(Complexder(x, 2) - Deriv2);
	}

	dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString((float)Deriv1);
	dataGridView1->Rows[0]->Cells[2]->Value = Convert::ToString((float)Range1);
	dataGridView1->Rows[1]->Cells[1]->Value = Convert::ToString((float)Deriv2);
	dataGridView1->Rows[1]->Cells[2]->Value = Convert::ToString((float)Range2);
}

	   /*
	   Answer CRect(const double A, const double B, const double h) {
		   double result = 0;
		   unsigned int n = (B - A) / h;
		   unsigned int counter;

		   for (counter = 0; counter < n; counter++) {
			   result += Function(A + h * (counter + 0.5));
		   }

		   result *= h;
		   return { result, counter };
	   }
	   */
		double CLRect(const double A, const double B, const unsigned int n) {
			double result = 0;
			double h = (B - A) / n;
			for (unsigned int i = 0; i < n; i++) {
				result += Function(A + h * i, 0);
			}

			result *= h;
			return result;
		}
		double CTrape(const double A, const double B, const unsigned int n) {
			double result = 0;
			double h = (B - A) / n;
			for (unsigned int i = 1; i < n; i++) {
				result += Function(A + h * i, 0);
			}
			result += (Function(A, 0) + Function(B, 0)) / 2;
			result *= h;
			return result;
		}
		double CSimp(const double A, const double B, const unsigned int n) {
			double result = 0;
			double h = (B - A) / n;
			for (unsigned int i = 1; i < n; i += 2) {
				result += Function(A + h * (i - 1), 0) + 4 * Function(A + h * i, 0) + Function(A + h * (i + 1), 0);
			}
			result *= h / 3;
			return result;
		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double X1 = Convert::ToDouble(textBox3->Text);
	double X2 = Convert::ToDouble(textBox4->Text);
	//double h = Convert::ToDouble(textBox5->Text);
	unsigned int n = Convert::ToDouble(textBox5->Text);

	double Best = Function(X2, -1) - Function(X1, -1);

	double Result = CLRect(X1, X2, n);
	double range = fabs(Best - Result);
	
	dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString((float)Result);
	dataGridView2->Rows[0]->Cells[2]->Value = Convert::ToString((float)range);

	double Result1 = CTrape(X1, X2, n);
	double range1 = fabs(Best - Result1);

	dataGridView2->Rows[1]->Cells[1]->Value = Convert::ToString((float)Result1);
	dataGridView2->Rows[1]->Cells[2]->Value = Convert::ToString((float)range1);

	double Result2 = CSimp(X1, X2, n);
	double range2 = fabs(Best - Result2);

	dataGridView2->Rows[2]->Cells[1]->Value = Convert::ToString((float)Result2);
	dataGridView2->Rows[2]->Cells[2]->Value = Convert::ToString((float)range2);
}
};
}
