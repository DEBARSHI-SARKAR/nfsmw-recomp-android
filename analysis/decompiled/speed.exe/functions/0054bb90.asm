0054bb90  PUSH EBX
0054bb91  PUSH ESI
0054bb92  PUSH EDI
0054bb93  MOV EDI,ECX
0054bb95  MOV EAX,dword ptr [EDI + 0xfc]
0054bb9b  LEA ESI,[EDI + 0xfc]
0054bba1  CMP EAX,ESI
0054bba3  JZ 0x0054bbbe
0054bba5  MOV ECX,dword ptr [EAX]
0054bba7  MOV EDX,dword ptr [EAX + 0x4]
0054bbaa  MOV dword ptr [EDX],ECX
0054bbac  PUSH EAX
0054bbad  MOV dword ptr [ECX + 0x4],EDX
0054bbb0  CALL 0x00652b00
0054bbb5  MOV EAX,dword ptr [ESI]
0054bbb7  ADD ESP,0x4
0054bbba  CMP EAX,ESI
0054bbbc  JNZ 0x0054bba5
0054bbbe  MOV EAX,[0x0091cf90]
0054bbc3  MOV ECX,dword ptr [EAX + 0x18c]
0054bbc9  PUSH ECX
0054bbca  MOV ECX,dword ptr [0x0091e004]
0054bbd0  CALL 0x005fb710
0054bbd5  PUSH 0x14
0054bbd7  MOV EBX,EAX
0054bbd9  CALL 0x00652ad0
0054bbde  ADD ESP,0x4
0054bbe1  TEST EAX,EAX
0054bbe3  JZ 0x0054bbf5
0054bbe5  MOV dword ptr [EAX + 0x8],EBX
0054bbe8  MOV byte ptr [EAX + 0xc],0x1
0054bbec  MOV dword ptr [EAX + 0x10],0x0
0054bbf3  JMP 0x0054bbf7
0054bbf5  XOR EAX,EAX
0054bbf7  MOV ECX,dword ptr [ESI + 0x4]
0054bbfa  MOV dword ptr [ECX],EAX
0054bbfc  MOV dword ptr [ESI + 0x4],EAX
0054bbff  MOV dword ptr [EAX + 0x4],ECX
0054bc02  MOV dword ptr [EAX],ESI
0054bc04  MOV ESI,dword ptr [ESI]
0054bc06  MOV dword ptr [EDI + 0x104],ESI
0054bc0c  MOV ESI,dword ptr [ESI + 0x8]
0054bc0f  PUSH ESI
0054bc10  MOV ECX,EDI
0054bc12  MOV dword ptr [EDI + 0x108],ESI
0054bc18  CALL 0x007a30c0
0054bc1d  POP EDI
0054bc1e  POP ESI
0054bc1f  POP EBX
0054bc20  RET
