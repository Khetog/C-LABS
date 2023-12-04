#pragma once

namespace Project1 {

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 299);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(566, 305);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(373, 132);
			this->button1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 85);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать сетку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 132);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 23);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 192);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 23);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(926, 75);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Дан двумерный массив размерностью NxM. В тех строках где все элементы различны, \r"
				L"\nпоменять местами наибольший и наименьший элементы, после чего вывести \r\nполучив"
				L"шуюся матрицу на экран.";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::
				Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(19, 135);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите N:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(19, 196);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите M:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(51, 262);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Введите массив:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(683, 417);
			this->button2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 46);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Посчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(994, 299);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(566, 305);
			this->dataGridView2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ClientSize = System::Drawing::Size(1582, 620);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm";
			this->Text = L"Дан двумерный массив размерностью NxM. В тех строках гду все элементы различны, \r"
				L"\nпоменять местами наибольший и наименьший элементы, после чего вывести \r\nполучив"
				L"шуюся матрицу на экран.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, m;

		if (Int32::TryParse(textBox1->Text, n)) {
			if (n != 0) {
				if (Int32::TryParse(textBox2->Text, m)) {
					if (m != 0) {
						dataGridView1->RowCount = n;
						dataGridView1->ColumnCount = m;
					}
					else {
						MessageBox::Show("M не может быть равно нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Введите корректное значение для M", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("N не может быть равно нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Введите корректное значение для N", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, m;
		n = System::Convert::ToInt32(textBox1->Text);
		m = System::Convert::ToInt32(textBox2->Text);

		// Динамическое выделение памяти для матрицы
		int** a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}

		// Вызываем функцию reshenie, передаем указатель на матрицу
		reshenie(n, m, a);

		// Очищаем dataGridView2 перед обновлением
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();

		// Устанавливаем количество строк и столбцов в dataGridView2 в соответствии с значениями n и m
		dataGridView2->RowCount = n;
		dataGridView2->ColumnCount = m;

		// Обновляем значения в dataGridView2 после выполнения reshenie
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = a[i][j];
			}
		}
	}

		   // Изменим тип возвращаемого значения функции на void и добавим параметр - указатель на матрицу
		   void reshenie(int n, int m, int** a) {
			   int max_i = 0, max_j = 0;
			   int max = a[0][0], min = a[0][0];
			   for (int i = 0; i < n; i++) {
				   int min_i, min_j, max_i, max_j;
				   for (int j = 0; j < m; j++) {
					   if (a[i][j] < min) {
						   min = a[i][j];
						   min_i = i;
						   min_j = j;
					   }
					   else if (a[i][j] > max) {
						   max = a[i][j];
						   max_i = i;
						   max_j = j;
					   }
				   }
				   if (min != max) {
					   // Используем оператор присваивания = вместо == для обновления значения
					   a[min_i][min_j] = max;
					   a[max_i][max_j] = min;
				   }
			   }
			   // Функция ничего не возвращает (void)
		   }
};
}

