00494c70  MOV EAX,dword ptr [ESP + 0x8]
00494c74  MOV EDX,dword ptr [ESP + 0x4]
00494c78  TEST EDX,EDX
00494c7a  MOV dword ptr [EAX + 0x8],0x0
00494c81  MOV dword ptr [EAX + 0x4],0x0
00494c88  MOV dword ptr [EAX],0x0
00494c8e  JNZ 0x00494cab
00494c90  MOVZX EDX,byte ptr [ECX]
00494c93  MOV dword ptr [ESP + 0x8],EDX
00494c97  FILD dword ptr [ESP + 0x8]
00494c9b  FMUL float ptr [0x008957c4]
00494ca1  FSUB float ptr [0x0089096c]
00494ca7  FSTP float ptr [EAX]
00494ca9  JMP 0x00494ce3
00494cab  CMP EDX,0x1
00494cae  MOVZX EDX,byte ptr [ECX]
00494cb1  JNZ 0x00494ccc
00494cb3  MOV dword ptr [ESP + 0x8],EDX
00494cb7  FILD dword ptr [ESP + 0x8]
00494cbb  FMUL float ptr [0x008957c4]
00494cc1  FSUB float ptr [0x0089096c]
00494cc7  FSTP float ptr [EAX + 0x4]
00494cca  JMP 0x00494ce3
00494ccc  MOV dword ptr [ESP + 0x8],EDX
00494cd0  FILD dword ptr [ESP + 0x8]
00494cd4  FMUL float ptr [0x008957c4]
00494cda  FSUB float ptr [0x0089096c]
00494ce0  FSTP float ptr [EAX + 0x8]
00494ce3  MOVZX ECX,byte ptr [ECX + 0x1]
00494ce7  MOV dword ptr [ESP + 0x8],ECX
00494ceb  FILD dword ptr [ESP + 0x8]
00494cef  FMUL float ptr [0x008957c4]
00494cf5  FSUB float ptr [0x0089096c]
00494cfb  FSTP float ptr [EAX + 0xc]
00494cfe  RET 0x8
