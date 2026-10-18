004b0ee0  PUSH ECX
004b0ee1  PUSH ESI
004b0ee2  LEA EAX,[ESP + 0x4]
004b0ee6  PUSH EAX
004b0ee7  MOV ESI,ECX
004b0ee9  CALL 0x004b0e60
004b0eee  MOV ECX,dword ptr [ESP + 0x8]
004b0ef2  MOV EDX,dword ptr [ESP + 0x10]
004b0ef6  ADD ESP,0x4
004b0ef9  XOR EAX,EAX
004b0efb  MOV dword ptr [ESI],ECX
004b0efd  MOV ECX,dword ptr [ESP + 0x14]
004b0f01  MOV dword ptr [ESI + 0x4],EAX
004b0f04  MOV dword ptr [ESI + 0xc],EAX
004b0f07  MOV EAX,dword ptr [ESP + 0x10]
004b0f0b  MOV dword ptr [ESI + 0x10],EDX
004b0f0e  MOV EDX,dword ptr [ESP + 0x18]
004b0f12  MOV dword ptr [ESI + 0x14],EAX
004b0f15  MOV dword ptr [ESI + 0x8],0x20
004b0f1c  MOV dword ptr [ESI + 0x18],ECX
004b0f1f  MOV dword ptr [ESI + 0x1c],EDX
004b0f22  MOV EAX,ESI
004b0f24  POP ESI
004b0f25  POP ECX
004b0f26  RET 0x10
