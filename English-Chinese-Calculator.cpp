#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,fankui,jieguo,language;
	cout<<"Please selete a language/请选择一种语言：\n1.中文-简体\n2.English\n";
	cin>>language;
	if(language==1){
		while(true){
			cout<<"请选择一种：\n1.a+b\n2.a-b\n3.a*b\n4.a/b\n5.a的b次方\n6.退出\n";
			cin>>fankui;
			cout<<"请输入a、b,中间用空格隔开：\n(如果上一步输入6，则这一步随便输入两个数据)";
			cin>>a>>b;
			if(fankui==1){
				jieguo=a+b;
				
			}else if(fankui==2){
				jieguo=a-b;
			}else if(fankui==3){
				jieguo=a*b;
			}else if(fankui==4){
				jieguo=a/b;
			}else if(fankui==5){
				jieguo=pow(a,b);
				
			}else if(fankui==6){
				break;
			}
			cout<<"结果是"<<jieguo;
			cout<<endl;
		}
	}else if(language==2){
		while(true){
			cout<<"Please selete one:\n1.a+b\n2.a-b\n3.a*b\n4.a/b\n5.A to the power of b\n6.quit\n";
			cin>>fankui;
			cout<<"Input a,b, put SPACE in the middle:\n(If you entered 6 in the previous step, you can enter two data at random in this step)";
			cin>>a>>b;
			if(fankui==1){
				jieguo=a+b;
				
			}else if(fankui==2){
				jieguo=a-b;
			}else if(fankui==3){
				jieguo=a*b;
			}else if(fankui==4){
				jieguo=a/b;
			}else if(fankui==5){
				jieguo=pow(a,b);
			}else if(fankui==6){
				break;
			}
			cout<<"result="<<jieguo;
			cout<<endl;
		}
		
	}
} 
