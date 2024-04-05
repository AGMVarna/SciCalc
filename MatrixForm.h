#include <list>
#include<string>
#include <msclr/marshal_cppstd.h>
#include<cstring>

#pragma once

namespace FirstGUITry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Summary for MatrixForm
	/// </summary>
	public ref class MatrixForm : public System::Windows::Forms::Form
	{
	public:
		MatrixForm(void)
		{
			InitializeComponent();
			this->OperationTextBox->TabIndex = 0;
			this->SizeOfMatrixТextBox->TabIndex = 1;
			this->ActiveControl = this->OperationTextBox; 
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatrixForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::TextBox^ OperationTextBox;
	private: System::Windows::Forms::TextBox^ SizeOfMatrixТextBox;
	private: System::Windows::Forms::Label^ SizeOfMatrixLabel;
	private: System::Windows::Forms::Button^ CreateButton;
	private: System::Windows::Forms::Button^ SumButton;
	private: System::Windows::Forms::Label^ OperationLabel;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;







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
			this->OperationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SizeOfMatrixТextBox = (gcnew System::Windows::Forms::TextBox());
			this->SizeOfMatrixLabel = (gcnew System::Windows::Forms::Label());
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->SumButton = (gcnew System::Windows::Forms::Button());
			this->OperationLabel = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// OperationTextBox
			// 
			this->OperationTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->OperationTextBox->Location = System::Drawing::Point(269, 12);
			this->OperationTextBox->Name = L"OperationTextBox";
			this->OperationTextBox->Size = System::Drawing::Size(268, 26);
			this->OperationTextBox->TabIndex = 11;
			this->OperationTextBox->TextChanged += gcnew System::EventHandler(this, &MatrixForm::OperationTextBox_TextChanged);
			// 
			// SizeOfMatrixТextBox
			// 
			this->SizeOfMatrixТextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SizeOfMatrixТextBox->Location = System::Drawing::Point(269, 38);
			this->SizeOfMatrixТextBox->Name = L"SizeOfMatrixТextBox";
			this->SizeOfMatrixТextBox->Size = System::Drawing::Size(120, 26);
			this->SizeOfMatrixТextBox->TabIndex = 7;
			// 
			// SizeOfMatrixLabel
			// 
			this->SizeOfMatrixLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SizeOfMatrixLabel->Location = System::Drawing::Point(12, 41);
			this->SizeOfMatrixLabel->Name = L"SizeOfMatrixLabel";
			this->SizeOfMatrixLabel->Size = System::Drawing::Size(252, 23);
			this->SizeOfMatrixLabel->TabIndex = 6;
			this->SizeOfMatrixLabel->Text = L"Размер на матрица( 2х2, 4х4..) :";
			// 
			// CreateButton
			// 
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CreateButton->Location = System::Drawing::Point(401, 38);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(136, 26);
			this->CreateButton->TabIndex = 8;
			this->CreateButton->Text = L"Създай";
			this->CreateButton->UseVisualStyleBackColor = true;
			this->CreateButton->Click += gcnew System::EventHandler(this, &MatrixForm::CreateButton_Click);
			// 
			// SumButton
			// 
			this->SumButton->Enabled = false;
			this->SumButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->SumButton->Location = System::Drawing::Point(401, 66);
			this->SumButton->Name = L"SumButton";
			this->SumButton->Size = System::Drawing::Size(136, 26);
			this->SumButton->TabIndex = 9;
			this->SumButton->Text = L"Изчисли";
			this->SumButton->UseVisualStyleBackColor = true;
			this->SumButton->Click += gcnew System::EventHandler(this, &MatrixForm::SumButton_Click);
			// 
			// OperationLabel
			// 
			this->OperationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->OperationLabel->Location = System::Drawing::Point(11, 15);
			this->OperationLabel->Name = L"OperationLabel";
			this->OperationLabel->Size = System::Drawing::Size(252, 23);
			this->OperationLabel->TabIndex = 10;
			this->OperationLabel->Text = L"Операции с матрици( A+B+C.. ) :";
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ClearButton->Location = System::Drawing::Point(12, 66);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(136, 26);
			this->ClearButton->TabIndex = 12;
			this->ClearButton->Text = L"Изчисти";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MatrixForm::ClearButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CloseButton->Location = System::Drawing::Point(461, 435);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(96, 32);
			this->CloseButton->TabIndex = 13;
			this->CloseButton->Text = L"Затвори";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &MatrixForm::CloseButton_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->tableLayoutPanel1->AutoScrollMinSize = System::Drawing::Size(10, 10);
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 15;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tableLayoutPanel1->Location = System::Drawing::Point(5, 266);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(450, 210);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// MatrixForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 479);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->OperationTextBox);
			this->Controls->Add(this->SizeOfMatrixТextBox);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->SizeOfMatrixLabel);
			this->Controls->Add(this->OperationLabel);
			this->Controls->Add(this->SumButton);
			this->Controls->Add(this->CreateButton);
			this->Name = L"MatrixForm";
			this->Text = L"MatrixForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int MaxR=0;											//Колко е най- голямата колона
		int CounterForMovingDown = 0;						//с колко да се преместят старите уравнения
		int CountMoveR = 0;
		int ForCount = 0,SaveLocationColl=0;
		String^ tempText;
		List<Label^>^ ResultMemory = gcnew List<Label^>();
		List<TextBox^>^ matrices = gcnew List<TextBox^>();
		List<Label^>^ operation = gcnew List<Label^>();
		List<int>^ RollsCount = gcnew List<int>();
		List<int>^ CollumnsCount = gcnew List<int>();
		TextBox^ MatrixTextBox = gcnew TextBox();
		Label^ LabelResult = gcnew Label();
		array<double, 2>^ OpMat;

		void FreeMemory() {				
			operation->Clear();
			CollumnsCount->Clear();
			RollsCount->Clear();
			matrices->Clear();
			ResultMemory->Clear();
		}
		//---------------------------------------------------
		array<double, 2>^ InitMatrix(int s) {							//параметър е индекса на поредната матрица
			int counter = 0;												//брояч за да може да се изкарат всичките числа от дадената матрица
			array<double, 2>^ TempMatrix = gcnew array<double, 2>(RollsCount[s],CollumnsCount[s]);		//при изтриване се появява като nullptr ???
			for (int i = 0; i < RollsCount[s]; i++)					//за обхождане на редовете
				for (int j = 0; j < CollumnsCount[s]; j++) {				//за обхождане на колоните
					TempMatrix[i, j] = Convert::ToDouble(matrices[(s * (CollumnsCount[s] * RollsCount[s])) + counter]->Text);
					counter++;
				}
			return TempMatrix;
		}
		//---------------------------------------------------
		array<double, 2>^ SumSub(array<double, 2>^ ResultMat, array<double, 2>^ OperatMat, int s) {	//първия параметър е за резултата, а втория е за следващата матрица
			try {
				array<double, 2>^ TempMat = gcnew array<double, 2>(RollsCount[s], CollumnsCount[s]);
				for (int i = 0; i < RollsCount[s]; i++)					//за обхождане на редовете
					for (int j = 0; j < CollumnsCount[s]; j++)				//за обхождане на колоните
						if (operation[s - 1]->Text == "+")
							TempMat[i, j] = ResultMat[i, j] + OperatMat[i, j];
						else
							TempMat[i, j] = ResultMat[i, j] - OperatMat[i, j];
				return TempMat;
			}
				catch (FormatException^ WrongFormat) {
					MessageBox::Show("Грешка: Невалиден формат на размера на матрицата.", "Грешка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//---------------------------------------------------------------
		array<double, 2>^ MulDev(array<double, 2>^ ResultMat, array<double, 2>^ OperatMat, int s) {		//параметър s е коя подред е матрицата
			array<double, 2>^ TempMat = gcnew array<double, 2>(RollsCount[s-1], CollumnsCount[s]);
			for (int i = 0; i < RollsCount[s-1]; i++) {
				for (int j = 0; j < CollumnsCount[s]; j++) {		
					TempMat[i, j] = 0.0;
					for (int k = 0; k < RollsCount[s]; k++)
					if (operation[s - 1]->Text == "*")
						TempMat[i,j] += ResultMat[i, k] * OperatMat[k, j];
					else
						TempMat[i, j] = ResultMat[i, k] / OperatMat[k, j];
				}
			}
			return TempMat;
		}
		//---------------------------------------------------
		void FreeArr(array<double, 2>^ OpMat) {							//функция за освобождаване на паметта на двумерния масив
				for (int i = 0; i < RollsCount[0]; i++)
					for (int j = 0; j < RollsCount[0]; j++)				//използвам RollsCount, защото винаги редовете на 1 мат. са равни на колоните на 2 мат., но не винаги има втора матрица и излиза извън индекс
						OpMat[i, j] = 0.0;
		}
		//--------------------------------------------------
		int MaxRoll(int MaxR) {								//за запаметяване на най-голямата колона
			for(int i=0;i<RollsCount->Count;i++)
			if (MaxR<RollsCount[i])
				MaxR = RollsCount[i];
			return MaxR+1;
		}
		//------------------------------------------------
		//Параметри са опциите на Label и стоиностите на цикъла
		void CreateNewLabel(Label^ Res,int l,int k,String^ text,int MoveR) {
			Res = gcnew Label();
			this->Controls->Add(Res);
			Res->Text = text;
			Res->Font = gcnew System::Drawing::Font(Res->Font->FontFamily, 10);
			Res->AutoSize = true;
			Res->Anchor= AnchorStyles::Top,Left;
			Res->Size = System::Drawing::Size(30, 30);
			tableLayoutPanel1->Controls->Add(Res, ((l - 1) + MoveR),((k-1)+MaxR));		// Задаване на колона. Ползвам стълба на първата матрица.
			ResultMemory->Add(Res);
		}
		//-------------------------------------------------
		//Изместването трябва да се направи спрямо големината на най-голямата нова матрица.
		// Функцията трябва да е в бутона Create
		//MaxMat- колко са колоните на най - голямата матрица за да се събере със старите колони 
		void MoveResultDown() {										//за преместване на уравнението 
			Label^ Res;
			int count = 0;											//брояч за текста. Брои TextBox
			for (int i = 0; i < ForCount; i++) {					//коя подред е матрицата
				for (int k = 1; k <= RollsCount[i]; k++) {			//за броя на TextBox
					for (int l = 1; l <= CollumnsCount[i]; l++) {
						CreateNewLabel(Res, l, k, matrices[count]->Text,CountMoveR);
						count++;
					}
				}
				CountMoveR += CollumnsCount[i];				//за запомняне до къде сме стигнали с матрицата
				Res = gcnew Label();												//за операциите
				this->Controls->Add(Res);
				if (i == ForCount-1 )
					Res->Text = "=";
				else 
					Res->Text = operation[i]->Text;
				Res->Size = System::Drawing::Size(30, 30);
				Res->Font = gcnew System::Drawing::Font(Res->Font->FontFamily, 10);
				tableLayoutPanel1->Controls->Add(Res,CountMoveR,MaxR);			// Задаване на колона. Ползвам стълба на първата матрица.	Показване на знака
				ResultMemory->Add(Res);
				CountMoveR += 1;						//увеличаване поради поставянето на знака между матриците
					//Следва резултата
				if (i == ForCount-1 ) {
					count = 0;
					for (int m = 1; m <= RollsCount[0]; m++) {		
						for (int n = 1; n <= CollumnsCount[1]; n++) {
							CreateNewLabel(Res,n,m,ResultMemory[count]->Text,CountMoveR);
							count++;
						}
					}
				}
			}
		}//всичко е в Label Res
		//-----------------------------------------------------------------------------------

	private: System::Void OperationTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempText = OperationTextBox->Text;
		CreateButton->Enabled = true;
	}

	private: System::Void CreateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int SizeOfMat2 = Convert::ToInt16(SizeOfMatrixТextBox->Text->Split('x')[0]);
			int SizeOfMat1 = Convert::ToInt16(SizeOfMatrixТextBox->Text->Split('x')[1]);				//Променливи за размера
			SizeOfMatrixТextBox->Text = nullptr;
			RollsCount->Add(SizeOfMat1);						
			CollumnsCount->Add(SizeOfMat2);
			ForCount++;																				//брояч за брой създадени матрици
			for (int i = 1; i <= SizeOfMat1; i++) {													//цикъл за създаване на нови texBox за въвеждане на матрицата		
				for (int j = 1; j <= SizeOfMat2; j++) {
					MatrixTextBox = gcnew TextBox();
					this->Controls->Add(MatrixTextBox);
					MatrixTextBox->MaxLength = 10;
					MatrixTextBox->Size = System::Drawing::Size(20, 20);
					MatrixTextBox->Location = Point((SaveLocationColl)+(j * 30), 90 + (i * 30));
					matrices->Add(MatrixTextBox);
				}
			}
			SaveLocationColl += (30 * SizeOfMat2);		//за запомняне на последната локация на последната колона от матрицата +30 изместване

			if (tempText->Length == 1) {				//за създаване на нов label със знака на операцията или ако е край- '='
				tempText = operation[operation->Count - 1]->Text;
				Label^ LabelForOp = gcnew Label();
				LabelForOp->Size = System::Drawing::Size(20, 20);
				LabelForOp->Location = Point(SaveLocationColl + 30, 120);
				LabelForOp->Text = String::Format("{0}", tempText);
				operation->Add(LabelForOp);
				tempText = "===";
			}
			Label^ LabelForOp = gcnew Label();
			this->Controls->Add(LabelForOp);
			LabelForOp->Text = String::Format("{0}", tempText[1]);
			LabelForOp->Size = System::Drawing::Size(20, 20);
			LabelForOp->Location = Point(SaveLocationColl + 30, 120);
			LabelForOp->Font = gcnew System::Drawing::Font(LabelForOp->Font->FontFamily, 12);
			LabelForOp->AutoSize = true;
			operation->Add(LabelForOp);
			tempText = tempText->Remove(0, 2);					//до тук
			SaveLocationColl += 30;
			if (tempText == "=") {
				CreateButton->Enabled = false;
				SumButton->Enabled = true;
			}
		}
			catch (FormatException^ WrongFormat) {
				MessageBox::Show("Грешка: Невалиден формат на данните за матрицата.", "Грешка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
	}
	

	private: System::Void SumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			for (int s = 0; s < ForCount; s++) {
				if(s==0)
				OpMat = InitMatrix(s);		//запазване на първата
				if (s > 0)
					if (operation[s - 1]->Text == "+" || operation[s - 1]->Text == "-")
						OpMat = SumSub(OpMat, InitMatrix(s), s);									//прибавяне на всяка следваща
					else if (operation[s - 1]->Text == "*" || operation[s - 1]->Text == "/")
						OpMat = MulDev(OpMat, InitMatrix(s), s);
				
				if (s == ForCount - 1)									//за показване на резултата
					for (int row = 0; row < RollsCount[0]; row++) {
						for (int col = 0; col < CollumnsCount[1]; col++) {
							LabelResult = gcnew Label();
							this->Controls->Add(LabelResult);
							LabelResult->Location = Point((SaveLocationColl + 30) + (col * 30), 120 + (row * 30));
							LabelResult->Font = gcnew System::Drawing::Font(LabelResult->Font->FontFamily, 12);
							LabelResult->AutoSize = true;
							LabelResult->Text = String::Format("{0}", OpMat[row,col]);
							LabelResult->Name = String::Format("LabelResult{0}", ForCount);
							ResultMemory->Add(LabelResult);
						}
					}
			}
			CounterForMovingDown++;
		}
		catch (FormatException^ WrongFormat) {
			MessageBox::Show("Грешка: Невалидни данни за матрицата.", "Грешка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveResultDown();										//изместване
		MaxR+=MaxRoll(MaxR);								//запомняне на най- голямата колона, за да може да се измести под старата
		FreeArr(OpMat);											//изчистване на масива
		CountMoveR = 0;
		ForCount = 0;
		for (int i = matrices->Count-1; i >= 0;i--) {			//изтриване на матриците
			this->Controls->Remove(matrices[i]);
		}				
		for (int j = operation->Count - 1; j >= 0; j--) {		//изтриване на знака за операция
			this->Controls->Remove(operation[j]);
		}
		for (int k = ResultMemory->Count - 1; k >=0; k--) {		//изтриване на резултата
			this->Controls->Remove(ResultMemory[k]);
		}
		OperationTextBox->Text = nullptr;
		FreeMemory();
		CreateButton->Enabled = true;
		SumButton->Enabled = false;
		SaveLocationColl = 0;
	}
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CountMoveR = 0;
	ForCount = 0;
	for (int i = matrices->Count - 1; i >= 0; i--) {
		this->Controls->Remove(matrices[i]);
	}
	if (matrices->Count > 0) {
		FreeArr(OpMat);
		FreeMemory();
	}
	this->Controls->Remove(LabelResult);
	for (int j = operation->Count - 1; j >= 0; j--) {
		this->Controls->Remove(operation[j]);
	}
	for (int k = 0; k < ResultMemory->Count - 1; k++) {		
		this->Controls->Remove(ResultMemory[k]);
	}
	this->Close();
	this->Enabled = false;
}

private: System::Void tableLayoutPanel1_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	
	if (e->Control != nullptr && e->Control->Parent == tableLayoutPanel1) {		// Проверка дали е добавен Label към tableLayoutPanel1
		tableLayoutPanel1->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30));
	}
}
};
}