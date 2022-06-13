#include <iostream>
using namespace std;

int main() {
    int secim1;
    double x1, x2, x3;
    cout<<"1. Bilim Uygulamaları"<<endl
    <<"2. Seçmeli Matematik"<<endl
    <<"3. Seçmeli İngilizce"<<endl
    <<"4. Kur'an'ı Kerim"<<endl
    <<"5. Okuma Becerileri"<<endl
    <<"6. Yazma Becerileri"<<endl
    <<"7. Seçmeli Müzik"<<endl
    <<"8. Seçmeli Görsel Sanatlar"<<endl
    <<"9. Seçmeli Beden"<<endl
    <<"10. Halk Kültürü"<<endl
    <<"1. seçmeli dersiniz hangisiyse seçiniz."<<endl;
    cin>>secim1;
    switch (secim1){
        case 1:
            double buyazili1,buyazili2,buperformans_ortalamasi,buders_ortalamasi,buderssaati;
            cout <<"Bilim Uygulamaları Yazılı 1:"<<endl;
            cin >>buyazili1;
            cout <<"Bilim Uygulamaları Yazılı 2:"<<endl;
            cin >>buyazili2;
            cout <<"Bilim Uygulamaları Performans Ortalaması:"<<endl;
            cin >>buperformans_ortalamasi;
            cout<<"Bilim Uygulamaları Ders Saati:"<<endl;
            cin >>buderssaati;
            x1=buderssaati;
            x2=buders_ortalamasi=(buyazili1+buyazili2+buperformans_ortalamasi)/3;
            cout <<"Bilim Uygulamaları Ders Ortalaması:"<<buders_ortalamasi<<endl;
            break;
        case 2:
            double sayazili1,sayazili2,saperformans_ortalamasi,saders_ortalamasi,saderssaati;
            cout <<"Seçmeli Matematik Yazılı 1:"<<endl;
            cin >>sayazili1;
            cout <<"Seçmeli Matematik Yazılı 2:"<<endl;
            cin >>sayazili2;
            cout <<"Seçmeli Matematik Performans Ortalaması:"<<endl;
            cin >>saperformans_ortalamasi;
            cout<<"Seçmeli Matematik Ders Saati:"<<endl;
            cin >>saderssaati;
            x1=saderssaati;
            x2=saders_ortalamasi=(sayazili1+sayazili2+saperformans_ortalamasi)/3;
            cout <<"Seçmeli Matematik Ders Ortalaması:"<<saders_ortalamasi<<endl;
            break;
        case 3:
            double siyazili1,siyazili2,siperformans_ortalamasi,siders_ortalamasi,siderssaati;
            cout <<"Seçmeli İngilizce Yazılı 1:"<<endl;
            cin >>siyazili1;
            cout <<"Seçmeli İngilizce Yazılı 2:"<<endl;
            cin >>siyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>siperformans_ortalamasi;
            cout<<"Seçmeli İngilizce Ders Saati:"<<endl;
            cin >>siderssaati;
            x1=siderssaati;
            x2=siders_ortalamasi=(siyazili1+siyazili2+siperformans_ortalamasi)/3;
            cout <<"Seçmeli İngilizce Ders Ortalaması:"<<siders_ortalamasi<<endl;
            break;
        case 4:
            double kkyazili1,kkyazili2,kkperformans_ortalamasi,kkders_ortalamasi,kkderssaati;
            cout <<"Kur'an'ı Kerim Yazılı 1:"<<endl;
            cin >>kkyazili1;
            cout <<"Kur'an'ı Kerim Yazılı 2:"<<endl;
            cin >>kkyazili2;
            cout <<"Kur'an'ı Kerim Performans Ortalaması:"<<endl;
            cin >>kkperformans_ortalamasi;
            cout<<"Kur'an'ı Kerim Ders Saati:"<<endl;
            cin >>kkderssaati;
            x1=kkderssaati;
            x2=kkders_ortalamasi=(kkyazili1+kkyazili2+kkperformans_ortalamasi)/3;
            cout <<"Kur'an'ı Kerim Ders Ortalaması:"<<kkders_ortalamasi<<endl;
            break;
        case 5:
            double obyazili1,obyazili2,obperformans_ortalamasi,obders_ortalamasi,obderssaati;
            cout <<"Okuma Becerileri Yazılı 1:"<<endl;
            cin >>obyazili1;
            cout <<"Okuma Becerileri Yazılı 2:"<<endl;
            cin >>obyazili2;
            cout <<"Okuma Becerileri Performans Ortalaması:"<<endl;
            cin >>obperformans_ortalamasi;
            cout<<"Okuma Becerileri Ders Saati:"<<endl;
            cin >>obderssaati;
            x1=obderssaati;
            x2=obders_ortalamasi=(obyazili1+obyazili2+obperformans_ortalamasi)/3;
            cout <<"Okuma Becerileri Ders Ortalaması:"<<obders_ortalamasi<<endl;
            break;
        case 6:
            double ybyazili1,ybyazili2,ybperformans_ortalamasi,ybders_ortalamasi,ybderssaati;
            cout <<"Yazma Becerileri Yazılı 1:"<<endl;
            cin >>ybyazili1;
            cout <<"Yazma Becerileri Yazılı 2:"<<endl;
            cin >>ybyazili2;
            cout <<"Yazma Becerileri Performans Ortalaması:"<<endl;
            cin >>ybperformans_ortalamasi;
            cout<<"Yazma Becerileri Ders Saati:"<<endl;
            cin >>ybderssaati;
            x1=ybderssaati;
            x2=ybders_ortalamasi=(ybyazili1+ybyazili2+ybperformans_ortalamasi)/3;
            cout <<"Yazma Becerileri Ders Ortalaması:"<<ybders_ortalamasi<<endl;
            break;
        case 7:
            double smyazili1,smyazili2,smperformans_ortalamasi,smders_ortalamasi,smderssaati;
            cout <<"Seçmeli Müzik Yazılı 1:"<<endl;
            cin >>smyazili1;
            cout <<"Seçmeli Müzik Yazılı 2:"<<endl;
            cin >>smyazili2;
            cout <<"Seçmeli Müzik Performans Ortalaması:"<<endl;
            cin >>smperformans_ortalamasi;
            cout<<"Seçmeli Müzik Ders Saati:"<<endl;
            cin >>smderssaati;
            x1=smderssaati;
            x2=smders_ortalamasi=(smyazili1+smyazili2+smperformans_ortalamasi)/3;
            cout <<"Seçmeli Müzik Ders Ortalaması:"<<smders_ortalamasi<<endl;
            break;
        case 8:
            double sgyazili1,sgyazili2,sgperformans_ortalamasi,sgders_ortalamasi,sgderssaati;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 1:"<<endl;
            cin >>sgyazili1;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 2:"<<endl;
            cin >>sgyazili2;
            cout <<"Seçmeli Görsel Sanatlar Performans Ortalaması:"<<endl;
            cin >>sgperformans_ortalamasi;
            cout<<"Seçmeli Görsel Sanatlar Ders Saati:"<<endl;
            cin >>sgderssaati;
            x1=sgderssaati;
            x2=sgders_ortalamasi=(sgyazili1+sgyazili2+sgperformans_ortalamasi)/3;
            cout <<"Seçmeli Görsel Sanatlar Ders Ortalaması:"<<sgders_ortalamasi<<endl;
            break;
        case 9:
            double sbyazili1,sbyazili2,sbperformans_ortalamasi,sbders_ortalamasi,sbderssaati;
            cout <<"Seçmeli Beden Yazılı 1:"<<endl;
            cin >>sbyazili1;
            cout <<"Seçmeli Beden Yazılı 2:"<<endl;
            cin >>sbyazili2;
            cout <<"Seçmeli Beden Performans Ortalaması:"<<endl;
            cin >>sbperformans_ortalamasi;
            cout<<"Seçmeli Beden Ders Saati:"<<endl;
            cin >>sbderssaati;
            x1=sbderssaati;
            x2=sbders_ortalamasi=(sbyazili1+sbyazili2+sbperformans_ortalamasi)/3;
            cout <<"Seçmeli Beden Ders Ortalaması:"<<sbders_ortalamasi<<endl;
            break;
        case 10:
            double hkyazili1,hkyazili2,hkperformans_ortalamasi,hkders_ortalamasi,hkderssaati;
            cout <<"Halk Kültürü Yazılı 1:"<<endl;
            cin >>hkyazili1;
            cout <<"Halk Kültürü Yazılı 2:"<<endl;
            cin >>hkyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>hkperformans_ortalamasi;
            cout<<"Halk Kültürü Ders Saati:"<<endl;
            cin >>hkderssaati;
            x1=hkderssaati;
            x2=hkders_ortalamasi=(hkyazili1+hkyazili2+hkperformans_ortalamasi)/3;
            cout <<"Halk Kültürü Ders Ortalaması:"<<hkders_ortalamasi<<endl;
            break;
    }



    int secim2;
    double y1, y2, y3;
    cout<<"1. Bilim Uygulamaları"<<endl
    <<"2. Seçmeli Matematik"<<endl
    <<"3. Seçmeli İngilizce"<<endl
    <<"4. Kur'an'ı Kerim"<<endl
    <<"5. Okuma Becerileri"<<endl
    <<"6. Yazma Becerileri"<<endl
    <<"7. Seçmeli Müzik"<<endl
    <<"8. Seçmeli Görsel Sanatlar"<<endl
    <<"9. Seçmeli Beden"<<endl
    <<"10. Halk Kültürü"<<endl
    <<"2. seçmeli dersiniz hangisiyse seçiniz."<<endl;
    cin>>secim2;
    switch (secim2){
        case 1:
            double buyazili1,buyazili2,buperformans_ortalamasi,buders_ortalamasi,buderssaati;
            cout <<"Bilim Uygulamaları Yazılı 1:"<<endl;
            cin >>buyazili1;
            cout <<"Bilim Uygulamaları Yazılı 2:"<<endl;
            cin >>buyazili2;
            cout <<"Bilim Uygulamaları Performans Ortalaması:"<<endl;
            cin >>buperformans_ortalamasi;
            cout<<"Bilim Uygulamaları Ders Saati:"<<endl;
            cin >>buderssaati;
            y1=buderssaati;
            y2=buders_ortalamasi=(buyazili1+buyazili2+buperformans_ortalamasi)/3;
            cout <<"Bilim Uygulamaları Ders Ortalaması:"<<buders_ortalamasi<<endl;
            break;
        case 2:
            double sayazili1,sayazili2,saperformans_ortalamasi,saders_ortalamasi,saderssaati;
            cout <<"Seçmeli Matematik Yazılı 1:"<<endl;
            cin >>sayazili1;
            cout <<"Seçmeli Matematik Yazılı 2:"<<endl;
            cin >>sayazili2;
            cout <<"Seçmeli Matematik Performans Ortalaması:"<<endl;
            cin >>saperformans_ortalamasi;
            cout<<"Seçmeli Matematik Ders Saati:"<<endl;
            cin >>saderssaati;
            y1=saderssaati;
            y2=saders_ortalamasi=(sayazili1+sayazili2+saperformans_ortalamasi)/3;
            cout <<"Seçmeli Matematik Ders Ortalaması:"<<saders_ortalamasi<<endl;
            break;
        case 3:
            double siyazili1,siyazili2,siperformans_ortalamasi,siders_ortalamasi,siderssaati;
            cout <<"Seçmeli İngilizce Yazılı 1:"<<endl;
            cin >>siyazili1;
            cout <<"Seçmeli İngilizce Yazılı 2:"<<endl;
            cin >>siyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>siperformans_ortalamasi;
            cout<<"Seçmeli İngilizce Ders Saati:"<<endl;
            cin >>siderssaati;
            y1=siderssaati;
            y2=siders_ortalamasi=(siyazili1+siyazili2+siperformans_ortalamasi)/3;
            cout <<"Seçmeli İngilizce Ders Ortalaması:"<<siders_ortalamasi<<endl;
            break;
        case 4:
            double kkyazili1,kkyazili2,kkperformans_ortalamasi,kkders_ortalamasi,kkderssaati;
            cout <<"Kur'an'ı Kerim Yazılı 1:"<<endl;
            cin >>kkyazili1;
            cout <<"Kur'an'ı Kerim Yazılı 2:"<<endl;
            cin >>kkyazili2;
            cout <<"Kur'an'ı Kerim Performans Ortalaması:"<<endl;
            cin >>kkperformans_ortalamasi;
            cout<<"Kur'an'ı Kerim Ders Saati:"<<endl;
            cin >>kkderssaati;
            y1=kkderssaati;
            y2=kkders_ortalamasi=(kkyazili1+kkyazili2+kkperformans_ortalamasi)/3;
            cout <<"Kur'an'ı Kerim Ders Ortalaması:"<<kkders_ortalamasi<<endl;
            break;
        case 5:
            double obyazili1,obyazili2,obperformans_ortalamasi,obders_ortalamasi,obderssaati;
            cout <<"Okuma Becerileri Yazılı 1:"<<endl;
            cin >>obyazili1;
            cout <<"Okuma Becerileri Yazılı 2:"<<endl;
            cin >>obyazili2;
            cout <<"Okuma Becerileri Performans Ortalaması:"<<endl;
            cin >>obperformans_ortalamasi;
            cout<<"Okuma Becerileri Ders Saati:"<<endl;
            cin >>obderssaati;
            y1=obderssaati;
            y2=obders_ortalamasi=(obyazili1+obyazili2+obperformans_ortalamasi)/3;
            cout <<"Okuma Becerileri Ders Ortalaması:"<<obders_ortalamasi<<endl;
            break;
        case 6:
            double ybyazili1,ybyazili2,ybperformans_ortalamasi,ybders_ortalamasi,ybderssaati;
            cout <<"Yazma Becerileri Yazılı 1:"<<endl;
            cin >>ybyazili1;
            cout <<"Yazma Becerileri Yazılı 2:"<<endl;
            cin >>ybyazili2;
            cout <<"Yazma Becerileri Performans Ortalaması:"<<endl;
            cin >>ybperformans_ortalamasi;
            cout<<"Yazma Becerileri Ders Saati:"<<endl;
            cin >>ybderssaati;
            y1=ybderssaati;
            y2=ybders_ortalamasi=(ybyazili1+ybyazili2+ybperformans_ortalamasi)/3;
            cout <<"Yazma Becerileri Ders Ortalaması:"<<ybders_ortalamasi<<endl;
            break;
        case 7:
            double smyazili1,smyazili2,smperformans_ortalamasi,smders_ortalamasi,smderssaati;
            cout <<"Seçmeli Müzik Yazılı 1:"<<endl;
            cin >>smyazili1;
            cout <<"Seçmeli Müzik Yazılı 2:"<<endl;
            cin >>smyazili2;
            cout <<"Seçmeli Müzik Performans Ortalaması:"<<endl;
            cin >>smperformans_ortalamasi;
            cout<<"Seçmeli Müzik Ders Saati:"<<endl;
            cin >>smderssaati;
            y1=smderssaati;
            y2=smders_ortalamasi=(smyazili1+smyazili2+smperformans_ortalamasi)/3;
            cout <<"Seçmeli Müzik Ders Ortalaması:"<<smders_ortalamasi<<endl;
            break;
        case 8:
            double sgyazili1,sgyazili2,sgperformans_ortalamasi,sgders_ortalamasi,sgderssaati;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 1:"<<endl;
            cin >>sgyazili1;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 2:"<<endl;
            cin >>sgyazili2;
            cout <<"Seçmeli Görsel Sanatlar Performans Ortalaması:"<<endl;
            cin >>sgperformans_ortalamasi;
            cout<<"Seçmeli Görsel Sanatlar Ders Saati:"<<endl;
            cin >>sgderssaati;
            y1=sgderssaati;
            y2=sgders_ortalamasi=(sgyazili1+sgyazili2+sgperformans_ortalamasi)/3;
            cout <<"Seçmeli Görsel Sanatlar Ders Ortalaması:"<<sgders_ortalamasi<<endl;
            break;
        case 9:
            double sbyazili1,sbyazili2,sbperformans_ortalamasi,sbders_ortalamasi,sbderssaati;
            cout <<"Seçmeli Beden Yazılı 1:"<<endl;
            cin >>sbyazili1;
            cout <<"Seçmeli Beden Yazılı 2:"<<endl;
            cin >>sbyazili2;
            cout <<"Seçmeli Beden Performans Ortalaması:"<<endl;
            cin >>sbperformans_ortalamasi;
            cout<<"Seçmeli Beden Ders Saati:"<<endl;
            cin >>sbderssaati;
            y1=sbderssaati;
            y2=sbders_ortalamasi=(sbyazili1+sbyazili2+sbperformans_ortalamasi)/3;
            cout <<"Seçmeli Beden Ders Ortalaması:"<<sbders_ortalamasi<<endl;
            break;
        case 10:
            double hkyazili1,hkyazili2,hkperformans_ortalamasi,hkders_ortalamasi,hkderssaati;
            cout <<"Halk Kültürü Yazılı 1:"<<endl;
            cin >>hkyazili1;
            cout <<"Halk Kültürü Yazılı 2:"<<endl;
            cin >>hkyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>hkperformans_ortalamasi;
            cout<<"Halk Kültürü Ders Saati:"<<endl;
            cin >>hkderssaati;
            y1=hkderssaati;
            y2=hkders_ortalamasi=(hkyazili1+hkyazili2+hkperformans_ortalamasi)/3;
            cout <<"Halk Kültürü Ders Ortalaması:"<<hkders_ortalamasi<<endl;
            break;
    }




    int secim3;
    double z1, z2, z3;
    cout<<"1. Bilim Uygulamaları"<<endl
    <<"2. Seçmeli Matematik"<<endl
    <<"3. Seçmeli İngilizce"<<endl
    <<"4. Kur'an'ı Kerim"<<endl
    <<"5. Okuma Becerileri"<<endl
    <<"6. Yazma Becerileri"<<endl
    <<"7. Seçmeli Müzik"<<endl
    <<"8. Seçmeli Görsel Sanatlar"<<endl
    <<"9. Seçmeli Beden"<<endl
    <<"10. Halk Kültürü"<<endl
    <<"3. seçmeli dersiniz hangisiyse seçiniz."<<endl;
    cin>>secim3;
    switch (secim3){
        case 1:
            double buyazili1,buyazili2,buperformans_ortalamasi,buders_ortalamasi,buderssaati;
            cout <<"Bilim Uygulamaları Yazılı 1:"<<endl;
            cin >>buyazili1;
            cout <<"Bilim Uygulamaları Yazılı 2:"<<endl;
            cin >>buyazili2;
            cout <<"Bilim Uygulamaları Performans Ortalaması:"<<endl;
            cin >>buperformans_ortalamasi;
            cout<<"Bilim Uygulamaları Ders Saati:"<<endl;
            cin >>buderssaati;
            z1=buderssaati;
            z2=buders_ortalamasi=(buyazili1+buyazili2+buperformans_ortalamasi)/3;
            cout <<"Bilim Uygulamaları Ders Ortalaması:"<<buders_ortalamasi<<endl;
            break;
        case 2:
            double sayazili1,sayazili2,saperformans_ortalamasi,saders_ortalamasi,saderssaati;
            cout <<"Seçmeli Matematik Yazılı 1:"<<endl;
            cin >>sayazili1;
            cout <<"Seçmeli Matematik Yazılı 2:"<<endl;
            cin >>sayazili2;
            cout <<"Seçmeli Matematik Performans Ortalaması:"<<endl;
            cin >>saperformans_ortalamasi;
            cout<<"Seçmeli Matematik Ders Saati:"<<endl;
            cin >>saderssaati;
            z1=saderssaati;
            z2=saders_ortalamasi=(sayazili1+sayazili2+saperformans_ortalamasi)/3;
            cout <<"Seçmeli Matematik Ders Ortalaması:"<<saders_ortalamasi<<endl;
            break;
        case 3:
            double siyazili1,siyazili2,siperformans_ortalamasi,siders_ortalamasi,siderssaati;
            cout <<"Seçmeli İngilizce Yazılı 1:"<<endl;
            cin >>siyazili1;
            cout <<"Seçmeli İngilizce Yazılı 2:"<<endl;
            cin >>siyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>siperformans_ortalamasi;
            cout<<"Seçmeli İngilizce Ders Saati:"<<endl;
            cin >>siderssaati;
            z1=siderssaati;
            z2=siders_ortalamasi=(siyazili1+siyazili2+siperformans_ortalamasi)/3;
            cout <<"Seçmeli İngilizce Ders Ortalaması:"<<siders_ortalamasi<<endl;
            break;
        case 4:
            double kkyazili1,kkyazili2,kkperformans_ortalamasi,kkders_ortalamasi,kkderssaati;
            cout <<"Kur'an'ı Kerim Yazılı 1:"<<endl;
            cin >>kkyazili1;
            cout <<"Kur'an'ı Kerim Yazılı 2:"<<endl;
            cin >>kkyazili2;
            cout <<"Kur'an'ı Kerim Performans Ortalaması:"<<endl;
            cin >>kkperformans_ortalamasi;
            cout<<"Kur'an'ı Kerim Ders Saati:"<<endl;
            cin >>kkderssaati;
            z1=kkderssaati;
            z2=kkders_ortalamasi=(kkyazili1+kkyazili2+kkperformans_ortalamasi)/3;
            cout <<"Kur'an'ı Kerim Ders Ortalaması:"<<kkders_ortalamasi<<endl;
            break;
        case 5:
            double obyazili1,obyazili2,obperformans_ortalamasi,obders_ortalamasi,obderssaati;
            cout <<"Okuma Becerileri Yazılı 1:"<<endl;
            cin >>obyazili1;
            cout <<"Okuma Becerileri Yazılı 2:"<<endl;
            cin >>obyazili2;
            cout <<"Okuma Becerileri Performans Ortalaması:"<<endl;
            cin >>obperformans_ortalamasi;
            cout<<"Okuma Becerileri Ders Saati:"<<endl;
            cin >>obderssaati;
            z1=obderssaati;
            z2=obders_ortalamasi=(obyazili1+obyazili2+obperformans_ortalamasi)/3;
            cout <<"Okuma Becerileri Ders Ortalaması:"<<obders_ortalamasi<<endl;
            break;
        case 6:
            double ybyazili1,ybyazili2,ybperformans_ortalamasi,ybders_ortalamasi,ybderssaati;
            cout <<"Yazma Becerileri Yazılı 1:"<<endl;
            cin >>ybyazili1;
            cout <<"Yazma Becerileri Yazılı 2:"<<endl;
            cin >>ybyazili2;
            cout <<"Yazma Becerileri Performans Ortalaması:"<<endl;
            cin >>ybperformans_ortalamasi;
            cout<<"Yazma Becerileri Ders Saati:"<<endl;
            cin >>ybderssaati;
            z1=ybderssaati;
            z2=ybders_ortalamasi=(ybyazili1+ybyazili2+ybperformans_ortalamasi)/3;
            cout <<"Yazma Becerileri Ders Ortalaması:"<<ybders_ortalamasi<<endl;
            break;
        case 7:
            double smyazili1,smyazili2,smperformans_ortalamasi,smders_ortalamasi,smderssaati;
            cout <<"Seçmeli Müzik Yazılı 1:"<<endl;
            cin >>smyazili1;
            cout <<"Seçmeli Müzik Yazılı 2:"<<endl;
            cin >>smyazili2;
            cout <<"Seçmeli Müzik Performans Ortalaması:"<<endl;
            cin >>smperformans_ortalamasi;
            cout<<"Seçmeli Müzik Ders Saati:"<<endl;
            cin >>smderssaati;
            z1=smderssaati;
            z2=smders_ortalamasi=(smyazili1+smyazili2+smperformans_ortalamasi)/3;
            cout <<"Seçmeli Müzik Ders Ortalaması:"<<smders_ortalamasi<<endl;
            break;
        case 8:
            double sgyazili1,sgyazili2,sgperformans_ortalamasi,sgders_ortalamasi,sgderssaati;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 1:"<<endl;
            cin >>sgyazili1;
            cout <<"Seçmeli Görsel Sanatlar Yazılı 2:"<<endl;
            cin >>sgyazili2;
            cout <<"Seçmeli Görsel Sanatlar Performans Ortalaması:"<<endl;
            cin >>sgperformans_ortalamasi;
            cout<<"Seçmeli Görsel Sanatlar Ders Saati:"<<endl;
            cin >>sgderssaati;
            z1=sgderssaati;
            z2=sgders_ortalamasi=(sgyazili1+sgyazili2+sgperformans_ortalamasi)/3;
            cout <<"Seçmeli Görsel Sanatlar Ders Ortalaması:"<<sgders_ortalamasi<<endl;
            break;
        case 9:
            double sbyazili1,sbyazili2,sbperformans_ortalamasi,sbders_ortalamasi,sbderssaati;
            cout <<"Seçmeli Beden Yazılı 1:"<<endl;
            cin >>sbyazili1;
            cout <<"Seçmeli Beden Yazılı 2:"<<endl;
            cin >>sbyazili2;
            cout <<"Seçmeli Beden Performans Ortalaması:"<<endl;
            cin >>sbperformans_ortalamasi;
            cout<<"Seçmeli Beden Ders Saati:"<<endl;
            cin >>sbderssaati;
            z1=sbderssaati;
            z2=sbders_ortalamasi=(sbyazili1+sbyazili2+sbperformans_ortalamasi)/3;
            cout <<"Seçmeli Beden Ders Ortalaması:"<<sbders_ortalamasi<<endl;
            break;
        case 10:
            double hkyazili1,hkyazili2,hkperformans_ortalamasi,hkders_ortalamasi,hkderssaati;
            cout <<"Halk Kültürü Yazılı 1:"<<endl;
            cin >>hkyazili1;
            cout <<"Halk Kültürü Yazılı 2:"<<endl;
            cin >>hkyazili2;
            cout <<"Seçmeli İngilizce Performans Ortalaması:"<<endl;
            cin >>hkperformans_ortalamasi;
            cout<<"Halk Kültürü Ders Saati:"<<endl;
            cin >>hkderssaati;
            z1=hkderssaati;
            z2=hkders_ortalamasi=(hkyazili1+hkyazili2+hkperformans_ortalamasi)/3;
            cout <<"Halk Kültürü Ders Ortalaması:"<<hkders_ortalamasi<<endl;
            break;
    }
    double tyazili1,tyazili2,tperformans_ortalamasi,tders_ortalamasi,tderssaati,t;
    cout <<"Türkçe Yazılı 1:"<<endl;
    cin >>tyazili1;
    cout <<"Türkçe Yazılı 2:"<<endl;
    cin >>tyazili2;
    cout <<"Türkçe Performans Ortalaması:"<<endl;
    cin >>tperformans_ortalamasi;
    cout<<"Türkçe Ders Saati:"<<endl;
    cin >>tderssaati;
    tders_ortalamasi=(tyazili1+tyazili2+tperformans_ortalamasi)/3;
    cout <<"Türkçe Ders Ortalaması:"<<tders_ortalamasi<<endl;

    double myazili1,myazili2,mperformans_ortalamasi,mders_ortalamasi,mderssaati,m;
    cout <<"Matemetik Yazılı 1:"<<endl;;
    cin >>myazili1;
    cout <<"Matematik Yazılı 2:"<<endl;;
    cin >>myazili2;
    cout <<"Matematik Performans Ortalaması:"<<endl;;
    cin >>mperformans_ortalamasi;
    cout<<"Matematik Ders Saati:"<<endl;
    cin >>mderssaati;
    mders_ortalamasi=(myazili1+myazili2+mperformans_ortalamasi)/3;
    cout <<"Matematik Ders Ortalaması:"<<mders_ortalamasi<<endl;

    double fyazili1,fyazili2,fperformans_ortalamasi,fders_ortalamasi,fderssaati,f;
    cout <<"Fen Yazılı 1:"<<endl;
    cin >>fyazili1;
    cout <<"Fen Yazılı 2:"<<endl;
    cin >>fyazili2;
    cout <<"Fen Performans Ortalaması:"<<endl;
    cin >>fperformans_ortalamasi;
    cout<<"Fen Ders Saati:"<<endl;
    cin >>fderssaati;
    fders_ortalamasi=(fyazili1+fyazili2+fperformans_ortalamasi)/3;
    cout <<"Fen Ders Ortalaması:"<<fders_ortalamasi<<endl;

    double syazili1,syazili2,sperformans_ortalamasi,sders_ortalamasi,sderssaati,s;
    cout <<"Sosyal Yazılı 1:"<<endl;
    cin >>syazili1;
    cout <<"Sosyal Yazılı 2:"<<endl;
    cin >>syazili2;
    cout <<"Sosyal Performans Ortalaması:"<<endl;
    cin >>sperformans_ortalamasi;
    cout<<"Sosyal Ders Saati:"<<endl;
    cin >>sderssaati;
    sders_ortalamasi=(syazili1+syazili2+sperformans_ortalamasi)/3;
    cout <<"Sosyal Ders Ortalaması:"<<sders_ortalamasi<<endl;
    s=sders_ortalamasi;

    double dyazili1,dyazili2,dperformans_ortalamasi,dders_ortalamasi,dderssaati,d;
    cout <<"Din Kültürü Yazılı 1:"<<endl;
    cin >>dyazili1;
    cout <<"Din Kültürü Yazılı 2:"<<endl;
    cin >>dyazili2;
    cout <<"Din Kültürü Performans Ortalaması:"<<endl;
    cin >>dperformans_ortalamasi;
    cout<<"Din Kültürü Ders Saati:"<<endl;
    cin >>dderssaati;
    dders_ortalamasi=(dyazili1+dyazili2+dperformans_ortalamasi)/3;
    cout <<"Din Kültürü Ders Ortalaması:"<<dders_ortalamasi<<endl;

    double iyazili1,iyazili2,iperformans_ortalamasi,iders_ortalamasi,iderssaati,i;
    cout <<"İngilizce Yazılı 1:"<<endl;
    cin >>iyazili1;
    cout <<"İngilizce Yazılı 2:"<<endl;
    cin >>iyazili2;
    cout <<"İngilizce Performans Ortalaması:"<<endl;
    cin >>iperformans_ortalamasi;
    cout<<"İngilizce Ders Saati:"<<endl;
    cin >>iderssaati;
    iders_ortalamasi=(iyazili1+iyazili2+iperformans_ortalamasi)/3;
    cout <<"İngilizce Ders Ortalaması:"<<iders_ortalamasi<<endl;

    double ttyazili1,ttyazili2,ttperformans_ortalamasi,ttders_ortalamasi,ttderssaati,tt;
    cout <<"Teknoloji Tasarım Yazılı 1:"<<endl;
    cin >>ttyazili1;
    cout <<"Teknoloji Tasarım Yazılı 2:"<<endl;
    cin >>ttyazili2;
    cout <<"Teknoloji Tasarım Performans Ortalaması:"<<endl;
    cin >>ttperformans_ortalamasi;
    cout<<"Teknoloji Tasarım Ders Saati:"<<endl;
    cin >>ttderssaati;
    ttders_ortalamasi=(ttyazili1+ttyazili2+ttperformans_ortalamasi)/3;
    cout <<"Teknoloji Tasarım Ders Ortalaması:"<<ttders_ortalamasi<<endl;

    double byazili1,byazili2,bperformans_ortalamasi,bders_ortalamasi,bderssaati,b;
    cout <<"Beden Yazılı 1:"<<endl;
    cin >>byazili1;
    cout <<"Beden Yazılı 2:"<<endl;
    cin >>byazili2;
    cout <<"Beden Performans Ortalaması:"<<endl;
    cin >>bperformans_ortalamasi;
    cout<<"Beden Ders Saati:"<<endl;
    cin >>bderssaati;
    bders_ortalamasi=(byazili1+byazili2+bperformans_ortalamasi)/3;
    cout <<"Beden Ders Ortalaması:"<<bders_ortalamasi<<endl;

    double ryazili1,ryazili2,rperformans_ortalamasi,rders_ortalamasi,rderssaati,r;
    cout <<"Resim Yazılı 1:"<<endl;
    cin >>ryazili1;
    cout <<"Resim Yazılı 2:"<<endl;
    cin >>ryazili2;
    cout <<"Resim Performans Ortalaması:"<<endl;
    cin >>rperformans_ortalamasi;
    cout<<"Resim Ders Saati:"<<endl;
    cin >>rderssaati;
    rders_ortalamasi=(ryazili1+ryazili2+rperformans_ortalamasi)/3;
    cout <<"Resim Ders Ortalaması:"<<rders_ortalamasi<<endl;

    double muyazili1,muyazili2,muperformans_ortalamasi,muders_ortalamasi,muderssaati,mu;
    cout <<"Müzik Yazılı 1:"<<endl;
    cin >>muyazili1;
    cout <<"Müzik Yazılı 2:"<<endl;
    cin >>muyazili2;
    cout <<"Müzik Performans Ortalaması:"<<endl;
    cin >>muperformans_ortalamasi;
    cout<<"Müzik Ders Saati:"<<endl;
    cin >>muderssaati;
    muders_ortalamasi=(muyazili1+muyazili2+muperformans_ortalamasi)/3;
    cout <<"Müzik Ders Ortalaması:"<<muders_ortalamasi<<endl;

    int toplam_ders_saati=tderssaati+mderssaati+fderssaati+sderssaati+dderssaati+iderssaati+x1+y1+z1+ttderssaati+bderssaati+rderssaati+muderssaati;
    t=(tders_ortalamasi*tderssaati)/toplam_ders_saati;
    m=(mders_ortalamasi*mderssaati)/toplam_ders_saati;
    f=(fders_ortalamasi*fderssaati)/toplam_ders_saati;
    s=(sders_ortalamasi*sderssaati)/toplam_ders_saati;
    d=(dders_ortalamasi*dderssaati)/toplam_ders_saati;
    i=(iders_ortalamasi*iderssaati)/toplam_ders_saati;
    x3=(x2*x1)/toplam_ders_saati;
    y3=(y2*y1)/toplam_ders_saati;
    z3=(z2*z1)/toplam_ders_saati;
    tt=(ttders_ortalamasi*ttderssaati)/toplam_ders_saati;
    b=(bders_ortalamasi*bderssaati)/toplam_ders_saati;
    r=(rders_ortalamasi*rderssaati)/toplam_ders_saati;
    mu=(muders_ortalamasi*muderssaati)/toplam_ders_saati;
    double donem_sonu_ort=t+m+f+s+d+i+x3+y3+z3+tt+b+r+mu;
    cout<<"Dönem Sonu Ortalaması="<<donem_sonu_ort;
    return 0;
}