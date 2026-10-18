0041ceb0  SUB ESP,0x24
0041ceb3  MOV ECX,dword ptr [ESP + 0x28]
0041ceb7  MOV EDX,dword ptr [ESP + 0x2c]
0041cebb  XOR EAX,EAX
0041cebd  MOV dword ptr [ESP],EAX
0041cec0  MOV dword ptr [ESP + 0x4],EAX
0041cec4  MOV dword ptr [ESP + 0x8],EAX
0041cec8  MOV dword ptr [ESP + 0xc],EAX
0041cecc  MOV dword ptr [ESP + 0x10],EAX
0041ced0  MOV dword ptr [ESP + 0x14],0x0
0041ced8  MOV dword ptr [ESP + 0x14],EAX
0041cedc  MOV dword ptr [ESP + 0x18],EAX
0041cee0  MOV dword ptr [ESP + 0x1c],EAX
0041cee4  MOV dword ptr [ESP + 0x8],ECX
0041cee8  MOV dword ptr [ESP + 0x20],EAX
0041ceec  MOV EAX,dword ptr [ESP + 0x30]
0041cef0  LEA ECX,[ESP + 0x28]
0041cef4  PUSH ECX
0041cef5  MOV dword ptr [ESP + 0x4],EDX
0041cef9  MOV dword ptr [ESP + 0x8],EAX
0041cefd  MOV dword ptr [ESP + 0x14],0x40ec60
0041cf05  CALL 0x00404c70
0041cf0a  MOV EDX,dword ptr [EAX]
0041cf0c  MOV EAX,[0x008f831c]
0041cf11  MOV ECX,dword ptr [ESP + 0x38]
0041cf15  MOV dword ptr [ESP + 0x1c],EAX
0041cf19  INC EAX
0041cf1a  MOV [0x008f831c],EAX
0041cf1f  MOV EAX,dword ptr [ESP + 0x3c]
0041cf23  MOV dword ptr [ESP + 0x20],EAX
0041cf27  MOV EAX,ESP
0041cf29  MOV dword ptr [ESP + 0x18],EDX
0041cf2d  MOV dword ptr [EAX],ECX
0041cf2f  LEA ECX,[ESP + 0x4]
0041cf33  CALL 0x00665390
0041cf38  ADD ESP,0x24
0041cf3b  RET
