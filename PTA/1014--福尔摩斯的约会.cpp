#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<int,string> day;
    day[1]="MON"; day[2]="TUE";day[3]="WED";day[4]="THU";    //���õ�ӳ��map����ȻҲ�������ַ�������ʵ��
    day[5]="FRI";day[6]="SAT";day[7]="SUN";
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;        //�����ĸ��ַ���
    int flag=0;           //���ڱ���Ƿ��Ѿ����������
    for(int i=0;i<str1.length();i++){
        if(!flag && str1[i]==str2[i] && str1[i]>='A' && str1[i]<='G'){  //��û��������ڣ�������ͬλ������ͬ��A~ Z�ڵ���ͬ��ĸ
            cout<<day[str1[i]-'A'+1]<<' ';        //�������ĸ���е����,Ȼ��������ڡ��ǵÿո�
            flag=1;                           //�����Ϊ1.
        }

        else if(flag && str1[i]==str2[i]){    //�Ѿ����������,ѡ��ʼȷ��Сʱ
            if(str1[i]>='A' && str1[i]<='N'){
                cout<<str1[i]-'A'+10<<':';        //�����A~N�ڵģ� str1[i]-'A'+1+9
                break;     //Ҫ��ʱ����ѭ��,��Ϊ������ܻ������������ġ�������Ͷ�����
            }
            else if(str1[i]>='0'&&str1[i]<='9'){
            cout<<'0'<<str1[i]<<':';     //��������λ�����ǵò���
            break;
            }
        }
    }
    for(int i=0;i<str3.length();i++){     //ȷ������
        if(str3[i]==str4[i]){
            if((str3[i]>='a'&& str3[i]<='z')||(str3[i]>='A'&& str3[i]<='Z')){   //Ҫ��Ӣ����ĸ����
                if(i<10) cout<<'0'<<i;     //����
                else cout<<i;    //���������
            }
        }
    }
}
