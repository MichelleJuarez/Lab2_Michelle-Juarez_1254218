#pragma once
#include <stdio.h>

namespace Lab2MichelleJuarez1254218 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tabla_tortuga;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipo_mov;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Porcentaje;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cant_movimiento;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ tabla_liebre;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tip_mov;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ porcentaje_l;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cant_movi;
	private: System::Windows::Forms::DataGridView^ pos_T;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column38;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column39;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column42;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column44;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column45;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column46;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column47;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column48;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column49;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column50;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column51;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column52;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column53;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column54;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column55;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column56;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column57;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column58;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column59;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column60;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column61;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column62;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column63;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column64;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column65;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column66;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column67;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column68;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column69;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column70;
private: System::Windows::Forms::DataGridView^ pos_L;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column71;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column72;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column73;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column74;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column76;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column77;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column78;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column79;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column80;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column81;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column82;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column83;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column84;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column85;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column86;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column87;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column88;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column89;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column90;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column91;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column92;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column93;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column94;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column95;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column96;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column97;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column98;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column99;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column101;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column102;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column103;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column104;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column105;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column106;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column107;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column108;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column109;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column110;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column111;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column112;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column113;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column114;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column115;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column116;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column117;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column118;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column119;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column120;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column121;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column122;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column123;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column124;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column125;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column126;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column127;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column128;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column129;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column130;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column131;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column132;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column133;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column134;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column135;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column136;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column137;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column138;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column139;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column140;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label3;

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
			this->tabla_tortuga = (gcnew System::Windows::Forms::DataGridView());
			this->tipo_mov = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Porcentaje = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cant_movimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabla_liebre = (gcnew System::Windows::Forms::DataGridView());
			this->tip_mov = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->porcentaje_l = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cant_movi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pos_T = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column62 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column63 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column64 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column65 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column66 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column67 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column68 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column69 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column70 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pos_L = (gcnew System::Windows::Forms::DataGridView());
			this->Column71 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column72 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column73 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column74 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column76 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column77 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column78 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column79 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column80 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column81 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column82 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column83 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column84 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column85 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column86 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column87 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column88 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column89 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column90 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column91 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column92 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column93 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column94 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column95 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column96 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column97 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column98 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column99 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column101 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column102 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column103 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column104 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column105 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column106 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column107 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column108 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column109 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column110 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column111 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column112 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column113 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column114 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column115 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column116 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column117 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column118 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column119 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column120 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column121 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column122 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column123 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column124 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column125 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column126 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column127 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column128 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column129 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column130 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column131 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column132 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column133 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column134 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column135 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column136 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column137 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column138 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column139 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column140 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_tortuga))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_liebre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pos_T))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pos_L))->BeginInit();
			this->SuspendLayout();
			// 
			// tabla_tortuga
			// 
			this->tabla_tortuga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabla_tortuga->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->tipo_mov,
					this->Porcentaje, this->cant_movimiento
			});
			this->tabla_tortuga->Location = System::Drawing::Point(134, 57);
			this->tabla_tortuga->Name = L"tabla_tortuga";
			this->tabla_tortuga->Size = System::Drawing::Size(348, 246);
			this->tabla_tortuga->TabIndex = 0;
			// 
			// tipo_mov
			// 
			this->tipo_mov->HeaderText = L"Tipo de movimiento";
			this->tipo_mov->Name = L"tipo_mov";
			// 
			// Porcentaje
			// 
			this->Porcentaje->HeaderText = L"Porcentaje del tiempo";
			this->Porcentaje->Name = L"Porcentaje";
			// 
			// cant_movimiento
			// 
			this->cant_movimiento->HeaderText = L"Movimiento real";
			this->cant_movimiento->Name = L"cant_movimiento";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tortuga";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(572, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Liebre";
			// 
			// tabla_liebre
			// 
			this->tabla_liebre->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabla_liebre->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->tip_mov,
					this->porcentaje_l, this->cant_movi
			});
			this->tabla_liebre->Location = System::Drawing::Point(675, 57);
			this->tabla_liebre->Name = L"tabla_liebre";
			this->tabla_liebre->Size = System::Drawing::Size(350, 246);
			this->tabla_liebre->TabIndex = 3;
			// 
			// tip_mov
			// 
			this->tip_mov->HeaderText = L"Tipo de movimiento";
			this->tip_mov->Name = L"tip_mov";
			// 
			// porcentaje_l
			// 
			this->porcentaje_l->HeaderText = L"Porcentaje del tiempo";
			this->porcentaje_l->Name = L"porcentaje_l";
			// 
			// cant_movi
			// 
			this->cant_movi->HeaderText = L"Movimiento real";
			this->cant_movi->Name = L"cant_movi";
			// 
			// pos_T
			// 
			this->pos_T->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->pos_T->ColumnHeadersVisible = false;
			this->pos_T->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(70) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11,
					this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19,
					this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, this->Column27,
					this->Column28, this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34, this->Column35,
					this->Column36, this->Column37, this->Column38, this->Column39, this->Column40, this->Column41, this->Column42, this->Column43,
					this->Column44, this->Column45, this->Column46, this->Column47, this->Column48, this->Column49, this->Column50, this->Column51,
					this->Column52, this->Column53, this->Column54, this->Column55, this->Column56, this->Column57, this->Column58, this->Column59,
					this->Column60, this->Column61, this->Column62, this->Column63, this->Column64, this->Column65, this->Column66, this->Column67,
					this->Column68, this->Column69, this->Column70
			});
			this->pos_T->Location = System::Drawing::Point(32, 340);
			this->pos_T->Name = L"pos_T";
			this->pos_T->Size = System::Drawing::Size(984, 42);
			this->pos_T->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column9";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column10";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column11";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Column12";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Column13";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Column14";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Column15";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Column16";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Column17";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Column18";
			this->Column18->Name = L"Column18";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Column19";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Column20";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Column21";
			this->Column21->Name = L"Column21";
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Column22";
			this->Column22->Name = L"Column22";
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Column23";
			this->Column23->Name = L"Column23";
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Column24";
			this->Column24->Name = L"Column24";
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Column25";
			this->Column25->Name = L"Column25";
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Column26";
			this->Column26->Name = L"Column26";
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Column27";
			this->Column27->Name = L"Column27";
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Column28";
			this->Column28->Name = L"Column28";
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"Column29";
			this->Column29->Name = L"Column29";
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"Column30";
			this->Column30->Name = L"Column30";
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Column31";
			this->Column31->Name = L"Column31";
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Column32";
			this->Column32->Name = L"Column32";
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Column33";
			this->Column33->Name = L"Column33";
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Column34";
			this->Column34->Name = L"Column34";
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Column35";
			this->Column35->Name = L"Column35";
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Column36";
			this->Column36->Name = L"Column36";
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Column37";
			this->Column37->Name = L"Column37";
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"Column38";
			this->Column38->Name = L"Column38";
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Column39";
			this->Column39->Name = L"Column39";
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"Column40";
			this->Column40->Name = L"Column40";
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"Column41";
			this->Column41->Name = L"Column41";
			// 
			// Column42
			// 
			this->Column42->HeaderText = L"Column42";
			this->Column42->Name = L"Column42";
			// 
			// Column43
			// 
			this->Column43->HeaderText = L"Column43";
			this->Column43->Name = L"Column43";
			// 
			// Column44
			// 
			this->Column44->HeaderText = L"Column44";
			this->Column44->Name = L"Column44";
			// 
			// Column45
			// 
			this->Column45->HeaderText = L"Column45";
			this->Column45->Name = L"Column45";
			// 
			// Column46
			// 
			this->Column46->HeaderText = L"Column46";
			this->Column46->Name = L"Column46";
			// 
			// Column47
			// 
			this->Column47->HeaderText = L"Column47";
			this->Column47->Name = L"Column47";
			// 
			// Column48
			// 
			this->Column48->HeaderText = L"Column48";
			this->Column48->Name = L"Column48";
			// 
			// Column49
			// 
			this->Column49->HeaderText = L"Column49";
			this->Column49->Name = L"Column49";
			// 
			// Column50
			// 
			this->Column50->HeaderText = L"Column50";
			this->Column50->Name = L"Column50";
			// 
			// Column51
			// 
			this->Column51->HeaderText = L"Column51";
			this->Column51->Name = L"Column51";
			// 
			// Column52
			// 
			this->Column52->HeaderText = L"Column52";
			this->Column52->Name = L"Column52";
			// 
			// Column53
			// 
			this->Column53->HeaderText = L"Column53";
			this->Column53->Name = L"Column53";
			// 
			// Column54
			// 
			this->Column54->HeaderText = L"Column54";
			this->Column54->Name = L"Column54";
			// 
			// Column55
			// 
			this->Column55->HeaderText = L"Column55";
			this->Column55->Name = L"Column55";
			// 
			// Column56
			// 
			this->Column56->HeaderText = L"Column56";
			this->Column56->Name = L"Column56";
			// 
			// Column57
			// 
			this->Column57->HeaderText = L"Column57";
			this->Column57->Name = L"Column57";
			// 
			// Column58
			// 
			this->Column58->HeaderText = L"Column58";
			this->Column58->Name = L"Column58";
			// 
			// Column59
			// 
			this->Column59->HeaderText = L"Column59";
			this->Column59->Name = L"Column59";
			// 
			// Column60
			// 
			this->Column60->HeaderText = L"Column60";
			this->Column60->Name = L"Column60";
			// 
			// Column61
			// 
			this->Column61->HeaderText = L"Column61";
			this->Column61->Name = L"Column61";
			// 
			// Column62
			// 
			this->Column62->HeaderText = L"Column62";
			this->Column62->Name = L"Column62";
			// 
			// Column63
			// 
			this->Column63->HeaderText = L"Column63";
			this->Column63->Name = L"Column63";
			// 
			// Column64
			// 
			this->Column64->HeaderText = L"Column64";
			this->Column64->Name = L"Column64";
			// 
			// Column65
			// 
			this->Column65->HeaderText = L"Column65";
			this->Column65->Name = L"Column65";
			// 
			// Column66
			// 
			this->Column66->HeaderText = L"Column66";
			this->Column66->Name = L"Column66";
			// 
			// Column67
			// 
			this->Column67->HeaderText = L"Column67";
			this->Column67->Name = L"Column67";
			// 
			// Column68
			// 
			this->Column68->HeaderText = L"Column68";
			this->Column68->Name = L"Column68";
			// 
			// Column69
			// 
			this->Column69->HeaderText = L"Column69";
			this->Column69->Name = L"Column69";
			// 
			// Column70
			// 
			this->Column70->HeaderText = L"Column70";
			this->Column70->Name = L"Column70";
			// 
			// pos_L
			// 
			this->pos_L->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->pos_L->ColumnHeadersVisible = false;
			this->pos_L->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(70) {
				this->Column71, this->Column72,
					this->Column73, this->Column74, this->Column75, this->Column76, this->Column77, this->Column78, this->Column79, this->Column80,
					this->Column81, this->Column82, this->Column83, this->Column84, this->Column85, this->Column86, this->Column87, this->Column88,
					this->Column89, this->Column90, this->Column91, this->Column92, this->Column93, this->Column94, this->Column95, this->Column96,
					this->Column97, this->Column98, this->Column99, this->Column100, this->Column101, this->Column102, this->Column103, this->Column104,
					this->Column105, this->Column106, this->Column107, this->Column108, this->Column109, this->Column110, this->Column111, this->Column112,
					this->Column113, this->Column114, this->Column115, this->Column116, this->Column117, this->Column118, this->Column119, this->Column120,
					this->Column121, this->Column122, this->Column123, this->Column124, this->Column125, this->Column126, this->Column127, this->Column128,
					this->Column129, this->Column130, this->Column131, this->Column132, this->Column133, this->Column134, this->Column135, this->Column136,
					this->Column137, this->Column138, this->Column139, this->Column140
			});
			this->pos_L->Location = System::Drawing::Point(32, 388);
			this->pos_L->Name = L"pos_L";
			this->pos_L->Size = System::Drawing::Size(984, 42);
			this->pos_L->TabIndex = 5;
			// 
			// Column71
			// 
			this->Column71->HeaderText = L"Column71";
			this->Column71->Name = L"Column71";
			// 
			// Column72
			// 
			this->Column72->HeaderText = L"Column72";
			this->Column72->Name = L"Column72";
			// 
			// Column73
			// 
			this->Column73->HeaderText = L"Column73";
			this->Column73->Name = L"Column73";
			// 
			// Column74
			// 
			this->Column74->HeaderText = L"Column74";
			this->Column74->Name = L"Column74";
			// 
			// Column75
			// 
			this->Column75->HeaderText = L"Column75";
			this->Column75->Name = L"Column75";
			// 
			// Column76
			// 
			this->Column76->HeaderText = L"Column76";
			this->Column76->Name = L"Column76";
			// 
			// Column77
			// 
			this->Column77->HeaderText = L"Column77";
			this->Column77->Name = L"Column77";
			// 
			// Column78
			// 
			this->Column78->HeaderText = L"Column78";
			this->Column78->Name = L"Column78";
			// 
			// Column79
			// 
			this->Column79->HeaderText = L"Column79";
			this->Column79->Name = L"Column79";
			// 
			// Column80
			// 
			this->Column80->HeaderText = L"Column80";
			this->Column80->Name = L"Column80";
			// 
			// Column81
			// 
			this->Column81->HeaderText = L"Column81";
			this->Column81->Name = L"Column81";
			// 
			// Column82
			// 
			this->Column82->HeaderText = L"Column82";
			this->Column82->Name = L"Column82";
			// 
			// Column83
			// 
			this->Column83->HeaderText = L"Column83";
			this->Column83->Name = L"Column83";
			// 
			// Column84
			// 
			this->Column84->HeaderText = L"Column84";
			this->Column84->Name = L"Column84";
			// 
			// Column85
			// 
			this->Column85->HeaderText = L"Column85";
			this->Column85->Name = L"Column85";
			// 
			// Column86
			// 
			this->Column86->HeaderText = L"Column86";
			this->Column86->Name = L"Column86";
			// 
			// Column87
			// 
			this->Column87->HeaderText = L"Column87";
			this->Column87->Name = L"Column87";
			// 
			// Column88
			// 
			this->Column88->HeaderText = L"Column88";
			this->Column88->Name = L"Column88";
			// 
			// Column89
			// 
			this->Column89->HeaderText = L"Column89";
			this->Column89->Name = L"Column89";
			// 
			// Column90
			// 
			this->Column90->HeaderText = L"Column90";
			this->Column90->Name = L"Column90";
			// 
			// Column91
			// 
			this->Column91->HeaderText = L"Column91";
			this->Column91->Name = L"Column91";
			// 
			// Column92
			// 
			this->Column92->HeaderText = L"Column92";
			this->Column92->Name = L"Column92";
			// 
			// Column93
			// 
			this->Column93->HeaderText = L"Column93";
			this->Column93->Name = L"Column93";
			// 
			// Column94
			// 
			this->Column94->HeaderText = L"Column94";
			this->Column94->Name = L"Column94";
			// 
			// Column95
			// 
			this->Column95->HeaderText = L"Column95";
			this->Column95->Name = L"Column95";
			// 
			// Column96
			// 
			this->Column96->HeaderText = L"Column96";
			this->Column96->Name = L"Column96";
			// 
			// Column97
			// 
			this->Column97->HeaderText = L"Column97";
			this->Column97->Name = L"Column97";
			// 
			// Column98
			// 
			this->Column98->HeaderText = L"Column98";
			this->Column98->Name = L"Column98";
			// 
			// Column99
			// 
			this->Column99->HeaderText = L"Column99";
			this->Column99->Name = L"Column99";
			// 
			// Column100
			// 
			this->Column100->HeaderText = L"Column100";
			this->Column100->Name = L"Column100";
			// 
			// Column101
			// 
			this->Column101->HeaderText = L"Column101";
			this->Column101->Name = L"Column101";
			// 
			// Column102
			// 
			this->Column102->HeaderText = L"Column102";
			this->Column102->Name = L"Column102";
			// 
			// Column103
			// 
			this->Column103->HeaderText = L"Column103";
			this->Column103->Name = L"Column103";
			// 
			// Column104
			// 
			this->Column104->HeaderText = L"Column104";
			this->Column104->Name = L"Column104";
			// 
			// Column105
			// 
			this->Column105->HeaderText = L"Column105";
			this->Column105->Name = L"Column105";
			// 
			// Column106
			// 
			this->Column106->HeaderText = L"Column106";
			this->Column106->Name = L"Column106";
			// 
			// Column107
			// 
			this->Column107->HeaderText = L"Column107";
			this->Column107->Name = L"Column107";
			// 
			// Column108
			// 
			this->Column108->HeaderText = L"Column108";
			this->Column108->Name = L"Column108";
			// 
			// Column109
			// 
			this->Column109->HeaderText = L"Column109";
			this->Column109->Name = L"Column109";
			// 
			// Column110
			// 
			this->Column110->HeaderText = L"Column110";
			this->Column110->Name = L"Column110";
			// 
			// Column111
			// 
			this->Column111->HeaderText = L"Column111";
			this->Column111->Name = L"Column111";
			// 
			// Column112
			// 
			this->Column112->HeaderText = L"Column112";
			this->Column112->Name = L"Column112";
			// 
			// Column113
			// 
			this->Column113->HeaderText = L"Column113";
			this->Column113->Name = L"Column113";
			// 
			// Column114
			// 
			this->Column114->HeaderText = L"Column114";
			this->Column114->Name = L"Column114";
			// 
			// Column115
			// 
			this->Column115->HeaderText = L"Column115";
			this->Column115->Name = L"Column115";
			// 
			// Column116
			// 
			this->Column116->HeaderText = L"Column116";
			this->Column116->Name = L"Column116";
			// 
			// Column117
			// 
			this->Column117->HeaderText = L"Column117";
			this->Column117->Name = L"Column117";
			// 
			// Column118
			// 
			this->Column118->HeaderText = L"Column118";
			this->Column118->Name = L"Column118";
			// 
			// Column119
			// 
			this->Column119->HeaderText = L"Column119";
			this->Column119->Name = L"Column119";
			// 
			// Column120
			// 
			this->Column120->HeaderText = L"Column120";
			this->Column120->Name = L"Column120";
			// 
			// Column121
			// 
			this->Column121->HeaderText = L"Column121";
			this->Column121->Name = L"Column121";
			// 
			// Column122
			// 
			this->Column122->HeaderText = L"Column122";
			this->Column122->Name = L"Column122";
			// 
			// Column123
			// 
			this->Column123->HeaderText = L"Column123";
			this->Column123->Name = L"Column123";
			// 
			// Column124
			// 
			this->Column124->HeaderText = L"Column124";
			this->Column124->Name = L"Column124";
			// 
			// Column125
			// 
			this->Column125->HeaderText = L"Column125";
			this->Column125->Name = L"Column125";
			// 
			// Column126
			// 
			this->Column126->HeaderText = L"Column126";
			this->Column126->Name = L"Column126";
			// 
			// Column127
			// 
			this->Column127->HeaderText = L"Column127";
			this->Column127->Name = L"Column127";
			// 
			// Column128
			// 
			this->Column128->HeaderText = L"Column128";
			this->Column128->Name = L"Column128";
			// 
			// Column129
			// 
			this->Column129->HeaderText = L"Column129";
			this->Column129->Name = L"Column129";
			// 
			// Column130
			// 
			this->Column130->HeaderText = L"Column130";
			this->Column130->Name = L"Column130";
			// 
			// Column131
			// 
			this->Column131->HeaderText = L"Column131";
			this->Column131->Name = L"Column131";
			// 
			// Column132
			// 
			this->Column132->HeaderText = L"Column132";
			this->Column132->Name = L"Column132";
			// 
			// Column133
			// 
			this->Column133->HeaderText = L"Column133";
			this->Column133->Name = L"Column133";
			// 
			// Column134
			// 
			this->Column134->HeaderText = L"Column134";
			this->Column134->Name = L"Column134";
			// 
			// Column135
			// 
			this->Column135->HeaderText = L"Column135";
			this->Column135->Name = L"Column135";
			// 
			// Column136
			// 
			this->Column136->HeaderText = L"Column136";
			this->Column136->Name = L"Column136";
			// 
			// Column137
			// 
			this->Column137->HeaderText = L"Column137";
			this->Column137->Name = L"Column137";
			// 
			// Column138
			// 
			this->Column138->HeaderText = L"Column138";
			this->Column138->Name = L"Column138";
			// 
			// Column139
			// 
			this->Column139->HeaderText = L"Column139";
			this->Column139->Name = L"Column139";
			// 
			// Column140
			// 
			this->Column140->HeaderText = L"Column140";
			this->Column140->Name = L"Column140";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Purple;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(425, 449);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 44);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Comenzar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(421, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L".";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1063, 517);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pos_L);
			this->Controls->Add(this->pos_T);
			this->Controls->Add(this->tabla_liebre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabla_tortuga);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_tortuga))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_liebre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pos_T))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pos_L))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	//Al presionar el boton la carrera tiene que comenzar y se tienen que mostrar la tabla de los movimientos.
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "¡BANG! ¡Y ARRANCAN!";
		int pos[70];
		int posT=pos[0], posL=pos[0], *pos_T=&posT,*pos_L=&posL;

		//numeros random
		Random^ random = gcnew Random();
		int num = random->Next(0, 10);
		Random^ random2 = gcnew Random();
		int num2 = random2->Next(0, 10);
		*pos_T = num;
		*pos_L = num2;
		int porcentaje;

		//Tortuga
		for (int i = 0; i<7 ; i++)
		{
			tabla_tortuga->Rows->Add();
			for (int j = 0; j<3; j++)
			{
				//Tipo de movimiento
				if (j==0)
				{
					
					
					if (*pos_T == 0)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = "Se quedó dormido";
					}
					else if (0 < *pos_T && *pos_T< 6)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = "Paso veloz";
					}
					else if (5< *pos_T&& *pos_T<8)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = "Resbalon";
					}
					else if (7<*pos_T && *pos_T<11)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = "Paso lento";
					}
					
				}
				//Porcentaje
				if (j == 1)
				{
					porcentaje = *pos_T * 10;
					if (*pos_T == 0)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje)+"%";
					}
					else if (0 < *pos_T && *pos_T < 6)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
					else if (5 < *pos_T && *pos_T< 8)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
					else if (7 < *pos_T && *pos_T < 11)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
				}
				//cantidad de movimiento
				if (j == 2)
				{
					int cant_mov = *pos_T;
					if (*pos_T == 0)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					else if (0 < *pos_T && *pos_T < 6)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					else if (5 < *pos_T && *pos_T < 8)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					else if (7 < *pos_T && *pos_T < 11)
					{
						tabla_tortuga->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
				}
				//*pos_T = random->Next(0,10);
				pos_T++;
			}
		}

		//Liebre
		for (int i = 0; i < 7; i++)
		{
			tabla_liebre->Rows->Add();
			for (int j = 0; j < 3; j++)
			{
				//Tipo de movimiento
				if (j == 0)
				{

					if (*pos_L == 0)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = "Se quedó dormido";
					}
					if (0 < *pos_L && *pos_L < 6)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = "Paso veloz";
					}
					if (5 < *pos_L && *pos_L < 8)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = "Resbalon";
					}
					if (7 < *pos_L && *pos_L < 11)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = "Paso lento";
					}
					

				}
				//Porcentaje
				if (j == 1)
				{
					porcentaje = *pos_L * 10;
					if (*pos_L == 0)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
					if (0 < *pos_L && *pos_L < 6)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
					if (5 < *pos_L && *pos_L < 8)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}
					if (7 < *pos_L && *pos_L < 11)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(porcentaje) + "%";
					}

				}
				//cantidad de movimiento
				if (j == 2)
				{
					int cant_mov = *pos_L;
					if (*pos_L == 0)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					if (0 < *pos_L && *pos_L < 6)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					if (5 < *pos_L && *pos_L < 8)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}
					if (7 < *pos_L && *pos_L < 11)
					{
						tabla_liebre->Rows[i]->Cells[j]->Value = System::Convert::ToString(cant_mov);
					}


				}
				//*pos_L= random->Next(0,10);

				pos_L++;
			}
		}

		if (*pos_L == *pos_T)
		{
			System::Windows::Forms::MessageBox::Show("OUCH!");
		}

		if (posT == pos[69] && posL == pos[69])
		{
			System::Windows::Forms::MessageBox::Show("Es un empate");
		}

	}
};
	//cPulsoReloj = iteracion del ciclo
	//tiene que ser un aleatorio de 1 a 10
	//manera de llamar aleatorios -> Random^ random = gcnew Random();
	//int num=random->Next(1,70) //es el parametro del minimo y el maximo
	
	//.cpp
	//System::Random^ random = gcnew System::Random();
	//int num=random->Next(1,70)
}