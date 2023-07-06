#include "BProtocol.h"

BProtocol::BProtocol(){
}

int BProtocol::pack(byte code, int value){
	int out = 0;   //0b00000000 00000000
	
	out |= (code & 0b00001111);            //взяли из code только первые 4 бита и записали
	out <<= 12;	   						   //сдвинули влево
	
	out |= (value & 0b0000111111111111);   //взяли из value только первые 12 бит и записали
	
	return out;
}

void BProtocol::unpack(int data){
	lastCode = (data & 0b1111000000000000) >> 12; //взяли только первые 4 бита(code) и записали
	lastValue = data & 0b0000111111111111;          //взяли только последние 12 бит(value) и записали
}