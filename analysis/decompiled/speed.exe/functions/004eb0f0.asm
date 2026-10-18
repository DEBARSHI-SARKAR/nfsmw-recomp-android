004eb0f0  SUB ESP,0x24
004eb0f3  MOV ECX,dword ptr [ESP + 0x28]
004eb0f7  MOV EDX,dword ptr [ESP + 0x2c]
004eb0fb  XOR EAX,EAX
004eb0fd  MOV dword ptr [ESP],EAX
004eb100  MOV dword ptr [ESP + 0x4],EAX
004eb104  MOV dword ptr [ESP + 0x8],EAX
004eb108  MOV dword ptr [ESP + 0xc],EAX
004eb10c  MOV dword ptr [ESP + 0x10],EAX
004eb110  MOV dword ptr [ESP + 0x14],0x0
004eb118  MOV dword ptr [ESP + 0x14],EAX
004eb11c  MOV dword ptr [ESP + 0x18],EAX
004eb120  MOV dword ptr [ESP + 0x1c],EAX
004eb124  MOV dword ptr [ESP + 0x20],EAX
004eb128  LEA EAX,[ESP + 0x28]
004eb12c  PUSH EAX
004eb12d  MOV dword ptr [ESP + 0x8],ECX
004eb131  MOV dword ptr [ESP + 0x4],EDX
004eb135  MOV dword ptr [ESP + 0x14],0x4e4b90
004eb13d  CALL 0x004d27b0
004eb142  MOV ECX,dword ptr [EAX]
004eb144  MOV EAX,[0x008f831c]
004eb149  MOV EDX,dword ptr [ESP + 0x38]
004eb14d  MOV dword ptr [ESP + 0x1c],EAX
004eb151  INC EAX
004eb152  MOV dword ptr [ESP + 0x18],ECX
004eb156  MOV ECX,dword ptr [ESP + 0x34]
004eb15a  MOV [0x008f831c],EAX
004eb15f  MOV EAX,ESP
004eb161  MOV dword ptr [ESP + 0x20],EDX
004eb165  MOV dword ptr [EAX],ECX
004eb167  LEA ECX,[ESP + 0x4]
004eb16b  CALL 0x00665390
004eb170  ADD ESP,0x24
004eb173  RET
