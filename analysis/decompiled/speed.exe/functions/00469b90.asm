00469b90  PUSH ECX
00469b91  PUSH ESI
00469b92  LEA EAX,[ESP + 0x4]
00469b96  PUSH EAX
00469b97  MOV ESI,ECX
00469b99  CALL 0x00469b10
00469b9e  MOV ECX,dword ptr [ESP + 0x8]
00469ba2  MOV dword ptr [ESI],ECX
00469ba4  MOV ECX,dword ptr [ESP + 0x14]
00469ba8  ADD ESP,0x4
00469bab  XOR EAX,EAX
00469bad  MOV dword ptr [ESI + 0x4],EAX
00469bb0  MOV dword ptr [ESI + 0xc],EAX
00469bb3  MOV EAX,dword ptr [ESP + 0xc]
00469bb7  LEA EDX,[ESI + 0x10]
00469bba  MOV dword ptr [EDX],EAX
00469bbc  MOV EAX,dword ptr [ESP + 0x14]
00469bc0  MOV dword ptr [EDX + 0x4],ECX
00469bc3  MOV ECX,dword ptr [ESP + 0x18]
00469bc7  MOV dword ptr [EDX + 0x8],EAX
00469bca  MOV EAX,dword ptr [ESP + 0x1c]
00469bce  MOV dword ptr [EDX + 0xc],ECX
00469bd1  MOV ECX,dword ptr [ESP + 0x20]
00469bd5  LEA EDX,[ESI + 0x20]
00469bd8  MOV dword ptr [EDX],EAX
00469bda  MOV EAX,dword ptr [ESP + 0x24]
00469bde  MOV dword ptr [EDX + 0x4],ECX
00469be1  MOV ECX,dword ptr [ESP + 0x28]
00469be5  MOV dword ptr [EDX + 0x8],EAX
00469be8  MOV EAX,dword ptr [ESP + 0x2c]
00469bec  MOV dword ptr [EDX + 0xc],ECX
00469bef  MOV ECX,dword ptr [ESP + 0x30]
00469bf3  LEA EDX,[ESI + 0x30]
00469bf6  MOV dword ptr [EDX],EAX
00469bf8  MOV EAX,dword ptr [ESP + 0x34]
00469bfc  MOV dword ptr [EDX + 0x4],ECX
00469bff  MOV ECX,dword ptr [ESP + 0x38]
00469c03  MOV dword ptr [EDX + 0x8],EAX
00469c06  MOV EAX,dword ptr [ESP + 0x40]
00469c0a  MOV dword ptr [EDX + 0xc],ECX
00469c0d  MOV EDX,dword ptr [ESP + 0x3c]
00469c11  MOV dword ptr [ESI + 0x44],EAX
00469c14  MOV dword ptr [ESI + 0x8],0x48
00469c1b  MOV dword ptr [ESI + 0x40],EDX
00469c1e  MOV EAX,ESI
00469c20  POP ESI
00469c21  POP ECX
00469c22  RET 0x38
