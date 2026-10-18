0048ea60  SUB ESP,0x20
0048ea63  PUSH EBX
0048ea64  MOV EBX,dword ptr [ESP + 0x28]
0048ea68  PUSH ESI
0048ea69  MOV ESI,dword ptr [ESP + 0x34]
0048ea6d  PUSH EDI
0048ea6e  LEA EAX,[ESP + 0xc]
0048ea72  PUSH EAX
0048ea73  LEA EDI,[ESI + 0x10]
0048ea76  PUSH EBX
0048ea77  PUSH EDI
0048ea78  CALL 0x0048ddf0
0048ea7d  MOV ECX,dword ptr [ESP + 0x18]
0048ea81  MOV EDX,dword ptr [ESP + 0x1c]
0048ea85  MOV EAX,dword ptr [ESP + 0x20]
0048ea89  MOV dword ptr [EDI],ECX
0048ea8b  MOV ECX,dword ptr [ESP + 0x24]
0048ea8f  MOV dword ptr [EDI + 0x4],EDX
0048ea92  MOV EDX,dword ptr [ESI + 0x20]
0048ea95  MOV dword ptr [EDI + 0x8],EAX
0048ea98  MOV EAX,dword ptr [ESI + 0x24]
0048ea9b  MOV dword ptr [ESP + 0x28],EDX
0048ea9f  LEA EDX,[ESP + 0x18]
0048eaa3  MOV dword ptr [ESP + 0x2c],EAX
0048eaa7  PUSH EDX
0048eaa8  LEA EAX,[ESP + 0x2c]
0048eaac  MOV dword ptr [EDI + 0xc],ECX
0048eaaf  MOV ECX,dword ptr [ESI + 0x28]
0048eab2  PUSH EAX
0048eab3  PUSH EBX
0048eab4  MOV dword ptr [ESP + 0x3c],ECX
0048eab8  MOV dword ptr [ESP + 0x40],0x3f800000
0048eac0  CALL 0x0048dec0
0048eac5  FLD float ptr [ESP + 0x24]
0048eac9  MOV EAX,dword ptr [ESP + 0x4c]
0048eacd  FADD float ptr [EAX]
0048eacf  ADD ESP,0x18
0048ead2  POP EDI
0048ead3  FSTP float ptr [ESI + 0x20]
0048ead6  FLD float ptr [ESP + 0xc]
0048eada  FADD float ptr [EAX + 0x4]
0048eadd  FSTP float ptr [ESI + 0x24]
0048eae0  FLD float ptr [ESP + 0x10]
0048eae4  FADD float ptr [EAX + 0x8]
0048eae7  FSTP float ptr [ESI + 0x28]
0048eaea  POP ESI
0048eaeb  POP EBX
0048eaec  ADD ESP,0x20
0048eaef  RET
