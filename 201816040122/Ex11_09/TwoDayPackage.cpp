#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(const string &a,const string  &b,const string &c,const string &d,const string &e,double f,double g,double h)
    :Package(a,b,c,d,e,f,g)
    {
        setFlatCharge(h);
    }
void TwoDayPackage::setFlatCharge(double h)
    {
        if(h>0)
            flatcharge=h;
        else
            flatcharge=0;
    }
double TwoDayPackage::getFlatCharge()
{
    return flatcharge;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getFlatCharge();
}
void TwoDayPackage::display()
{
    Package::display();
    cout<<"��Ҫ�������տ�ݵ�ƽ�ʷ�Ϊ��"<<getFlatCharge()<<endl;
    cout<<"��Ҫ֧���ķ���Ϊ��"<<Package::calculateCost()<<" + "<<getFlatCharge()<<" = "<<calculateCost()<<endl;
}
