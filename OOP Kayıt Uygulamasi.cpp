#include<iostream>
#include<cstring>

using namespace std;

class Ogrenci
{
  private:
  string tc;
  string ad;
  string soyad;
  int yas;
  string dersAdi;
  int ortalama;

  public:
  
  Ogrenci()

  {
      
      cout<<"Ogrenci sinifinin yapici metodu calisti"<<endl;
      
  }

  void setTc( string tc )

  {
      this->tc = tc;

  }

  void setAd( string ad )

  {
      this->ad = ad;

  }

    void setSoyad( string soyad )
    
    {
        this->soyad = soyad;
    
    }

    void setYas( int yas )
    
    {
        this->yas = yas;
    
    }

    void setDersAdi( string dersAdi )
    
    {
        this->dersAdi = dersAdi;
    
    }


    void setOrtalama( int ortalama )
    
    {
        this->ortalama = ortalama;
    
    }

    string getTc()
    
    {
        return tc;
    
    }

    string getAd()
    
    {
        return ad;
    
    }

    string getSoyad()
    
    {
        return soyad;
    
    }

    int getYas()
    
    {
        return yas;   
    
    }

    string getDersAdi()
    
    {
        return dersAdi;
    
    }

    int getOrtalama()
    
    {
        return ortalama;
    
    }

    void listele( Ogrenci [] ); // burada parametre olarak dizi gönderiyoruz ogrenciden dizi nesnesi alsın diye
    
    
};


void Ogrenci::listele( Ogrenci  ogr [])

{

    int i;

    for(i=0;i<3;i++)

    {

        cout<<i+1<<". Ogrencinin Bilgileri : "<<endl;
        cout<<"Tc : "<<ogr[i].getTc()<<endl;
        cout<<"Ad : "<<ogr[i].getAd()<<endl;
        cout<<"Soyad : "<<ogr[i].getSoyad()<<endl;
        cout<<"Yas : "<<ogr[i].getYas()<<endl;
        cout<<"Ders Adi : "<<ogr[i].getDersAdi()<<endl;
        cout<<"Ortalama : "<<ogr[i].getOrtalama()<<endl;

    }

    cout<<"Ogrenci Bilgi Listeleme islemi tamamlandi"<<endl;


}

 void sirala( Ogrenci ogr [] )

 {

  

    for(int i=0;i<3;i++)
    
    {
      
      int j;

      for(j=0;j<2;j++)
      
      {
       
        if(ogr[j].getAd().compare(ogr[j+1].getAd() ) > 0 )  // j+1 yapacagimiz icin for icinde j ikiden kücük olarak aldım

        // Compare fonksiyonu iki stringi karsilastırmayı saglar!
        
        {
        
          Ogrenci temp = ogr[j];
          ogr[j] = ogr[j+1];
          ogr[j+1] = temp;
        
        }
      
      }


    }
    
    cout<<"Ogrenci Bilgi Listeleme islemi tamamlandi"<<endl;
    
    

    for(int i=0;i<3;i++)

    {
      
      cout<<i+1<<". Ogrencinin Bilgileri : "<<endl;
      cout<<"Tc       : "<<ogr[i].getTc()<<endl;
      cout<<"Ad       : "<<ogr[i].getAd()<<endl;
      cout<<"Soyad    : "<<ogr[i].getSoyad()<<endl;
      cout<<"Yas      : "<<ogr[i].getYas()<<endl;
      cout<<"Ders Adi : "<<ogr[i].getDersAdi()<<endl;
      cout<<"Ortalama : "<<ogr[i].getOrtalama()<<endl;


    }

     cout<<"Ogrenci Bilgileri listeleniyor..."<<endl;


 }

   
   void ara ( Ogrenci ogr [] )

   {
     
     bool sonuc  = false;
     string isim;
     cout<<"Aranacak ogrencinin adini giriniz : ";
     cin>>isim;

     Ogrenci temp;

        for( int i=0;i<3;i++)
    
        {
          
         if (  ogr[i].getAd().compare( isim )  == 0 ) 

         {
            
            temp = ogr[i];
            sonuc = true;
            break;   // döngüden çıkıyoruz


         }
       
       if(sonuc)

       {

        cout<<isim<<"Ismiyle aradiginiz Ogrencinin Bilgileri : "<<endl;
        cout<<"Tc       : "<<ogr[i].getTc()<<endl;
        cout<<"Ad       : "<<ogr[i].getAd()<<endl;
        cout<<"Soyad    : "<<ogr[i].getSoyad()<<endl;
        cout<<"Yas      : "<<ogr[i].getYas()<<endl;
        cout<<"Ders Adi : "<<ogr[i].getDersAdi()<<endl;
        cout<<"Ortalama : "<<ogr[i].getOrtalama()<<endl;

       }

       else

       {

            
            cout<<"Aradiginiz isimde ogrenci bulunamadi"<<endl;
            cout<<endl;
       }
      
      

    }

   

}

   void enYuksekPuan ( Ogrenci ogr [] )

   {
     
     
     int ortalama;
     ortalama=0;
     Ogrenci temp;


     for( int i=0;i<3;i++)

     {

       if( ortalama < ogr[i].getOrtalama() )

       {

          temp = ogr[i];
          ortalama = ogr[i].getOrtalama();


       }

     }

     cout<<"En yuksek puan alan ogrencinin bilgileri : "<<endl;
     cout<<"Tc       : "<<temp.getTc()<<endl;  
     cout<<"Ad       : "<<temp.getAd()<<endl;
     cout<<"Soyad    : "<<temp.getSoyad()<<endl;
     cout<<"Yas      : "<<temp.getYas()<<endl;
     cout<<"Ders Adi : "<<temp.getDersAdi()<<endl;
     cout<<"Ortalama : "<<temp.getOrtalama()<<endl;

     cout<<endl;

   } 


   int main()

{
    

    Ogrenci ogr[3];

    string tc;
    string ad;
    string soyad;
    int yas;
    string dersAdi;
    int ortalama;

    
    
    for(int i=0;i<3;i++)
    {

        cout<<i+1<<". Ogrencinin Bilgilerini Giriniz : "<<endl;
        cout<<"Tc : ";
        cin>>tc;
        cout<<"Ad : ";
        cin>>ad;
        cout<<"Soyad : ";
        cin>>soyad;
        cout<<"Yas : ";
        cin>>yas;
        cout<<"Ders Adi : ";
        cin>>dersAdi;
        cout<<"Ortalama : ";
        cin>>ortalama;

        ogr[i].setTc(tc);
        ogr[i].setAd(ad);
        ogr[i].setSoyad(soyad);
        ogr[i].setYas(yas);
        ogr[i].setDersAdi(dersAdi);
        ogr[i].setOrtalama(ortalama);

    }

    cout<<"Kayit islemi tamamlandi"<<endl;
    cout<<"Ogrenci Bilgileri listeleniyor..."<<endl;
    ogr[0].listele(ogr);
    cout<<endl;
    sirala(ogr);
    cout<<endl;
    ara(ogr);
    cout<<endl;
    enYuksekPuan(ogr);




    return 0;

}