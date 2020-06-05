#pragma once
#include <iostream>

namespace modulocalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int num1;
		int num2;
		String^ action;
		bool to_clear = false;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Button^ button0;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::Button^ button9;

		System::Windows::Forms::Button^ buttonPlus;
		System::Windows::Forms::Button^ buttonMinus;
		System::Windows::Forms::Button^ buttonTimes;
		System::Windows::Forms::Button^ buttonDivided;
		System::Windows::Forms::Button^ buttonEquals;
		System::Windows::Forms::Button^ buttonC;

		System::Windows::Forms::TextBox^ zInput;
		System::Windows::Forms::TextBox^ eqInput;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;

		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonTimes = (gcnew System::Windows::Forms::Button());
			this->buttonDivided = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->zInput = (gcnew System::Windows::Forms::TextBox());
			this->eqInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button0->Location = System::Drawing::Point(61, 342);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 50);
			this->button0->TabIndex = 8;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 13;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(118, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 11;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(5, 230);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(61, 230);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(117, 230);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(5, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(61, 174);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 2;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(118, 174);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(173, 230);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(50, 50);
			this->buttonPlus->TabIndex = 12;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonAction_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(174, 286);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(50, 50);
			this->buttonMinus->TabIndex = 0;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonAction_Click);
			// 
			// buttonTimes
			// 
			this->buttonTimes->Location = System::Drawing::Point(173, 174);
			this->buttonTimes->Name = L"buttonTimes";
			this->buttonTimes->Size = System::Drawing::Size(50, 50);
			this->buttonTimes->TabIndex = 7;
			this->buttonTimes->Text = L"*";
			this->buttonTimes->UseVisualStyleBackColor = true;
			this->buttonTimes->Click += gcnew System::EventHandler(this, &MyForm::buttonAction_Click);
			// 
			// buttonDivided
			// 
			this->buttonDivided->Location = System::Drawing::Point(173, 118);
			this->buttonDivided->Name = L"buttonDivided";
			this->buttonDivided->Size = System::Drawing::Size(50, 50);
			this->buttonDivided->TabIndex = 10;
			this->buttonDivided->Text = L"/";
			this->buttonDivided->UseVisualStyleBackColor = true;
			this->buttonDivided->Click += gcnew System::EventHandler(this, &MyForm::buttonAction_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->Location = System::Drawing::Point(119, 342);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(105, 50);
			this->buttonEquals->TabIndex = 14;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
			// 
			// buttonC
			// 
			this->buttonC->Location = System::Drawing::Point(5, 342);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(50, 50);
			this->buttonC->TabIndex = 19;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// zInput
			// 
			this->zInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->zInput->Location = System::Drawing::Point(40, 23);
			this->zInput->MaximumSize = System::Drawing::Size(50, 30);
			this->zInput->MinimumSize = System::Drawing::Size(28, 30);
			this->zInput->Name = L"zInput";
			this->zInput->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->zInput->Size = System::Drawing::Size(41, 26);
			this->zInput->TabIndex = 16;
			this->zInput->Text = L"100";
			this->zInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// eqInput
			// 
			this->eqInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->eqInput->Location = System::Drawing::Point(5, 118);
			this->eqInput->MaxLength = 12;
			this->eqInput->Name = L"eqInput";
			this->eqInput->Size = System::Drawing::Size(162, 50);
			this->eqInput->TabIndex = 17;
			this->eqInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->eqInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::eqInput_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(5, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 39);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Z";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(234, 395);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonTimes);
			this->Controls->Add(this->buttonDivided);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->eqInput);
			this->Controls->Add(this->zInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Modulo calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}

		//Making it so I dont have to write like 10 almost same methods. Im making one handler to 10 buttons 0-9
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//casting sender to button so i can access its values easily
			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^) sender;
			if (to_clear)
			{
				eqInput->Clear();
				to_clear = false;
			}
			eqInput->Text += button->Text;

		};
		System::Void buttonAction_Click(System::Object^ sender, System::EventArgs^ e) {
			//casting sender to button so i can access its values easily
			System::Windows::Forms::Button^ button = (System::Windows::Forms::Button^) sender;
			action = Convert::ToString(button->Text); // 'action' is +, -, * or /
			label2->Text = eqInput->Text;
			label2->Text += action;
			num1 = Convert::ToInt32(eqInput->Text);
			to_clear = true;
			
		}
		//Clicking "=" results in stashing number from eqInput to num 2 and
		//perform an equation with num1 specified by char 'action'
		System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
			num2 = Convert::ToInt32(eqInput->Text);
			int result=0;
			if (action == "+") result = num1 + num2;
			else if (action == "-") result = num1 - num2;
			else if (action == "*") result = num1 * num2;
			else if (action == "/") result = num1 / num2;
			String^ result_string = Convert::ToString(result);
			eqInput->Text = result_string;
		}
		System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
			eqInput->Clear();
			label2->Text = "";
			num1 = 0;
			num2 = 0;
		}
		
private: System::Void eqInput_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void eqInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 's')
		
	{
		e->Handled = true;
	}
}
};
}
