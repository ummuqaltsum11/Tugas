#include <iostream>
using namespace std;

int main() {
	
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
