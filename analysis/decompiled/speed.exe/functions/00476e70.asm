00476e70  MOV EAX,dword ptr [ECX + 0x80]
00476e76  XOR EDX,EDX
00476e78  CMP EAX,EDX
00476e7a  JZ 0x00476f2a
00476e80  CMP EAX,0x1
00476e83  JZ 0x00476f16
00476e89  MOV EAX,dword ptr [ECX + 0x9c]
00476e8f  MOV dword ptr [ECX + 0xcc],EAX
00476e95  MOV EAX,dword ptr [ECX + 0xa0]
00476e9b  MOV dword ptr [ECX + 0xd0],EAX
00476ea1  MOV dword ptr [ECX + 0xfc],EDX
00476ea7  MOV dword ptr [ECX + 0x100],0x42340000
00476eb1  FLD float ptr [ECX + 0xb4]
00476eb7  FLD float ptr [ECX + 0xb8]
00476ebd  MOV EAX,dword ptr [ECX + 0xb0]
00476ec3  MOV dword ptr [ECX + 0xe0],EAX
00476ec9  FXCH
00476ecb  FSTP float ptr [ECX + 0xe4]
00476ed1  FSTP float ptr [ECX + 0xe8]
00476ed7  MOV dword ptr [ECX + 0x110],EDX
00476edd  MOV dword ptr [ECX + 0x114],EDX
00476ee3  MOV dword ptr [ECX + 0x118],0x3f400000
00476eed  MOV EAX,dword ptr [ECX + 0xfc]
00476ef3  PUSH EAX
00476ef4  MOV EAX,dword ptr [ECX + 0xcc]
00476efa  PUSH EAX
00476efb  CALL 0x0046b980
00476f00  FSTP float ptr [ECX + 0xfc]
00476f06  MOV dword ptr [ECX + 0x134],EDX
00476f0c  MOV dword ptr [ECX + 0x138],0x3f0e147b
00476f16  MOV EDX,dword ptr [ESP + 0x4]
00476f1a  MOV dword ptr [ECX + 0x80],0x1
00476f24  MOV dword ptr [ECX + 0x124],EDX
00476f2a  RET 0x4
