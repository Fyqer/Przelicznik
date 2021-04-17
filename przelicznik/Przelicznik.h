//---------------------------------------------------------------------------

#ifndef PrzelicznikH
#define PrzelicznikH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TPrzelicznikJM : public TForm
{
__published:	// IDE-managed Components
        TLabel *Opis1;
        TLabel *Opis2;
        TButton *Button2;
        TRadioButton *RadioP;
        TRadioButton *RadioC;
        TGroupBox *GroupBox2;
        TLabel *Wynik3;
        TButton *Button1;
        TLabel *Opis4;
        TRadioButton *RadioD;
        TRadioButton *RadioT;
        TRadioButton *RadioM;
        TLabel *Wynik4;
        TLabel *Opis3;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Wynik1;
        TLabel *Wynik2;
        TEdit *Edit3;
        TEdit *Edit4;
        TButton *Odswiez;
        TImage *Image1;


        void __fastcall Button1Click(TObject *Sender);

        void __fastcall Button2Click(TObject *Sender);
        void __fastcall OdswiezClick(TObject *Sender);
  


private:	// User declarations
public:		// User declarations
        __fastcall TPrzelicznikJM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrzelicznikJM *PrzelicznikJM;
//---------------------------------------------------------------------------
#endif
