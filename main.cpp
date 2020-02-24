#include <iostream>
#include "op.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "Abs.hpp"
#include "Floor.hpp"
#include "Ceil.hpp"
#include "Paren.hpp"
#include "Trunc.hpp"

using namespace std;

int main(){
    Op *nine = new Op(9);
    Op *one = new Op(1);
    Mult *Tree1 = new Mult(nine, one);

    Op *eight = new Op(8);
    Op *two = new Op(2);
    ADD *Tree2 = new ADD(eight, two);

    Op *twelve = new Op(12);
    Op *ten = new Op(10);
    Sub *Tree3 = new Sub(twelve, ten);

    Paren *parent1 = new Paren(Tree1);
    Trunc *Trunc1 = new Trunc(Tree2);
    Paren *parent2 = new Paren(Tree3);

    cout << parent1 -> stringify()<< endl;
    cout << Trunc1 -> stringify() << endl;
    cout << parent2 -> stringify() << endl;
    return 0;
}