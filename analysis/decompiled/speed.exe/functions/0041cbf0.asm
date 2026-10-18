0041cbf0  SUB ESP,0x24
0041cbf3  MOV ECX,dword ptr [ESP + 0x28]
0041cbf7  MOV EDX,dword ptr [ESP + 0x2c]
0041cbfb  XOR EAX,EAX
0041cbfd  MOV dword ptr [ESP],EAX
0041cc00  MOV dword ptr [ESP + 0x4],EAX
0041cc04  MOV dword ptr [ESP + 0x8],EAX
0041cc08  MOV dword ptr [ESP + 0xc],EAX
0041cc0c  MOV dword ptr [ESP + 0x10],EAX
0041cc10  MOV dword ptr [ESP + 0x14],0x0
0041cc18  MOV dword ptr [ESP + 0x14],EAX
0041cc1c  MOV dword ptr [ESP + 0x18],EAX
0041cc20  MOV dword ptr [ESP + 0x1c],EAX
0041cc24  MOV dword ptr [ESP + 0x8],ECX
0041cc28  MOV dword ptr [ESP + 0x20],EAX
0041cc2c  MOV EAX,dword ptr [ESP + 0x30]
0041cc30  LEA ECX,[ESP + 0x28]
0041cc34  PUSH ECX
0041cc35  MOV dword ptr [ESP + 0x4],EDX
0041cc39  MOV dword ptr [ESP + 0x8],EAX
0041cc3d  MOV dword ptr [ESP + 0x14],0x40ebe0
0041cc45  CALL 0x004056d0
0041cc4a  MOV EDX,dword ptr [EAX]
0041cc4c  MOV EAX,[0x008f831c]
0041cc51  MOV ECX,dword ptr [ESP + 0x38]
0041cc55  MOV dword ptr [ESP + 0x1c],EAX
0041cc59  INC EAX
0041cc5a  MOV [0x008f831c],EAX
0041cc5f  MOV EAX,dword ptr [ESP + 0x3c]
0041cc63  MOV dword ptr [ESP + 0x20],EAX
0041cc67  MOV EAX,ESP
0041cc69  MOV dword ptr [ESP + 0x18],EDX
0041cc6d  MOV dword ptr [EAX],ECX
0041cc6f  LEA ECX,[ESP + 0x4]
0041cc73  CALL 0x00665390
0041cc78  ADD ESP,0x24
0041cc7b  RET
