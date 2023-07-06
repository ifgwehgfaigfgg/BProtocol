#pragma once
#include <Arduino.h>

//Пакуем и распаковываем данные для отправки
//2 байта
//Последние 4 бита - код сообщения
//Остальные 12 - само сообщение

class BProtocol{
	public:
		BProtocol();
		
		int pack(byte code, int value);    // code: 0 - 15(4 бита); value: 0 - 4095(12 бит)
		void unpack(int data); 
		
		byte lastCode;
		int lastValue;
		
	private:
};