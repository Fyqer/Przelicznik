//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Przelicznik.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrzelicznikJM *PrzelicznikJM;
//---------------------------------------------------------------------------
__fastcall TPrzelicznikJM::TPrzelicznikJM(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------


//---------------------------------------------------------------------------






void __fastcall TPrzelicznikJM::Button1Click(TObject *Sender)
{
      try{
         
               
                   double wpis1 = Edit1->Text.ToDouble();
     double wpis2 = Edit2->Text.ToDouble();
      double wpis3 = Edit3->Text.ToDouble();
       double wpis4 = Edit4->Text.ToDouble();

              if(RadioC->Checked)
      {
    Wynik1->Caption = "Ilosc sekund:"+FloatToStr(wpis1*3600);
    Wynik2->Caption = "Ilosc minut:"+FloatToStr(wpis2*1440);
    Wynik3->Caption = "Ilosc godzin:" +FloatToStr(wpis3*168);
    Wynik4->Caption = "Ilosc minut:" +FloatToStr(wpis4*43800);
      }
  if(RadioP->Checked)
      {
       Wynik1->Caption = "Ilosc km/h:"+FloatToStr(wpis2*1.609);
       Wynik2->Caption = "Ilosc km/s:"+FloatToStr(wpis2*0.00028);
       Wynik3->Caption = "Ilosc Ilosc km/h:" +FloatToStr(wpis3*1.09);
       Wynik4->Caption = "Ilosc Ilosc stop/s:" +FloatToStr(wpis4*0.08);

      }
      if(RadioD->Checked)
      {
        Wynik1->Caption = "Ilosc centymetrow:" +FloatToStr(wpis1*2.54);
    Wynik2->Caption = "Ilosc kilometrow:"+ FloatToStr(wpis2*0.00091);
    Wynik3->Caption = "Ilosc milimetrow:"+ FloatToStr(wpis2*0.001);
    Wynik4->Caption = "Ilosc stop angielskich:"+ FloatToStr(wpis2*0.003);



      }
      if(RadioT->Checked)
      {
   Wynik1->Caption = "Ilosc Fahrenheit'ow:"+FloatToStr(wpis1*33.8);
    Wynik2->Caption = "Ilosc Celsjuszy:"+FloatToStr(wpis2*(-272));
    Wynik3->Caption = "Ilosc kelvin'ow:" +FloatToStr(wpis3*0.55556);
    Wynik4->Caption = "Ilsoc Rankine'ow:" +FloatToStr(wpis4*493.92);



      }
      if(RadioM->Checked)
      {
       Wynik1->Caption = "Ilosc dzuli na sekunde (J/s):"+FloatToStr(wpis1*1000);
    Wynik2->Caption = "Ilosc koni parowych(HP):"+FloatToStr(wpis2*0.986);
    Wynik3->Caption = "Ilosc megwat'ow:" +FloatToStr(wpis3*0.001);
    Wynik4->Caption = "Ilosc watow:" +FloatToStr(wpis4*1000000);




      }





      }


    catch(EZeroDivide & e)
      {
      Wynik1->Caption =" dystans nie moze byc zerowy";
      }
            catch(EConvertError & e)
      {
      Wynik1->Caption =" Zly format";
      }
      catch(...)
      {
         Wynik1 ->Caption="Nieprawidlowe Dane ";}
}



//---------------------------------------------------------------------------


//---------------------------------------------------------------------------



void __fastcall TPrzelicznikJM::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------




//---------------------------------------------------------------------------







void __fastcall TPrzelicznikJM::OdswiezClick(TObject *Sender)
{

                   double wpis1 = Edit1->Text.ToDouble();
     double wpis2 = Edit2->Text.ToDouble();
      double wpis3 = Edit3->Text.ToDouble();
       double wpis4 = Edit4->Text.ToDouble();
           if(RadioC->Checked)
      {

      Opis1->Caption = "Godziny na sekndy";
      Opis2->Caption = "Dni na minuty";
      Opis3->Caption = "Tygodnie na godziny";
      Opis4->Caption = "Miesiace na minuty";

        Wynik1->Caption = "Ilosc sekund:"+FloatToStr(wpis1*3600);
    Wynik2->Caption = "Ilosc minut:"+FloatToStr(wpis2*1440);
    Wynik3->Caption = "Ilosc godzin:" +FloatToStr(wpis3*168);
    Wynik4->Caption = "Ilosc minut:" +FloatToStr(wpis4*43800);
    Image1->Picture->LoadFromFile("0004FING36KEAAIT-C122-F4.jpg");


      }
  if(RadioP->Checked)
      {
        Image1->Picture->LoadFromFile("0009WQLHO3BBOF6J-C122-F4.jpg");
      Opis1->Caption = "mile na godzine na km/h";
      Opis2->Caption = "km/h na km/s";
      Opis3->Caption = "stopy na sekunde na km/h";
      Opis2->Caption = "cale na sekunde na stopy/s";

             Wynik1->Caption = "Ilosc km/h:"+FloatToStr(wpis2*1.609);
       Wynik2->Caption = "Ilosc km/s:"+FloatToStr(wpis2*0.00028);
       Wynik3->Caption = "Ilosc Ilosc km/h:" +FloatToStr(wpis3*1.09);
       Wynik4->Caption = "Ilosc Ilosc stop/s:" +FloatToStr(wpis4*0.08);
      }
      if(RadioD->Checked)
      {
        Image1->Picture->LoadFromFile("gettyimages-1018768030-jpg.jpg");
      Opis1->Caption = "Cal ne centymetr:";
      Opis2->Caption = "Yard na kilometr";
      Opis3->Caption = "Metr na milimetr";
      Opis4->Caption = "Milimetr na stope angielska";

          Wynik1->Caption = "Ilosc centymetrow:" +FloatToStr(wpis1*2.54);
    Wynik2->Caption = "Ilosc kilometrow:"+ FloatToStr(wpis2*0.00091);
    Wynik3->Caption = "Ilosc milimetrow:"+ FloatToStr(wpis2*0.001);
    Wynik4->Caption = "Ilosc stop angielskich:"+ FloatToStr(wpis2*0.003);
      }
      if(RadioT->Checked)
      {
       Image1->Picture->LoadFromFile("aaadad.jpg");
      Opis1->Caption = "Celsjusz na Fahrenheit";
      Opis2->Caption = "Kelvin na Celsjusz";
      Opis3->Caption = "Rankine na Kelvin:";
      Opis4->Caption = "Reaumur na Rrankine:";



         Wynik1->Caption = "Ilosc Fahrenheit'ow:"+FloatToStr(wpis1*33.8);
    Wynik2->Caption = "Ilosc Celsjuszy:"+FloatToStr(wpis2*(-272));
    Wynik3->Caption = "Ilosc kelvin'ow:" +FloatToStr(wpis3*0.55556);
    Wynik4->Caption = "Ilsoc Rankine'ow:" +FloatToStr(wpis4*493.92);
      }
      if(RadioM->Checked)
      {
          Image1->Picture->LoadFromFile("silnik-moc-momnet-obrotowy-header-mobile_tcm-1015-2005014.jpg");
      Opis2->Caption = "Kilowat(kW) na dzul na sekunde(j/s):";
      Opis2->Caption = "kon mechaniczny na kon parowy(hp):";
      Opis2->Caption = "Kilowat na megawat(MW):";
      Opis2->Caption = "Megawat na Wat(W)";


            Wynik1->Caption = "Ilosc dzuli na sekunde (J/s):"+FloatToStr(wpis1*1000);
    Wynik2->Caption = "Ilosc koni parowych(HP):"+FloatToStr(wpis2*0.986);
    Wynik3->Caption = "Ilosc megwat'ow:" +FloatToStr(wpis3*0.001);
    Wynik4->Caption = "Ilosc watow:" +FloatToStr(wpis4*1000000);
      }
}
//---------------------------------------------------------------------------






//---------------------------------------------------------------------------

