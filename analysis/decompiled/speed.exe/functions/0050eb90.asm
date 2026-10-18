0050eb90  PUSH EBX
0050eb91  PUSH ESI
0050eb92  MOV ESI,ECX
0050eb94  MOV EAX,dword ptr [ESI + 0x10]
0050eb97  XOR EBX,EBX
0050eb99  CMP EAX,EBX
0050eb9b  JZ 0x0050eba6
0050eb9d  MOV ECX,dword ptr [ESI + 0x14]
0050eba0  PUSH ECX
0050eba1  CALL EAX
0050eba3  ADD ESP,0x4
0050eba6  MOV EDX,dword ptr [ESP + 0xc]
0050ebaa  MOV dword ptr [ESI],EBX
0050ebac  MOV dword ptr [ESI + 0xc],EBX
0050ebaf  MOV dword ptr [ESI + 0x8],EBX
0050ebb2  MOV dword ptr [ESI + 0x4],EBX
0050ebb5  MOV dword ptr [ESI + 0x10],EBX
0050ebb8  MOV dword ptr [ESI + 0x14],EBX
0050ebbb  MOV dword ptr [ESI + 0x24],EBX
0050ebbe  MOV dword ptr [ESI + 0x28],EBX
0050ebc1  MOV byte ptr [ESI + 0x30],BL
0050ebc4  MOV dword ptr [ESI + 0x1c],EBX
0050ebc7  MOV dword ptr [ESI + 0x20],EBX
0050ebca  MOV dword ptr [ESI + 0x18],EDX
0050ebcd  POP ESI
0050ebce  POP EBX
0050ebcf  RET 0x4
