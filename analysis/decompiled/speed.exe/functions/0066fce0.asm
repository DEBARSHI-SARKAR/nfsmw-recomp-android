0066fce0  PUSH ESI
0066fce1  MOV ESI,ECX
0066fce3  PUSH ESI
0066fce4  CALL 0x00668650
0066fce9  MOV EAX,dword ptr [ESP + 0xc]
0066fced  MOV ECX,dword ptr [ESP + 0x10]
0066fcf1  MOV EDX,dword ptr [ESP + 0x14]
0066fcf5  MOV dword ptr [ESI + 0x4],0xa6b47fac
0066fcfc  MOV dword ptr [ESI + 0x10],EAX
0066fcff  MOV EAX,dword ptr [ESP + 0x18]
0066fd03  MOV dword ptr [ESI + 0x1c],EAX
0066fd06  MOV EAX,dword ptr [ESP + 0x24]
0066fd0a  MOV dword ptr [ESI + 0x14],ECX
0066fd0d  MOV ECX,dword ptr [ESP + 0x1c]
0066fd11  MOV dword ptr [ESI + 0x18],EDX
0066fd14  MOV EDX,dword ptr [ESP + 0x20]
0066fd18  MOV dword ptr [ESI + 0x28],EAX
0066fd1b  MOV EAX,dword ptr [ESP + 0x30]
0066fd1f  MOV dword ptr [ESI + 0x20],ECX
0066fd22  MOV CL,byte ptr [ESP + 0x2c]
0066fd26  MOV dword ptr [ESI + 0x24],EDX
0066fd29  MOV EDX,dword ptr [ESP + 0x28]
0066fd2d  MOV dword ptr [ESI + 0x34],EAX
0066fd30  ADD ESP,0x4
0066fd33  MOV dword ptr [ESI + 0x8],ESI
0066fd36  MOV byte ptr [ESI + 0x2c],CL
0066fd39  MOV dword ptr [ESI + 0x30],EDX
0066fd3c  MOV EAX,ESI
0066fd3e  POP ESI
0066fd3f  RET 0x28
