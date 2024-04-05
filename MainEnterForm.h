#pragma once
#include "RegistrationForm.h"
#include "CryptAlg.h"
#include "MenuForm.h"
//ref class MenuForm;


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
	/// Summary for MainEnterForm
	/// </summary>
	public ref class MainEnterForm : public System::Windows::Forms::Form
	{
	public:
		MainEnterForm(void)					
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainEnterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Button^ SigningInButton;
	private: System::Windows::Forms::Label^ UserNameLabel;
	private: System::Windows::Forms::TextBox^ UserNameTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::Label^ PasswordLabel;
	private: System::Windows::Forms::Label^ WrongUsNameLabel;
	private: System::Windows::Forms::Label^ WrongPassLabel;
	private: System::Windows::Forms::Button^ AdminButton;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->SigningInButton = (gcnew System::Windows::Forms::Button());
			this->UserNameLabel = (gcnew System::Windows::Forms::Label());
			this->UserNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->WrongUsNameLabel = (gcnew System::Windows::Forms::Label());
			this->WrongPassLabel = (gcnew System::Windows::Forms::Label());
			this->AdminButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// RegisterButton
			// 
			this->RegisterButton->Location = System::Drawing::Point(58, 406);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(248, 34);
			this->RegisterButton->TabIndex = 0;
			this->RegisterButton->Text = L"Регистрация";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &MainEnterForm::RegisterButton_Click);
			// 
			// SigningInButton
			// 
			this->SigningInButton->Location = System::Drawing::Point(58, 365);
			this->SigningInButton->Name = L"SigningInButton";
			this->SigningInButton->Size = System::Drawing::Size(248, 35);
			this->SigningInButton->TabIndex = 1;
			this->SigningInButton->Text = L"Влез";
			this->SigningInButton->UseVisualStyleBackColor = true;
			this->SigningInButton->Click += gcnew System::EventHandler(this, &MainEnterForm::SigningInButton_Click);
			// 
			// UserNameLabel
			// 
			this->UserNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->UserNameLabel->Location = System::Drawing::Point(55, 43);
			this->UserNameLabel->Name = L"UserNameLabel";
			this->UserNameLabel->Size = System::Drawing::Size(251, 33);
			this->UserNameLabel->TabIndex = 2;
			this->UserNameLabel->Text = L"Потребителско Име:";
			// 
			// UserNameTextBox
			// 
			this->UserNameTextBox->Location = System::Drawing::Point(59, 90);
			this->UserNameTextBox->Name = L"UserNameTextBox";
			this->UserNameTextBox->Size = System::Drawing::Size(247, 20);
			this->UserNameTextBox->TabIndex = 3;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(59, 213);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(247, 20);
			this->PasswordTextBox->TabIndex = 4;
			this->PasswordTextBox->UseSystemPasswordChar = true;
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->PasswordLabel->Location = System::Drawing::Point(55, 147);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(251, 37);
			this->PasswordLabel->TabIndex = 5;
			this->PasswordLabel->Text = L"Парола:";
			// 
			// WrongUsNameLabel
			// 
			this->WrongUsNameLabel->ForeColor = System::Drawing::Color::Red;
			this->WrongUsNameLabel->Location = System::Drawing::Point(56, 113);
			this->WrongUsNameLabel->Name = L"WrongUsNameLabel";
			this->WrongUsNameLabel->Size = System::Drawing::Size(174, 18);
			this->WrongUsNameLabel->TabIndex = 6;
			this->WrongUsNameLabel->Text = L"Грешно потребителско име";
			this->WrongUsNameLabel->Visible = false;
			// 
			// WrongPassLabel
			// 
			this->WrongPassLabel->ForeColor = System::Drawing::Color::Red;
			this->WrongPassLabel->Location = System::Drawing::Point(56, 236);
			this->WrongPassLabel->Name = L"WrongPassLabel";
			this->WrongPassLabel->Size = System::Drawing::Size(222, 18);
			this->WrongPassLabel->TabIndex = 7;
			this->WrongPassLabel->Text = L"Грешна парола";
			this->WrongPassLabel->Visible = false;
			// 
			// AdminButton
			// 
			this->AdminButton->Location = System::Drawing::Point(89, 326);
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(189, 23);
			this->AdminButton->TabIndex = 8;
			this->AdminButton->Text = L"Admin";
			this->AdminButton->UseVisualStyleBackColor = true;
			this->AdminButton->Click += gcnew System::EventHandler(this, &MainEnterForm::AdminButton_Click);
			// 
			// MainEnterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 461);
			this->Controls->Add(this->AdminButton);
			this->Controls->Add(this->WrongPassLabel);
			this->Controls->Add(this->WrongUsNameLabel);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->UserNameTextBox);
			this->Controls->Add(this->UserNameLabel);
			this->Controls->Add(this->SigningInButton);
			this->Controls->Add(this->RegisterButton);
			this->Name = L"MainEnterForm";
			this->Text = L"MainEnterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ username;
		String^ pass;
private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistrationForm^ RegisterTab = gcnew RegistrationForm();
	RegisterTab->ShowDialog();
}

private: System::Void SigningInButton_Click(System::Object^ sender, System::EventArgs^ e) {
	username = UserNameTextBox->Text;
	pass = PasswordTextBox->Text;
	CryptTry::Crypt(username);
	CryptTry::Crypt(pass);
	StreamReader^ fileReader = gcnew StreamReader("uap.txt");				// Отваряне на файла за четене
	while (!fileReader->EndOfStream) {										// Прочитане на файла ред по ред
		String^ line = fileReader->ReadLine();
		array<String^>^ parts = line->Split(',');							// Разделяне на реда на два стринга
		if (parts->Length == 2) {											// Проверка за наличие на два елемента след разделянето
			String^ checkUser = parts[0];								
			String^ checkPass = parts[1];
			if (checkUser == username) {
				WrongUsNameLabel->Visible = false;
				if (checkPass == pass) {
					CryptTry::IDInit = username;
					WrongPassLabel->Visible = false;
					fileReader->Close();
					MenuForm^ NewFormForMenu = gcnew MenuForm();
					NewFormForMenu->ShowDialog();
					this->Close();
					break;                    //има ли смисъл ???
				}
				else WrongPassLabel->Visible = true;
			}
			else WrongUsNameLabel->Visible = true;
		}
	}
	fileReader->Close();				//по този начин файла остава отворен?
}
private: System::Void AdminButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuForm^ NewFormForMenu = gcnew MenuForm();
	NewFormForMenu->ShowDialog();
}
};
}
