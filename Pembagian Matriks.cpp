#include <iostream>
using namespace std;

int main() {

cout<<"Nama:"<<endl;
cout<<"Ummu Qaltsum"<<"\t"<<"\t"<<"1917051008"<<endl;
cout<<"Maghviraturreimadhiney"<<"\t"<<"1917051021"<<endl;
cout<<endl<<endl<<endl;
	
	
cout<<"========================="<<endl<<endl;
cout<<"  PEMBAGIAN MATRIKS 2X2"	 <<endl<<endl;
cout<<"========================="<<endl<<endl<<endl;
	
int MatriksA[2][2] = {4,3, 2,1};
int (*mat)[2] = MatriksA;
	
cout<<"   ==== Matriks A ===="<<endl<<endl;
cout<<"["<<"\t"<<**mat<<"\t"<<*(*(mat)+1)<<"\t"<<"]"<<endl;
cout<<"["<<"\t"<<*(*(mat+1))<<"\t"<<*(*(mat+1)+1)<<"\t"<<"]"<<endl;
	
cout<<endl<<endl<<endl;

int MatriksB[2][2] = {1,2, 3,4};
int (*matb)[2] = MatriksB;
	
cout<<"   ==== Matriks B ===="<<endl<<endl;
cout<<"["<<"\t"<<**matb<<"\t"<<*(*(matb)+1)<<"\t"<<"]"<<endl;
cout<<"["<<"\t"<<*(*(matb+1))<<"\t"<<*(*(matb+1)+1)<<"\t"<<"]"<<endl;
	
cout<<endl<<endl<<endl;
	
int detB = ( (matb[0][0]*matb[1][1]) - (matb[0][1]*matb[1][0]) );
cout<<"Determinan Matriks B = "<< detB <<endl<<endl<<endl;
    
cout<<endl;
    
float matbadj[2][2];
float (*matBadj)[2] = matbadj;
	
matbadj[0][0] =   matb[1][1];
matbadj[0][1] = (-matb[0][1]);
matbadj[1][0] = (-matb[1][0]);
matbadj[1][1] =   matb[0][0]; 
    	
cout<<"  === Adj Matriks B ==="<<endl; // adj = adjoin
cout<<"["<<"\t"<<" "<<**matBadj<<"\t"<<*(*(matBadj)+1)<<"\t"<<"]"<<endl;
cout<<"["<<"\t"<<*(*(matBadj+1))<<"\t"<<" "<<*(*(matBadj+1)+1)<<"\t"<<"]"<<endl;
	
cout<<endl<<endl<<endl;

	
float matbinvers[2][2];
float (*matBinvers)[2] = matbinvers;

matbinvers[0][0] = matbadj[0][0] / detB;
matbinvers[0][1] = matbadj[0][1] / detB;
matbinvers[1][0] = matbadj[1][0] / detB;
matbinvers[1][1] = matbadj[1][1] / detB;
	
cout<<"  === Invers Matriks B ==="<<endl;
cout<<"["<<"\t"<<**matBinvers<<"\t"<<"  "<<*(*(matBinvers)+1)<<"\t"<<"   "<<"]"<<endl;
cout<<"["<<"\t"<<*(*(matBinvers+1))<<"\t"<<*(*(matBinvers+1)+1)<<"\t"<<"   "<<"]"<<endl;
	
cout<<endl<<endl<<endl;


float mathasil_1[2][2];
float (*matHasil_1)[2] = mathasil_1;
	
mathasil_1[0][0] = (matbinvers[0][0]*MatriksA[0][0])+(matbinvers[0][1]*MatriksA[1][0]);
mathasil_1[0][1] = (matbinvers[0][0]*MatriksA[0][1])+(matbinvers[0][1]*MatriksA[1][1]);
mathasil_1[1][0] = (matbinvers[1][0]*MatriksA[0][0])+(matbinvers[1][1]*MatriksA[1][0]);
mathasil_1[1][1] = (matbinvers[1][0]*MatriksA[0][1])+(matbinvers[1][1]*MatriksA[1][1]);

	
cout<<" "<<"==== Hasil Pembagian ===="<<endl;
cout<<" "<<"====   untuk BX = A  ===="<<endl;
cout<<" "<<"====     X = B'.A    ===="<<endl<<endl;
cout<<"["<<"\t"<<**matHasil_1<<"\t"<<*(*(matHasil_1)+1)<<"\t"<<"  "<<"]"<<endl;
cout<<"["<<"\t"<<" "<<*(*(matHasil_1+1))<<"\t"<<" "<<*(*(matHasil_1+1)+1)<<"\t"<<"  "<<"]";
cout<<endl;

cout<<endl<<endl<<endl;

	
float mathasil_2[2][2];
float (*matHasil_2)[2] = mathasil_2;
	
mathasil_2[0][0] = (MatriksA[0][0]*matbinvers[0][0])+(MatriksA[0][1]*matbinvers[1][0]);
mathasil_2[0][1] = (MatriksA[0][0]*matbinvers[0][1])+(MatriksA[0][1]*matbinvers[1][1]);
mathasil_2[1][0] = (MatriksA[1][0]*matbinvers[0][0])+(MatriksA[1][1]*matbinvers[1][0]);
mathasil_2[1][1] = (MatriksA[1][0]*matbinvers[0][1])+(MatriksA[1][1]*matbinvers[1][1]);
	
	
cout<<" "<<"==== Hasil Pembagian ===="<<endl;
cout<<" "<<"====   untuk XB = A  ===="<<endl;
cout<<" "<<"====     X = A.B'    ===="<<endl<<endl;
cout<<"["<<"\t"<<**mathasil_2<<"\t"<<*(*(mathasil_2)+1)<<"\t"<<"  "<<"]"<<endl;
cout<<"["<<"\t"<<*(*(mathasil_2+1))<<"\t"<<*(*(matHasil_2+1)+1)<<"\t"<<"  "<<"]"<<endl;

return 0;
}
