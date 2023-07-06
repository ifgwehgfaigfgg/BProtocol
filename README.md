# BProtocol
Micro 2 byte protocol

# Using
```cpp
BProtocol();
		
int pack(byte code, int value);    // code: 0 - 15(4 bits); value: 0 - 4095(12 bits)
void unpack(int data); 
		
byte lastCode;                     //here will be your data after unpacking
int lastValue;
```
