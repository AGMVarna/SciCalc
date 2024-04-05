#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "CryptAlg.h"


namespace FirstGUITry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
public ref class RegistrationForm : public System::Windows::Forms::Form
	{

	public:

		RegistrationForm(void)
		{
			//StreamWriter^ UserAndPass = gcnew StreamWriter("uap.txt",true);    	//uap = username and password
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::TextBox^ UserNameTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::TextBox^ ConfirmPasswordTextBox;
	private: System::Windows::Forms::Label^ CreateUserNameLabel;
	private: System::Windows::Forms::Label^ CreatePasswordLabel;
	private: System::Windows::Forms::Label^ ConfirmPasswordLabel;
	private: System::Windows::Forms::Button^ RegistrationButton;
	private: System::Windows::Forms::Label^ PassWarningLable;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->UserNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CreateUserNameLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->CreatePasswordLabel = (gcnew System::Windows::Forms::Label());
			this->RegistrationButton = (gcnew System::Windows::Forms::Button());
			this->PassWarningLable = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// UserNameTextBox
			// 
			this->UserNameTextBox->Location = System::Drawing::Point(133, 73);
			this->UserNameTextBox->Name = L"UserNameTextBox";
			this->UserNameTextBox->Size = System::Drawing::Size(232, 20);
			this->UserNameTextBox->TabIndex = 0;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(133, 99);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(232, 20);
			this->PasswordTextBox->TabIndex = 4;
			// 
			// ConfirmPasswordTextBox
			// 
			this->ConfirmPasswordTextBox->Location = System::Drawing::Point(133, 125);
			this->ConfirmPasswordTextBox->Name = L"ConfirmPasswordTextBox";
			this->ConfirmPasswordTextBox->Size = System::Drawing::Size(232, 20);
			this->ConfirmPasswordTextBox->TabIndex = 2;
			this->ConfirmPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &RegistrationForm::ConfirmPasswordTextBox_TextChanged);	
			// 
			// CreateUserNameLabel
			// 
			this->CreateUserNameLabel->Location = System::Drawing::Point(12, 73);
			this->CreateUserNameLabel->Name = L"CreateUserNameLabel";
			this->CreateUserNameLabel->Size = System::Drawing::Size(115, 20);
			this->CreateUserNameLabel->TabIndex = 5;
			this->CreateUserNameLabel->Text = L"Потребителско име:";
			// 
			// ConfirmPasswordLabel
			// 
			this->ConfirmPasswordLabel->Location = System::Drawing::Point(12, 125);
			this->ConfirmPasswordLabel->Name = L"ConfirmPasswordLabel";
			this->ConfirmPasswordLabel->Size = System::Drawing::Size(115, 20);
			this->ConfirmPasswordLabel->TabIndex = 6;
			this->ConfirmPasswordLabel->Text = L"Повтори парола:";
			// 
			// CreatePasswordLabel
			// 
			this->CreatePasswordLabel->Location = System::Drawing::Point(12, 99);
			this->CreatePasswordLabel->Name = L"CreatePasswordLabel";
			this->CreatePasswordLabel->Size = System::Drawing::Size(112, 20);
			this->CreatePasswordLabel->TabIndex = 7;
			this->CreatePasswordLabel->Text = L"Парола:";
			// 
			// RegistrationButton
			// 
			this->RegistrationButton->Enabled = false;
			this->RegistrationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->RegistrationButton->Location = System::Drawing::Point(15, 196);
			this->RegistrationButton->Name = L"RegistrationButton";
			this->RegistrationButton->Size = System::Drawing::Size(350, 55);
			this->RegistrationButton->TabIndex = 8;
			this->RegistrationButton->Text = L"Регистрация";
			this->RegistrationButton->UseVisualStyleBackColor = true;
			this->RegistrationButton->Click += gcnew System::EventHandler(this, &RegistrationForm::RegistrationButton_Click);
			// 
			// PassWarningLable
			// 
			this->PassWarningLable->AutoSize = true;
			this->PassWarningLable->ForeColor = System::Drawing::Color::Red;
			this->PassWarningLable->Location = System::Drawing::Point(130, 148);
			this->PassWarningLable->Name = L"PassWarningLable";
			this->PassWarningLable->Size = System::Drawing::Size(167, 13);
			this->PassWarningLable->TabIndex = 9;
			this->PassWarningLable->Text = L"Няма съвпадение на паролите!";
			this->PassWarningLable->Visible = false;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 474);
			this->Controls->Add(this->PassWarningLable);
			this->Controls->Add(this->RegistrationButton);
			this->Controls->Add(this->CreatePasswordLabel);
			this->Controls->Add(this->ConfirmPasswordLabel);
			this->Controls->Add(this->CreateUserNameLabel);
			this->Controls->Add(this->UserNameTextBox);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->ConfirmPasswordTextBox);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConfirmPasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ pass = PasswordTextBox->Text;
		String^ confPass = ConfirmPasswordTextBox->Text;
		if (pass != confPass) {
			PassWarningLable->Visible = true;
			RegistrationButton->Enabled = false;
		}
		else if (pass == confPass) {
			PassWarningLable->Visible = false;
			RegistrationButton->Enabled = true;
		}
	}
	private: System::Void RegistrationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usName = UserNameTextBox->Text;
		CryptTry::Crypt(usName);
		String^ pass = PasswordTextBox->Text;
		CryptTry::Crypt(pass);
		if (PasswordTextBox->Text == ConfirmPasswordTextBox->Text) {
			String^ ForWrite = String::Format(L"{0},{1}", usName, pass);		//създаване на файл със записани, криптирани име и парола, разделени от запетая
			StreamWriter^ UserAndPass = gcnew StreamWriter("uap.txt", true);
			StreamWriter^ HistoryIDint1 = gcnew StreamWriter(usName + " DoubleIntegrals.txt", true);
			HistoryIDint1->Close();
			UserAndPass->WriteLine(ForWrite);
			UserAndPass->Close();
			this->Close();
		}
		else {
			PassWarningLable->Visible = true;
			RegistrationButton->Enabled = false;
		}
	}



	
};
}
