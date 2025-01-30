#pragma once

class Vector3 {
public:
	float x;
	float z;
	float y;
};


// Reclass -> c++ code 
class Player
{
public:
	Vector3 N00000050; //0x0004
	Vector3 velocity; //0x0010
	Vector3 N00000052; //0x001C
	Vector3 pos; //0x0028
	char pad_0034[72]; //0x0034
	Vector3 N00000068; //0x0084
	Vector3 N00000069; //0x0090
	Vector3 N0000006A; //0x009C
	char pad_00A8[208]; //0x00A8

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0178