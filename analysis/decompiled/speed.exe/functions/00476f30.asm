00476f30  MOV EAX,dword ptr [ECX + 0x80]
00476f36  XOR EDX,EDX
00476f38  CMP EAX,EDX
00476f3a  JZ 0x00476fea
00476f40  CMP EAX,0x1
00476f43  JZ 0x00476fd6
00476f49  MOV EAX,dword ptr [ECX + 0x9c]
00476f4f  MOV dword ptr [ECX + 0xcc],EAX
00476f55  MOV EAX,dword ptr [ECX + 0xa0]
00476f5b  MOV dword ptr [ECX + 0xd0],EAX
00476f61  MOV dword ptr [ECX + 0xfc],EDX
00476f67  MOV dword ptr [ECX + 0x100],0x42340000
00476f71  FLD float ptr [ECX + 0xb4]
00476f77  FLD float ptr [ECX + 0xb8]
00476f7d  MOV EAX,dword ptr [ECX + 0xb0]
00476f83  MOV dword ptr [ECX + 0xe0],EAX
00476f89  FXCH
00476f8b  FSTP float ptr [ECX + 0xe4]
00476f91  FSTP float ptr [ECX + 0xe8]
00476f97  MOV dword ptr [ECX + 0x110],EDX
00476f9d  MOV dword ptr [ECX + 0x114],EDX
00476fa3  MOV dword ptr [ECX + 0x118],0x3f400000
00476fad  MOV EAX,dword ptr [ECX + 0xfc]
00476fb3  PUSH EAX
00476fb4  MOV EAX,dword ptr [ECX + 0xcc]
00476fba  PUSH EAX
00476fbb  CALL 0x0046b980
00476fc0  FSTP float ptr [ECX + 0xfc]
00476fc6  MOV dword ptr [ECX + 0x134],EDX
00476fcc  MOV dword ptr [ECX + 0x138],0x3f0e147b
00476fd6  MOV EDX,dword ptr [ESP + 0x4]
00476fda  MOV dword ptr [ECX + 0x80],0x1
00476fe4  MOV dword ptr [ECX + 0x128],EDX
00476fea  RET 0x4
