0083fe80  MOV ECX,dword ptr [ESP + 0x8]
0083fe84  MOV EDX,dword ptr [ESP + 0x4]
0083fe88  XOR EAX,EAX
0083fe8a  LEA EBX,[EBX]
0083fe90  CMP dword ptr [EAX*0x8 + 0x9c3640],EDX
0083fe97  JNZ 0x0083fea2
0083fe99  CMP dword ptr [EAX*0x8 + 0x9c3644],ECX
0083fea0  JZ 0x0083feac
0083fea2  INC EAX
0083fea3  CMP EAX,0x10
0083fea6  JL 0x0083fe90
0083fea8  OR EAX,0xffffffff
0083feab  RET
0083feac  MOV dword ptr [EAX*0x8 + 0x9c3640],0x0
0083feb7  MOV dword ptr [EAX*0x8 + 0x9c3644],0x0
0083fec2  XOR EAX,EAX
0083fec4  RET
