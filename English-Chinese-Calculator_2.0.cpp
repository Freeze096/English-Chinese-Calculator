#include<iostream>
#include<cmath>
#include<windows.h>
#include<unistd.h> 
using namespace std;
int main(){
	int a,b,fankui,jieguo,language;
	cout<<"Please selete a language/��ѡ��һ�����ԣ�\n1.����-����\n2.English\n";
	cin>>language;
	if(language==1){
		while(true){
			cout<<"��ѡ��һ�֣�\n1.a+b\n2.a-b\n3.a*b\n4.a/b\n5.a��b�η�\n6.�˳�\n7.����\n";
			cin>>fankui;
			cout<<"������a��b,�м��ÿո������\n(�����һ������6/7������һ�����������������)";
			cin>>a>>b;
			if(fankui==1){
				jieguo=a+b;
				cout<<"�����"<<jieguo;
			cout<<endl;
				
			}else if(fankui==2){
				jieguo=a-b;
				cout<<"�����"<<jieguo;
			cout<<endl;
			}else if(fankui==3){
				jieguo=a*b;
				cout<<"�����"<<jieguo;
			cout<<endl;
			}else if(fankui==4){
				jieguo=a/b;
				cout<<"�����"<<jieguo;
			cout<<endl;
			}else if(fankui==5){
				jieguo=pow(a,b);
				cout<<"�����"<<jieguo;
			cout<<endl;
				
			}else if(fankui==6){
				break;
				cout<<"�����"<<jieguo;
			cout<<endl;
			}else if(fankui==7){
				sleep(1);
				system("cls");
			}
		
			
		}
	}else if(language==2){
		while(true){
			cout<<"Please selete one:\n1.a+b\n2.a-b\n3.a*b\n4.a/b\n5.A to the power of b\n6.quit\n7.clear screen\n";
			cin>>fankui;
			cout<<"Input a,b, put SPACE in the middle:\n(If you entered 6 in the previous step, you can enter two data at random in this step)";
			cin>>a>>b;
			if(fankui==1){
				jieguo=a+b;
				cout<<"result="<<jieguo;
			cout<<endl;
				
			}else if(fankui==2){
				jieguo=a-b;
				cout<<"result="<<jieguo;
			cout<<endl;
			}else if(fankui==3){
				jieguo=a*b;
				cout<<"result="<<jieguo;
			cout<<endl;
			}else if(fankui==4){
				jieguo=a/b;
				cout<<"result="<<jieguo;
			cout<<endl;
			}else if(fankui==5){
				jieguo=pow(a,b);
				cout<<"result="<<jieguo;
			cout<<endl;
			}else if(fankui==6){
				break;
			}else if(fankui==7){
				sleep(1);
				system("cls");
			}
			
		}
		
	}
} 
