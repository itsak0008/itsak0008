#include<iostream>
#include<fstream>
// #include<string>

using namespace std;

int main(){
   // string Ak = "Alok Bhai";
   // ofstream out("Alokkk.txt");
   // out<<Ak;
   // string st;

   // ifstream in("AlokA.txt");
   // getline(in,st);
   // cout<<st;
   string st;

   ofstream out;
   out.open("AlokA.txt");
   out<<"Alok\n";
   out<<"anshu\n";
   out<<"ADPF\n";
   out<<"IORN MAN\n";
   out<<"BADSHAH\n";
   out<<"AMAN KUMAR\n";
   out.close();

   // ifstream in;
   // in.open("AlokA.txt");
   // while (in.eof()==0)      /*eof - (end of line)*/
   // {
   //    getline(in,st);       /*getline found in string lib*/
   //    cout<<st<<endl;
   // }
   
   // in.close();
   return 0;
}