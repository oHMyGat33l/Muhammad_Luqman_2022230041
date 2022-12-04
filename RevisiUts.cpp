#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
     int nilai;
     char lagi;

     do
     {
          cout << "=============================================== "
               << "\n";
          cout << "======== Ujian Tengah Semester Ganjil  ======== "
               << "\n";
          cout << "======== Program perhitungan sederhana ======== "
               << "\n";
          cout << "=============================================== "
               << "\n";
          cout << "Soal nomer 1"
               << "\n";
          cout << "soal nomer 2 "
               << "\n";
          cout << "Soal nomer 3 "
               << "\n";
          cout << "Soal nomer 4 "
               << "\n";
          cout << "Soal nomer 5 "
               << "\n";
          cout << "Soal nomer 6 "
               << "\n";
          cout << "Soal nomer 7 "
               << "\n";
          cout << "Soal nomer 8 "
               << "\n";
          cout << "pilih soal yang ingin dilihat jawabannya "
               << "\n";
          cin >> nilai;
          if (nilai > 8)
          {
               cout << "Soal hanya sampe 8" << endl;
          }
          switch (nilai)
          {
          case 1:
          {
               float Rt;
               float Rs;
               float Rp;
               float I;
               float R1 = 3;
               float R2 = 6;
               float R3 = 1;
               float R4 = 1;
               float V = 15;

               cout << "Soal nomer 1" << endl;
               cout << "Dik : Rp =(R1 = 3 ohm dan R2 = 6 ohm), Rs=(R3 = 1 ohm, R4 = 1 ohm)" << endl;
               cout << "    : Tenaga sumber v = 15v" << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               cout << "A. R pengganti " << endl;
               Rp = (R1 * R2) / (R1 + R2);
               cout << "Rp adalah : " << Rp << " ohm" << endl;
               Rs = R3 + R4;
               cout << "Rs adalah : " << Rs << " ohm" << endl;
               Rt = (Rs * Rp) / (Rs + Rp);
               cout << "R Total adalah : " << Rt << " ohm" << endl;
               cout << "\n";

               cout << "B. Arus yang keluar dari sumber tegangan " << endl;
               I = V / Rt;
               cout << "Arus yang keluar dari sumber tegangan adalah : " << I << " A" << endl;
               cout << "\n";

               cout << "C. Arus yang melewati masing-masing resistor" << endl;
               I = V / R1;
               cout << "Arus yang melewati R1 = 3 ohm : " << I << " A" << endl;
               I = V / R2;
               cout << "Arus yang melewati R2 = 6 ohm : " << I << " A" << endl;
               I = V / Rp;
               cout << "Arus yang melewati R3 dan R4 : " << I << " A" << endl;
               cout << "\n";
               break;
          }
          case 2:
          {
               float Cpp;
               float Cps;
               float Cpt;
               float Cpp2;
               float Q;
               float V = 15;
               float P1 = 20;
               float P2 = 6;
               float P3 = 20;
               float S1 = 5;
               float S2 = 60;

               cout << "Soal nomer 2" << endl;
               cout << "Dik : kapasitor paratel : 20uF, 6uF, 20uF " << endl;
               cout << "    : kapasitor seri : 5uF, 60uf" << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               cout << "A. Nilai Kapasitor pengganti" << endl;
               Cpp = P2 + P3;
               cout << "Cp1 : " << Cpp << "uF" << endl;
               Cps = (P1 * S1) / (P1 + S1);
               cout << "Cs1 : " << Cps << "uF" << endl;
               Cpp2 = Cpp + Cps;
               cout << "Cp2 : " << Cpp2 << "uF" << endl;
               Cpt = (Cpp2 * S2) / (Cpp2 + S2);
               cout << "Ctotal : " << Cpt << "uF" << endl;
               cout << "\n";

               cout << "B. Bila rangkaian tersebut dialiri tegangan 15 Volt,berapa muatan yang mampu disimpan oleh kapasitor? " << endl;
               Q = Cpt * 1 / 1000 * V;
               cout << "Muatannya adalah : " << Q << "C" << endl;
               cout << "\n";

               break;
          }
          case 3:
          {
               float V = 110;
               float I = 2.8;
               float R;

               cout << "Soal nomer 3" << endl;
               cout << "dik : V = 110 Volt" << endl;
               cout << "dik : I = 2,8 A" << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               R = V / I;
               cout << "Hambatannya adalah : " << R << " ohm" << endl;
               cout << "\n";

               break;
          }
          case 4:
          {
               float I = 5.5;
               float Ia;
               float Ib;
               float V = 110;
               float Vt;
               float Vh;
               float R;
               float Rt;
               float Rh;

               cout << "Soal nomer 4" << endl;
               cout << "dik : I = 5,5 A" << endl;
               cout << "dik : v = 110 Volt" << endl;
               cout << "maka hambatannya adalah" << endl;
               R = V / I;
               cout << "R = " << R << " ohm" << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               cout << "A. Jika tegangan turun 10 persen, berapakah arus yangmengalir sekarang?" << endl;
               Vt = V * 10 / 100;
               Vh = V - Vt;
               cout << "Tegangan Sekarang : " << Vh << " Volt" << endl;
               Ia = Vh / R;
               cout << "arus yang mengalir Sekarang : " << Ia << " A" << endl;
               cout << "\n";

               cout << "B. Jika hambatan berkurang 10 persen, berapa arusyang ditarik alat tersebut saat dihubungkan ke tegang" << endl;
               Rt = 20 * 10 / 100;
               Rh = R - Rt;
               cout << "hambatan Sekarang : " << Rh << " Volt" << endl;
               Ib = V / Rh;
               cout << "arus yang ditarik Sekarang : " << Ib << " A" << endl;
               cout << "\n";
               break;
          }
          case 5:
          {
               double N = 200;
               double A = 0.00005;
               double I = 0.04;
               double U = 0.0000004;
               double u = 4000;
               double L;
               const double phi = 3.14;

               int P = 2;

               cout << "Soal nomer 5" << endl;
               cout << "dik : Jumlah lilitan (N)= 200 lilitan" << endl;
               cout << "    : Luas penampang (A)=0,5cm^2 = 0,5 x 10^-4 m^2 = 5 x 10^-5 m^2 " << endl;
               cout << "    : Panjang solenoide (l) = 4cm = 4. 10^-2 m " << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               cout << "A. Jika di rongga solenoid hanya berisi udara, berapa induktansi diri solenoid tersebut?" << endl;
               L = (pow(N, P) * U * phi * A) / I;
               cout << "induksi diri solenoid dengan rongga udara : " << L << " H" << endl;
               cout << "\n";

               cout << "B. Berapa induktansi solenoid jika rongga solenoid berisi teras besi dengan µ = 4000?" << endl;
               L = u * (pow(N, P) * A) / I;
               cout << "induktansi solenoid jika rongga solenoid berisi teras besi dengan µ = 4000 adalah : " << L << " H" << endl;
               cout << "\n";
               break;
          }
          case 6:
          {
               cout << "Soal nomer 6" << endl;
               cout << "Sebutkan komponen elektronika yang bersifat aktif dan pasif" << endl;
               cout << "\n";

               cout << "Komponen bersifat Aktif" << endl;
               cout << "1. Dioda" << endl;
               cout << "2. Transistor" << endl;
               cout << "3. Ic" << endl;
               cout << "\n";

               cout << "Komponen bersifat Pasif" << endl;
               cout << "1. Resistor" << endl;
               cout << "2. Kapasitor" << endl;
               cout << "3. Induktor" << endl;
               cout << "\n";
               break;
          }
          case 7:
          {
               cout << "Soal nomer 7" << endl;
               cout << "Bagaimana cara memperbesar nilai kapasitif pada kapasitor? Jelaskan" << endl;
               cout << "\n";

               cout << "1. Memperbesar nilai kapasity" << endl;
               cout << "2. Memperbesar luasan pelat kapasitor" << endl;
               cout << "3. Memperkecil jarak antar dua pelat" << endl;
               cout << "\n";
               break;
          }
          case 8:
          {
               float V;
               float Q = 0.000000165;
               float C = 0.0000000075;

               cout << "Soal nomer 8" << endl;
               cout << "dik : C = 7500 pF = 7.5 x 10^-9" << endl; /* << ----- piko = 10^-12 */
               cout << "    : Q = 16.5 x 10^-8 C" << endl;

               cout << "\n";
               cout << "Jawaban: " << endl;
               cout << "\n";

               V = Q / C;
               cout << "Tegangan dua ujung kapasitor adalah : " << V << " Volt" << endl;
               cout << "\n";
               break;
          }
          }
          cout << "Anda Ingin Memilih Kembali dan pilh soal utama ? (y/n) ";
          cout << "\n";

          cin >> lagi;
     } while (lagi == 'y' || lagi == 'Y');

     cout << "Program Selesai" << endl;
     cout << "Terima Kasih" << endl;

     return 0;
}