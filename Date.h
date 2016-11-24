//
// Created by michela on 11/11/16.
//

#ifndef PIZZERIA_DATA_H
#define PIZZERIA_DATA_H


class Date {

    public:
        explicit Date(int a=2000, int m=1, int g=1): anno(a),mese(m), giorno(g){}
        bool operator<(const Date& right) const{
            if (anno > right.anno)
                return false;
            else if(anno == right.anno){
                if (mese > right.mese)
                    return false;
                else if (mese == right.mese) {
                    if (giorno>=right.giorno)
                        return false;
                    else return true;
                }else
                    return true;
            }else
                return true; //altrimenti potevo non mettere tutti gli else e lasciare solo questo return true
        }
        int anno, mese, giorno;
    };

class DateComparator {
public:
    bool operator()(const Date& left, const Date& right) const{ //operator è un functor
        if ( left.anno > right.anno)
            return false;
        else if(left.anno == right.anno){
            if (left.mese > right.mese)
                return false;
            else if (left.mese == right.mese) {
                if (left.giorno>=right.giorno)
                    return false;
                else return true;
            }else
                return true;
        }else
            return true; //altrimenti potevo non mettere tutti gli else e lasciare solo questo return true
    }
};


#endif //PIZZERIA_DATA_H
