#pragma once
#include "IntegralForm.h"
#include "MatrixForm.h"
#include "DeterminantForm.h"
#include "LinearEquationForm.h"



namespace FirstGUITry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:

		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^ LabelForChoose;
	private: System::Windows::Forms::Button^ ButtonForOpenIntegrals;
	private: System::Windows::Forms::Button^ MatrixButton;
	private: System::Windows::Forms::Button^ DeterminantButton;
	private: System::Windows::Forms::Button^ LinearButton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->LabelForChoose = (gcnew System::Windows::Forms::Label());
			this->ButtonForOpenIntegrals = (gcnew System::Windows::Forms::Button());
			this->MatrixButton = (gcnew System::Windows::Forms::Button());
			this->DeterminantButton = (gcnew System::Windows::Forms::Button());
			this->LinearButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelForChoose
			// 
			this->LabelForChoose->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->LabelForChoose->AutoSize = true;
			this->LabelForChoose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelForChoose->Location = System::Drawing::Point(46, 10);
			this->LabelForChoose->Name = L"LabelForChoose";
			this->LabelForChoose->Size = System::Drawing::Size(216, 26);
			this->LabelForChoose->TabIndex = 0;
			this->LabelForChoose->Text = L"Изберете действие:";
			this->LabelForChoose->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ButtonForOpenIntegrals
			// 
			this->ButtonForOpenIntegrals->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonForOpenIntegrals.Image")));
			this->ButtonForOpenIntegrals->Location = System::Drawing::Point(12, 39);
			this->ButtonForOpenIntegrals->Name = L"ButtonForOpenIntegrals";
			this->ButtonForOpenIntegrals->Size = System::Drawing::Size(165, 142);
			this->ButtonForOpenIntegrals->TabIndex = 1;
			this->ButtonForOpenIntegrals->Text = L"Двоен Интеграл";
			this->ButtonForOpenIntegrals->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonForOpenIntegrals->UseVisualStyleBackColor = true;
			this->ButtonForOpenIntegrals->MouseCaptureChanged += gcnew System::EventHandler(this, &MenuForm::ButtonForOpenIntegrals_Click);
			// 
			// MatrixButton
			// 
			this->MatrixButton->BackColor = System::Drawing::Color::White;
			this->MatrixButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MatrixButton.Image")));
			this->MatrixButton->Location = System::Drawing::Point(183, 39);
			this->MatrixButton->Name = L"MatrixButton";
			this->MatrixButton->Size = System::Drawing::Size(165, 142);
			this->MatrixButton->TabIndex = 2;
			this->MatrixButton->Text = L"Матрица";
			this->MatrixButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->MatrixButton->UseVisualStyleBackColor = false;
			this->MatrixButton->Click += gcnew System::EventHandler(this, &MenuForm::MatrixButton_Click);
			// 
			// DeterminantButton
			// 
			this->DeterminantButton->BackColor = System::Drawing::Color::White;
			this->DeterminantButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeterminantButton.BackgroundImage")));
			this->DeterminantButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->DeterminantButton->Location = System::Drawing::Point(354, 39);
			this->DeterminantButton->Name = L"DeterminantButton";
			this->DeterminantButton->Size = System::Drawing::Size(165, 142);
			this->DeterminantButton->TabIndex = 3;
			this->DeterminantButton->Text = L"Детерминанта";
			this->DeterminantButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->DeterminantButton->UseVisualStyleBackColor = false;
			this->DeterminantButton->Click += gcnew System::EventHandler(this, &MenuForm::DeterminantButton_Click);
			// 
			// LinearButton
			// 
			this->LinearButton->BackColor = System::Drawing::Color::White;
			this->LinearButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LinearButton.Image")));
			this->LinearButton->Location = System::Drawing::Point(12, 187);
			this->LinearButton->Name = L"LinearButton";
			this->LinearButton->Size = System::Drawing::Size(165, 146);
			this->LinearButton->TabIndex = 4;
			this->LinearButton->Text = L"Системи Линейни Уравнения";
			this->LinearButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LinearButton->UseVisualStyleBackColor = false;
			this->LinearButton->Click += gcnew System::EventHandler(this, &MenuForm::LinearButton_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 403);
			this->Controls->Add(this->LinearButton);
			this->Controls->Add(this->DeterminantButton);
			this->Controls->Add(this->MatrixButton);
			this->Controls->Add(this->ButtonForOpenIntegrals);
			this->Controls->Add(this->LabelForChoose);
			this->Name = L"MenuForm";
			this->Text = L"Научен калкулатор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void ButtonForOpenIntegrals_Click(System::Object^ sender, System::EventArgs^ e) {
		IntegralForm^ EnterDoubleIntegrals = gcnew IntegralForm();
		EnterDoubleIntegrals->ShowDialog();
	}
	private: System::Void MatrixButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixForm^ EnterMat = gcnew MatrixForm();
		EnterMat->ShowDialog();
	}
	private: System::Void DeterminantButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DeterminantForm^ EnterDet = gcnew DeterminantForm();
		EnterDet->ShowDialog();
	}
	private: System::Void LinearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		LinearEquationForm^ EnterLine = gcnew LinearEquationForm();
		EnterLine->ShowDialog();
	}
};
}
