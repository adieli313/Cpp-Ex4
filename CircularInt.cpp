    #include <iostream>
    #include "CircularInt.hpp"
    using namespace std;
    
    
    
    CircularInt::CircularInt(int x,int y){
    this->low=x;
    this->high=y;
    this->hour=y;
    }
    
    ostream& operator<<(ostream& os, const CircularInt& circularInt) {
        os << circularInt.low;
        return os;
    }
    
       
    
    CircularInt& operator-=(CircularInt& x ,int a){
           x.low=x.low+a;
           if(x.low>x.high){
           x.low=x.low%x.high;
    
       }
           return x;
       }
    
    
       CircularInt& operator+=(CircularInt& x ,int a){
           x.low=x.low+a;
           if(x.low>x.high){
           x.low=x.low%x.high;
    
       }
           return x;
       }
    
    CircularInt& operator++(CircularInt &b,int){
    
    b.low+=1;
    if(b.low>b.high){
           b.low=b.low%b.high;
    
       }
    return b;
    
    }
    CircularInt& operator--(CircularInt& x,int) {
       
       x.low=x.low-1;
       if(x.low>x.high){
          x.low=x.low%x.high;
       }
    }
    int operator-(CircularInt& x){
    return x.hour-x.low;
    }
    CircularInt& operator-(int num,CircularInt& x){
    
    x.low=x.hour+(num-x.low);
    if(x.low>x.high){
    x.low=x.low-x.high;
    }
    return x;
    }
    int operator+(CircularInt& x,CircularInt& y){
    int temp=x.low+x.low;
    if(temp>x.hour){
    return temp%x.hour;
    }
    else 
        return temp ;
    
    }
    CircularInt& operator*=(CircularInt& x,int num){
    x.low=x.low*num;
    if(x.low>x.hour){
    x.low=x.low%x.hour;
    return x;
    }
    else return x ;
    }
    int operator/(CircularInt& x,int y){
    if(x.low%y==0){
    return x.low/y;
    
    }else{
    throw string( "Cant be divided" );
    
    }
    
    }
    
                
                // int main(){
                // CircularInt hour(1,12);
                
                // try {
                // 		cout << hour/3;
                // 	} catch (const string& message) {
                // 		cout << message << endl;     // "There is no number x in {1,12} such that x*3=10"
                // 	}
                
                //     return 0;
                // }