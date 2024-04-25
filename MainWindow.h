#pragma once
#include <string>
#include "create_invoice.h"
#include <msclr\marshal_cppstd.h>

namespace InvoiceCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			SetInitialValues();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ invoiceDateIn;

	protected:



	private: System::Windows::Forms::TextBox^ serviceInput;


	private: System::Windows::Forms::Button^ createBtn;
	private: System::Windows::Forms::Label^ invoiceDateLbl;
	private: System::Windows::Forms::Label^ numberOfHoursLbl;
	private: System::Windows::Forms::Label^ rateLbl;


	private: System::Windows::Forms::NumericUpDown^ paymentDateIn;


	private: System::Windows::Forms::Label^ paymentDateLbl;
	private: System::Windows::Forms::Label^ paymentDateResultLbl;
	private: System::Windows::Forms::TextBox^ pkwiuCodeIn;
	private: System::Windows::Forms::Label^ pkwiuCodeLbl;
	private: System::Windows::Forms::Label^ serviceDescriptionLbl;
	private: System::Windows::Forms::NumericUpDown^ numberOfHoursIn;
	private: System::Windows::Forms::NumericUpDown^ rateIn;








	protected:

	protected:

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
			this->invoiceDateIn = (gcnew System::Windows::Forms::DateTimePicker());
			this->serviceInput = (gcnew System::Windows::Forms::TextBox());
			this->createBtn = (gcnew System::Windows::Forms::Button());
			this->invoiceDateLbl = (gcnew System::Windows::Forms::Label());
			this->numberOfHoursLbl = (gcnew System::Windows::Forms::Label());
			this->rateLbl = (gcnew System::Windows::Forms::Label());
			this->paymentDateIn = (gcnew System::Windows::Forms::NumericUpDown());
			this->paymentDateLbl = (gcnew System::Windows::Forms::Label());
			this->paymentDateResultLbl = (gcnew System::Windows::Forms::Label());
			this->pkwiuCodeIn = (gcnew System::Windows::Forms::TextBox());
			this->pkwiuCodeLbl = (gcnew System::Windows::Forms::Label());
			this->serviceDescriptionLbl = (gcnew System::Windows::Forms::Label());
			this->numberOfHoursIn = (gcnew System::Windows::Forms::NumericUpDown());
			this->rateIn = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paymentDateIn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberOfHoursIn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rateIn))->BeginInit();
			this->SuspendLayout();
			// 
			// invoiceDateIn
			// 
			this->invoiceDateIn->CustomFormat = L"dd.MM.yyyy";
			this->invoiceDateIn->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invoiceDateIn->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->invoiceDateIn->Location = System::Drawing::Point(205, 20);
			this->invoiceDateIn->Margin = System::Windows::Forms::Padding(10);
			this->invoiceDateIn->Name = L"invoiceDateIn";
			this->invoiceDateIn->Size = System::Drawing::Size(150, 23);
			this->invoiceDateIn->TabIndex = 0;
			this->invoiceDateIn->ValueChanged += gcnew System::EventHandler(this, &MainWindow::invoiceDateIn_ValueChanged);
			// 
			// serviceInput
			// 
			this->serviceInput->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->serviceInput->Location = System::Drawing::Point(205, 235);
			this->serviceInput->Margin = System::Windows::Forms::Padding(10);
			this->serviceInput->Multiline = true;
			this->serviceInput->Name = L"serviceInput";
			this->serviceInput->Size = System::Drawing::Size(150, 75);
			this->serviceInput->TabIndex = 3;
			// 
			// createBtn
			// 
			this->createBtn->Location = System::Drawing::Point(168, 330);
			this->createBtn->Margin = System::Windows::Forms::Padding(10);
			this->createBtn->Name = L"createBtn";
			this->createBtn->Size = System::Drawing::Size(75, 23);
			this->createBtn->TabIndex = 6;
			this->createBtn->Text = L"Create";
			this->createBtn->UseVisualStyleBackColor = true;
			this->createBtn->Click += gcnew System::EventHandler(this, &MainWindow::createBtn_Click);
			// 
			// invoiceDateLbl
			// 
			this->invoiceDateLbl->AutoSize = true;
			this->invoiceDateLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invoiceDateLbl->Location = System::Drawing::Point(20, 20);
			this->invoiceDateLbl->Margin = System::Windows::Forms::Padding(10);
			this->invoiceDateLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->invoiceDateLbl->Name = L"invoiceDateLbl";
			this->invoiceDateLbl->Padding = System::Windows::Forms::Padding(3);
			this->invoiceDateLbl->Size = System::Drawing::Size(110, 23);
			this->invoiceDateLbl->TabIndex = 7;
			this->invoiceDateLbl->Text = L"Invoice date";
			this->invoiceDateLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numberOfHoursLbl
			// 
			this->numberOfHoursLbl->AutoSize = true;
			this->numberOfHoursLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberOfHoursLbl->Location = System::Drawing::Point(20, 106);
			this->numberOfHoursLbl->Margin = System::Windows::Forms::Padding(10);
			this->numberOfHoursLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->numberOfHoursLbl->Name = L"numberOfHoursLbl";
			this->numberOfHoursLbl->Padding = System::Windows::Forms::Padding(3);
			this->numberOfHoursLbl->Size = System::Drawing::Size(134, 23);
			this->numberOfHoursLbl->TabIndex = 8;
			this->numberOfHoursLbl->Text = L"Number of hours";
			this->numberOfHoursLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rateLbl
			// 
			this->rateLbl->AutoSize = true;
			this->rateLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rateLbl->Location = System::Drawing::Point(20, 149);
			this->rateLbl->Margin = System::Windows::Forms::Padding(10);
			this->rateLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->rateLbl->Name = L"rateLbl";
			this->rateLbl->Padding = System::Windows::Forms::Padding(3);
			this->rateLbl->Size = System::Drawing::Size(46, 23);
			this->rateLbl->TabIndex = 9;
			this->rateLbl->Text = L"Rate";
			this->rateLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paymentDateIn
			// 
			this->paymentDateIn->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentDateIn->Location = System::Drawing::Point(205, 63);
			this->paymentDateIn->Margin = System::Windows::Forms::Padding(10);
			this->paymentDateIn->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->paymentDateIn->Name = L"paymentDateIn";
			this->paymentDateIn->Size = System::Drawing::Size(38, 23);
			this->paymentDateIn->TabIndex = 11;
			this->paymentDateIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->paymentDateIn->ValueChanged += gcnew System::EventHandler(this, &MainWindow::paymentDateIn_ValueChanged);
			// 
			// paymentDateLbl
			// 
			this->paymentDateLbl->AutoSize = true;
			this->paymentDateLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentDateLbl->Location = System::Drawing::Point(19, 63);
			this->paymentDateLbl->Margin = System::Windows::Forms::Padding(10);
			this->paymentDateLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->paymentDateLbl->Name = L"paymentDateLbl";
			this->paymentDateLbl->Padding = System::Windows::Forms::Padding(3);
			this->paymentDateLbl->Size = System::Drawing::Size(110, 23);
			this->paymentDateLbl->TabIndex = 13;
			this->paymentDateLbl->Text = L"Payment date";
			this->paymentDateLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paymentDateResultLbl
			// 
			this->paymentDateResultLbl->AutoSize = true;
			this->paymentDateResultLbl->BackColor = System::Drawing::SystemColors::Window;
			this->paymentDateResultLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentDateResultLbl->Location = System::Drawing::Point(263, 63);
			this->paymentDateResultLbl->Margin = System::Windows::Forms::Padding(10);
			this->paymentDateResultLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->paymentDateResultLbl->Name = L"paymentDateResultLbl";
			this->paymentDateResultLbl->Padding = System::Windows::Forms::Padding(3);
			this->paymentDateResultLbl->Size = System::Drawing::Size(22, 23);
			this->paymentDateResultLbl->TabIndex = 14;
			this->paymentDateResultLbl->Text = L" ";
			this->paymentDateResultLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pkwiuCodeIn
			// 
			this->pkwiuCodeIn->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pkwiuCodeIn->Location = System::Drawing::Point(205, 192);
			this->pkwiuCodeIn->Margin = System::Windows::Forms::Padding(10);
			this->pkwiuCodeIn->Name = L"pkwiuCodeIn";
			this->pkwiuCodeIn->Size = System::Drawing::Size(150, 23);
			this->pkwiuCodeIn->TabIndex = 15;
			// 
			// pkwiuCodeLbl
			// 
			this->pkwiuCodeLbl->AutoSize = true;
			this->pkwiuCodeLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pkwiuCodeLbl->Location = System::Drawing::Point(20, 192);
			this->pkwiuCodeLbl->Margin = System::Windows::Forms::Padding(10);
			this->pkwiuCodeLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->pkwiuCodeLbl->Name = L"pkwiuCodeLbl";
			this->pkwiuCodeLbl->Padding = System::Windows::Forms::Padding(3);
			this->pkwiuCodeLbl->Size = System::Drawing::Size(94, 23);
			this->pkwiuCodeLbl->TabIndex = 16;
			this->pkwiuCodeLbl->Text = L"PKWiU code";
			this->pkwiuCodeLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// serviceDescriptionLbl
			// 
			this->serviceDescriptionLbl->AutoSize = true;
			this->serviceDescriptionLbl->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->serviceDescriptionLbl->Location = System::Drawing::Point(19, 235);
			this->serviceDescriptionLbl->Margin = System::Windows::Forms::Padding(10);
			this->serviceDescriptionLbl->MinimumSize = System::Drawing::Size(0, 23);
			this->serviceDescriptionLbl->Name = L"serviceDescriptionLbl";
			this->serviceDescriptionLbl->Padding = System::Windows::Forms::Padding(3);
			this->serviceDescriptionLbl->Size = System::Drawing::Size(166, 23);
			this->serviceDescriptionLbl->TabIndex = 17;
			this->serviceDescriptionLbl->Text = L"Service description";
			this->serviceDescriptionLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numberOfHoursIn
			// 
			this->numberOfHoursIn->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberOfHoursIn->Location = System::Drawing::Point(205, 106);
			this->numberOfHoursIn->Margin = System::Windows::Forms::Padding(10);
			this->numberOfHoursIn->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 320, 0, 0, 0 });
			this->numberOfHoursIn->Name = L"numberOfHoursIn";
			this->numberOfHoursIn->Size = System::Drawing::Size(150, 23);
			this->numberOfHoursIn->TabIndex = 18;
			this->numberOfHoursIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// rateIn
			// 
			this->rateIn->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rateIn->Location = System::Drawing::Point(205, 149);
			this->rateIn->Margin = System::Windows::Forms::Padding(10);
			this->rateIn->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->rateIn->Name = L"rateIn";
			this->rateIn->Size = System::Drawing::Size(150, 23);
			this->rateIn->TabIndex = 19;
			this->rateIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 381);
			this->Controls->Add(this->rateIn);
			this->Controls->Add(this->numberOfHoursIn);
			this->Controls->Add(this->serviceDescriptionLbl);
			this->Controls->Add(this->pkwiuCodeLbl);
			this->Controls->Add(this->pkwiuCodeIn);
			this->Controls->Add(this->paymentDateResultLbl);
			this->Controls->Add(this->paymentDateLbl);
			this->Controls->Add(this->paymentDateIn);
			this->Controls->Add(this->rateLbl);
			this->Controls->Add(this->numberOfHoursLbl);
			this->Controls->Add(this->invoiceDateLbl);
			this->Controls->Add(this->createBtn);
			this->Controls->Add(this->serviceInput);
			this->Controls->Add(this->invoiceDateIn);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paymentDateIn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberOfHoursIn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rateIn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

	private: void SetInitialValues() {
		paymentDateIn->Value = 10;
		paymentDateResultLbl->Text = invoiceDateIn->Value.AddDays((double)paymentDateIn->Value).ToString("dd.MM.yyyy");
	}
	
	private: System::Void createBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string date = msclr::interop::marshal_as<std::string>(invoiceDateIn->Text);
		std::string numberOfHours = msclr::interop::marshal_as<std::string>(numberOfHoursIn->Text);
		std::string rate = msclr::interop::marshal_as<std::string>(rateIn->Text);
		std::string service = msclr::interop::marshal_as<std::string>(serviceInput->Text);
		std::string pkwiuCode = msclr::interop::marshal_as<std::string>(pkwiuCodeIn->Text);
		std::string paymentDate = msclr::interop::marshal_as<std::string>(paymentDateIn->Text);
		
		createInvoice(date, numberOfHours, rate, service, pkwiuCode, paymentDate);
	}

	private: System::Void invoiceDateIn_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		paymentDateResultLbl->Text = invoiceDateIn->Value.AddDays((double)paymentDateIn->Value).ToString("dd.MM.yyyy");
	}
	private: System::Void paymentDateIn_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		paymentDateResultLbl->Text = invoiceDateIn->Value.AddDays((double)paymentDateIn->Value).ToString("dd.MM.yyyy");
	}
};
}
