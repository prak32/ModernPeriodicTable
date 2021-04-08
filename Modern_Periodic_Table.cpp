#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<process.h>
using namespace std;
//Initializing class.
class element{
		public:
                 short atomicno;
                 char name[50];
                 char ec[50];
                 short group;
                 short period;
                 char block;
                 float atomicw;
                 float en;
                 short atomicr;
                 float meltp;
                 float boilp;
                 float density;
              }elem[115];
int main()
{
    int n,t,a,i;
    char name[50],c;
    //Displaying introduction.
    system("COLOR 30");
   	system("cls");
    for(i=0;i<=100;++i)
    {
                       Sleep(5);
                       system("cls");
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t*****WELCOME TO THE PROGRAM******";
                       cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tINITIALIZING- "<<i<<"%";
                       if(i==50)
                       Sleep(100);
    }
    system("cls");
    //Displaying the modern periodic table.
    cout<<"\n\t\t\t\t\t\t\t\t\tTHE MODERN PERIODIC TABLE\n";
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------\n";
    cout<<"\t\t\t\t\t\t\tH                                                      He"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    cout<<"\t\t\t\t\t\t\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Uuu Uub -  Uuq -  Uuh"<<"\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    cout<<"\t\t\t\t\t\t\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";
    system("PAUSE");
    system("cls");
    //Initializing atomic numbers.
    for(i=1;i<=114;++i)
    {
                    elem[i].atomicno=i;
    }
    //Initializing element names and electronic configurations.
    {
        strcpy(elem[1].name,"Hydrogen- H");          strcpy(elem[1].ec,"1s1");
        strcpy(elem[2].name,"Helium- He");           strcpy(elem[2].ec,"1s2");
        strcpy(elem[3].name,"Lithium- Li");          strcpy(elem[3].ec,"[He] 2s1");
        strcpy(elem[4].name,"Beryllium- Be");        strcpy(elem[4].ec,"[He] 2s2	");
        strcpy(elem[5].name,"Boron- B");             strcpy(elem[5].ec,"[He] 2s2 2p1");
        strcpy(elem[6].name,"Carbon- C");            strcpy(elem[6].ec,"[He] 2s2 2p2");
        strcpy(elem[7].name,"Nitrogen- N");          strcpy(elem[7].ec,"[He] 2s2 2p3");
        strcpy(elem[8].name,"Oxygen- O");            strcpy(elem[8].ec,"[He] 2s2 2p4");
        strcpy(elem[9].name,"Fluorine- F");          strcpy(elem[9].ec,"[He] 2s2 2p5");
        strcpy(elem[10].name,"Neon- Ne");            strcpy(elem[10].ec,"[He] 2s2 2p6");
        strcpy(elem[11].name,"Sodium- Na");          strcpy(elem[11].ec,"[Ne] 3s1");
        strcpy(elem[12].name,"Magnesium- Mg");       strcpy(elem[12].ec,"[Ne] 3s2");
        strcpy(elem[13].name,"Aluminium- Al");       strcpy(elem[13].ec,"[Ne] 3s2 3p1");
        strcpy(elem[14].name,"Silicon- Si");         strcpy(elem[14].ec,"[Ne] 3s2 3p2");
        strcpy(elem[15].name,"Phosphorus- P");       strcpy(elem[15].ec,"[Ne] 3s2 3p3");
        strcpy(elem[16].name,"Sulfur- S");           strcpy(elem[16].ec,"[Ne] 3s2 3p4");
        strcpy(elem[17].name,"Chlorine- Cl");        strcpy(elem[17].ec,"[Ne] 3s2 3p5");
        strcpy(elem[18].name,"Argon- Ar");           strcpy(elem[18].ec,"[Ne] 3s2 3p6");
        strcpy(elem[19].name,"Potassium- K");        strcpy(elem[19].ec,"[Ar] 4s1");
        strcpy(elem[20].name,"Calcium- Ca");         strcpy(elem[20].ec,"[Ar] 4s2");
        strcpy(elem[21].name,"Scandium- Sc");        strcpy(elem[21].ec,"[Ar] 3d1 4s2");
        strcpy(elem[22].name,"Titanium- Ti");        strcpy(elem[22].ec,"[Ar] 3d2 4s2");
        strcpy(elem[23].name,"Vanadium- V");         strcpy(elem[23].ec,"[Ar] 3d3 4s2");
        strcpy(elem[24].name,"Chromium- Cr");        strcpy(elem[24].ec,"[Ar] 3d5 4s1");
        strcpy(elem[25].name,"Manganese- Mn");       strcpy(elem[25].ec,"[Ar] 3d5 4s2");
        strcpy(elem[26].name,"Iron- Fe");            strcpy(elem[26].ec,"[Ar] 3d6 4s2");
    	strcpy(elem[27].name,"Cobalt- Co");          strcpy(elem[27].ec,"[Ar] 3d7 4s2");
        strcpy(elem[28].name,"Nickel- Ni");          strcpy(elem[28].ec,"[Ar] 3d8 4s2");
        strcpy(elem[29].name,"Copper- Cu");          strcpy(elem[29].ec,"[Ar] 3d10 4s1");
        strcpy(elem[30].name,"Zinc- Zn");            strcpy(elem[30].ec,"[Ar] 3d10 4s2");
        strcpy(elem[31].name,"Gallium- Ga");         strcpy(elem[31].ec,"[Ar] 3d10 4s2 4p1");
        strcpy(elem[32].name,"Germanium- Ge");       strcpy(elem[32].ec,"[Ar] 3d10 4s2 4p2");
        strcpy(elem[33].name,"Arsenic- As");         strcpy(elem[33].ec,"[Ar] 3d10 4s2 4p3");
        strcpy(elem[34].name,"Selenium- Se");        strcpy(elem[34].ec,"[Ar] 3d10 4s2 4p4");
        strcpy(elem[35].name,"Bromine- Br");         strcpy(elem[35].ec,"[Ar] 3d10 4s2 4p5	");
        strcpy(elem[36].name,"Krypton- Kr");         strcpy(elem[36].ec,"[Ar] 3d10 4s2 4p6	");
        strcpy(elem[37].name,"Rubidium- Rb");        strcpy(elem[37].ec,"[Kr] 5s1");
        strcpy(elem[38].name,"Strontium- Sr");       strcpy(elem[38].ec,"[Kr] 5s2");
        strcpy(elem[39].name,"Yttrium- Y");          strcpy(elem[39].ec,"[Kr] 4d1 5s2");
        strcpy(elem[40].name,"Zirconium- Zr");       strcpy(elem[40].ec,"[Kr] 4d2 5s2");
        strcpy(elem[41].name,"Niobium- Nb");         strcpy(elem[41].ec,"[Kr] 4d4 5s1");
        strcpy(elem[42].name,"Molybdenum- Mo");      strcpy(elem[42].ec,"[Kr] 4d5 5s1");
        strcpy(elem[43].name,"Technetium- Tc");      strcpy(elem[43].ec,"[Kr] 4d5 5s2");
        strcpy(elem[44].name,"Ruthenium- Ru");       strcpy(elem[44].ec,"[Kr] 4d7 5s1");
        strcpy(elem[45].name,"Rhodium- Rh");         strcpy(elem[45].ec,"[Kr] 4d8 5s1");
        strcpy(elem[46].name,"Palladium- Pd");       strcpy(elem[46].ec,"[Kr] 4d10");
        strcpy(elem[47].name,"Silver- Ag");          strcpy(elem[47].ec,"[Kr] 4d10 5s1");
        strcpy(elem[48].name,"Cadmium- Cd");         strcpy(elem[48].ec,"[Kr] 4d10 5s2");
        strcpy(elem[49].name,"Indium- In");          strcpy(elem[49].ec,"[Kr] 4d10 5s2 5p1");
        strcpy(elem[50].name,"Tin- Sn");             strcpy(elem[50].ec,"[Kr] 4d10 5s2 5p2");
        strcpy(elem[51].name,"Antimony- Sb");        strcpy(elem[51].ec,"[Kr] 4d10 5s2 5p3");
        strcpy(elem[52].name,"Tellurium- Te");       strcpy(elem[52].ec,"[Kr] 4d10 5s2 5p4");
        strcpy(elem[53].name,"Iodine- I");           strcpy(elem[53].ec,"[Kr] 4d10 5s2 5p5");
        strcpy(elem[54].name,"Xenon- Xe");           strcpy(elem[54].ec,"[Kr] 4d10 5s2 5p6");
        strcpy(elem[55].name,"Caesium- Cs");         strcpy(elem[55].ec,"[Xe] 6s1");
        strcpy(elem[56].name,"Barium- Ba");          strcpy(elem[56].ec,"[Xe] 6s2");
        strcpy(elem[57].name,"Lanthanum- La");       strcpy(elem[57].ec,"[Xe] 5d1 6s2");
        strcpy(elem[58].name,"Cerium- Ce");          strcpy(elem[58].ec,"[Xe] 4f1 5d1 6s2");
        strcpy(elem[59].name,"Praseodymium- Pr");    strcpy(elem[59].ec,"[Xe] 4f3 6s2");
        strcpy(elem[60].name,"Neodymium- Nd");       strcpy(elem[60].ec,"[Xe] 4f4 6s2");
        strcpy(elem[61].name,"Promethium- Pm");      strcpy(elem[61].ec,"[Xe] 4f5 6s2");
        strcpy(elem[62].name,"Samarium- Sm");        strcpy(elem[62].ec,"[Xe] 4f6 6s2");
        strcpy(elem[63].name,"Europium- Eu");        strcpy(elem[63].ec,"[Xe] 4f7 6s2");
        strcpy(elem[64].name,"Gadolinium- Gd");      strcpy(elem[64].ec,"[Xe] 4f7 5d1 6s2");
        strcpy(elem[65].name,"Terbium- Tb");         strcpy(elem[65].ec,"[Xe] 4f9 6s2");
        strcpy(elem[66].name,"Dysprosium- Dy");      strcpy(elem[66].ec,"[Xe] 4f10 6s2");
        strcpy(elem[67].name,"Holmium- Ho");         strcpy(elem[67].ec,"[Xe] 4f11 6s2");
        strcpy(elem[68].name,"Erbium- Er");          strcpy(elem[68].ec,"[Xe] 4f12 6s2");
        strcpy(elem[69].name,"Thulium- Tm");         strcpy(elem[69].ec,"[Xe] 4f13 6s2");
        strcpy(elem[70].name,"Ytterbium- Yb");       strcpy(elem[70].ec,"[Xe] 4f14 6s2");
        strcpy(elem[71].name,"Lutetium- Lu");        strcpy(elem[71].ec,"[Xe] 4f14 5d1 6s2");
        strcpy(elem[72].name,"Hafnium- Hf");         strcpy(elem[72].ec,"[Xe] 4f14 5d2 6s2");
        strcpy(elem[73].name,"Tantalum- Ta");        strcpy(elem[73].ec,"[Xe] 4f14 5d3 6s2");
        strcpy(elem[74].name,"Tungsten- W");         strcpy(elem[74].ec,"[Xe] 4f14 5d4 6s2");
        strcpy(elem[75].name,"Rhenium- Re");         strcpy(elem[75].ec,"[Xe] 4f14 5d5 6s2");
        strcpy(elem[76].name,"Osmium- Os");          strcpy(elem[76].ec,"[Xe] 4f14 5d6 6s2");
        strcpy(elem[77].name,"Iridium- Ir");         strcpy(elem[77].ec,"[Xe] 4f14 5d7 6s2");
        strcpy(elem[78].name,"Platinum- Pt");        strcpy(elem[78].ec,"[Xe] 4f14 5d9 6s1");
        strcpy(elem[79].name,"Gold- Au");            strcpy(elem[79].ec,"[Xe] 4f14 5d10 6s1");
        strcpy(elem[80].name,"Mercury- Hg");         strcpy(elem[80].ec,"[Xe] 4f14 5d10 6s2	");
        strcpy(elem[81].name,"Thallium- Tl");        strcpy(elem[81].ec,"[Xe] 4f14 5d10 6s2 6p1");
        strcpy(elem[82].name,"Lead- Pb");            strcpy(elem[82].ec,"[Xe] 4f14 5d10 6s2 6p2");
        strcpy(elem[83].name,"Bismuth- Bi");         strcpy(elem[83].ec,"[Xe] 4f14 5d10 6s2 6p3");
        strcpy(elem[84].name,"Polonium- Po");        strcpy(elem[84].ec,"[Xe] 4f14 5d10 6s2 6p4");
        strcpy(elem[85].name,"Astatine- At");        strcpy(elem[85].ec,"[Xe] 4f14 5d10 6s2 6p5");
        strcpy(elem[86].name,"Radon- Rn");           strcpy(elem[86].ec,"[Xe] 4f14 5d10 6s2 6p6");
        strcpy(elem[87].name,"Francium- Fr");        strcpy(elem[87].ec,"[Rn] 7s1");
        strcpy(elem[88].name,"Radium- Ra");          strcpy(elem[88].ec,"[Rn] 7s2");
        strcpy(elem[89].name,"Actinium- Ac");        strcpy(elem[89].ec,"[Rn] 6d1 7s2");
        strcpy(elem[90].name,"Thorium- Th");         strcpy(elem[90].ec,"[Rn] 6d2 7s2");
        strcpy(elem[91].name,"Protactinium- Pa");    strcpy(elem[91].ec,"[Rn] 5f2 6d1 7s2");
        strcpy(elem[92].name,"Uranium- U");          strcpy(elem[92].ec,"[Rn] 5f3 6d1 7s2");
        strcpy(elem[93].name,"Neptunium- Np");       strcpy(elem[93].ec,"[Rn] 5f4 6d1 7s2");
        strcpy(elem[94].name,"Plutonium- Pu");       strcpy(elem[94].ec,"[Rn] 5f6 7s2");
        strcpy(elem[95].name,"Americium- Am");       strcpy(elem[95].ec,"[Rn] 5f7 7s2");
        strcpy(elem[96].name,"Curium- Cm");          strcpy(elem[96].ec,"[Rn] 5f7 6d1 7s2");
        strcpy(elem[97].name,"Berkelium- Bk");       strcpy(elem[97].ec,"[Rn] 5f9 7s2");
        strcpy(elem[98].name,"Californium- Cf");     strcpy(elem[98].ec,"[Rn] 5f10 7s2");
        strcpy(elem[99].name,"Einsteinium- Es");     strcpy(elem[99].ec,"[Rn] 5f11 7s2");
        strcpy(elem[100].name,"Fermium- Fm");        strcpy(elem[100].ec,"[Rn] 5f12 7s2");
        strcpy(elem[101].name,"Mendelevium- Md");    strcpy(elem[101].ec,"[Rn] 5f13 7s2");
        strcpy(elem[102].name,"Nobelium- No");       strcpy(elem[102].ec,"[Rn] 5f14 7s2");
        strcpy(elem[103].name,"Lawrencium- Lr");     strcpy(elem[103].ec,"[Rn] 5f14 7s2 7p1");
        strcpy(elem[104].name,"Rutherfordium- Rf");  strcpy(elem[104].ec,"[Rn] 5f14 6d2 7s2");
        strcpy(elem[105].name,"Dubnium- Db");        strcpy(elem[105].ec,"[Rn] 5f14 6d3 7s2	");
        strcpy(elem[106].name,"Seaborgium- Sg");     strcpy(elem[106].ec,"[Rn] 5f14 6d4 7s2");
        strcpy(elem[107].name,"Bohrium- Bh");        strcpy(elem[107].ec,"[Rn] 5f14 6d5 7s2");
        strcpy(elem[108].name,"Hassium- Hs");        strcpy(elem[108].ec,"[Rn] 5f14 6d6 7s2");
        strcpy(elem[109].name,"Meitnerium- Mt");     strcpy(elem[109].ec,"[Rn] 5f14 6d7 7s2");
        strcpy(elem[110].name,"Darmstadtium- Ds");   strcpy(elem[110].ec,"[Rn] 5f14 6d8 7s2");
        strcpy(elem[111].name,"Roentgenium- Rg");    strcpy(elem[111].ec,"[Rn] 5f14 6d9 7s2");
        strcpy(elem[112].name,"Copernicium- Cn");    strcpy(elem[112].ec,"[Rn] 5f14 6d10 7s2");
        strcpy(elem[113].name,"Ununtrium- Uut");     strcpy(elem[113].ec,"[Rn] 5f14 6d10 7s2 7p1");
        strcpy(elem[114].name,"Flerovium- Fl");      strcpy(elem[114].ec,"[Rn] 5f14 6d10 7s2 7p2");
    }
    
