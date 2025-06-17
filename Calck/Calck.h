#pragma once

namespace Calck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calck
	/// </summary>
	public ref class Calck : public System::Windows::Forms::Form
	{
	public:
		Calck(void)
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
		~Calck()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	protected:

	protected:
	private: float first_num;

	private: char user_action = ' ';
	private: bool is_equal = false;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calck::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(10, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 56);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Calck::label1_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(2, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 72);
			this->button1->TabIndex = 1;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calck::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(76, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 72);
			this->button2->TabIndex = 2;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calck::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(150, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 72);
			this->button3->TabIndex = 3;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calck::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(222, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 72);
			this->button4->TabIndex = 4;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calck::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(2, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 72);
			this->button5->TabIndex = 5;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(76, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 72);
			this->button6->TabIndex = 6;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(150, 118);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 72);
			this->button7->TabIndex = 7;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(222, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 72);
			this->button8->TabIndex = 8;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calck::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(2, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 72);
			this->button9->TabIndex = 9;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(76, 186);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 72);
			this->button10->TabIndex = 10;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(150, 186);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 72);
			this->button11->TabIndex = 11;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(222, 186);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 72);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calck::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(2, 255);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 72);
			this->button13->TabIndex = 13;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(76, 255);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(77, 72);
			this->button14->TabIndex = 14;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(150, 255);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 72);
			this->button15->TabIndex = 15;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(222, 255);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 72);
			this->button16->TabIndex = 16;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calck::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(2, 326);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(151, 72);
			this->button17->TabIndex = 17;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(150, 326);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 72);
			this->button18->TabIndex = 18;
			this->button18->Text = L",";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Calck::button18_Click);
			this->button18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calck::button18_Paint);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(222, 326);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 72);
			this->button19->TabIndex = 19;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calck::button19_Click);
			// 
			// Calck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 402);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calck";
			this->Text = L"Calck";
			this->Load += gcnew System::EventHandler(this, &Calck::Calck_Load);
			this->Click += gcnew System::EventHandler(this, &Calck::BtnNumber_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Calck_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
     /*очистка*/
		this->label1->Text = "0";
		this->label1->ForeColor = Color::Black;
		this->user_action = ' ';
		this->is_equal = false;

	}
	

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	/* , */
	String^ text = this->label1->Text;
	if (!text->Contains(","))
		this->label1->Text = text + ",";
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		this->label1->ForeColor = Color::Black;
		if (this->label1->Text == "0" || is_equal) {
			this->label1->Text = button->Text;
			is_equal = false;
		}
		else
			this->label1->Text = this->label1->Text + button->Text;
	}
	private: System::Void Calck_Operation (char action) {
		this->first_num = System::Convert::ToDouble(this->label1->Text);
		this->user_action = action;
		this->label1->Text = "0";

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Процент */
		Calck_Operation('%');
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Минус */
		Calck_Operation('-');
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Умножение*/
		Calck_Operation('*');

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/* деление*/
		Calck_Operation('/');
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Плюс*/
		Calck_Operation('+');
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Равно*/
		if (user_action == ' ')
		return;
		float second = System::Convert::ToDouble(this->label1->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/': 
			if (second == 0) {
				res = 0;
				this->label1->ForeColor = Color::Red;
				MessageBox::Show(this, "Нельзя делить на 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second; break;
			
		}
		is_equal = true;
		this->label1->Text = System::Convert::ToString(res);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*     +/-	*/
		float num  = System::Convert::ToDouble(this->label1->Text);
		num *= -1;
		this->label1->Text = System::Convert::ToString(num);

	}
private: System::Void button18_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
