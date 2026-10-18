004ea6f0  PUSH ESI
004ea6f1  MOV ESI,ECX
004ea6f3  MOV EAX,dword ptr [ESI + 0xc]
004ea6f6  CMP EAX,dword ptr [ESI + 0x8]
004ea6f9  JC 0x004ea70c
004ea6fb  MOV EDX,dword ptr [ESI]
004ea6fd  INC EAX
004ea6fe  PUSH EAX
004ea6ff  MOV ECX,ESI
004ea701  CALL dword ptr [EDX + 0xc]
004ea704  PUSH EAX
004ea705  MOV ECX,ESI
004ea707  CALL 0x004ea9b0
004ea70c  MOV EAX,dword ptr [ESI + 0xc]
004ea70f  MOV ECX,dword ptr [ESI + 0x4]
004ea712  LEA EAX,[EAX + EAX*0x4]
004ea715  LEA EAX,[ECX + EAX*0x4]
004ea718  TEST EAX,EAX
004ea71a  JZ 0x004ea73c
004ea71c  MOV EDX,dword ptr [ESP + 0x8]
004ea720  MOV ECX,dword ptr [EDX]
004ea722  MOV dword ptr [EAX],ECX
004ea724  MOV ECX,dword ptr [EDX + 0x4]
004ea727  MOV dword ptr [EAX + 0x4],ECX
004ea72a  MOV ECX,dword ptr [EDX + 0x8]
004ea72d  MOV dword ptr [EAX + 0x8],ECX
004ea730  MOV ECX,dword ptr [EDX + 0xc]
004ea733  MOV dword ptr [EAX + 0xc],ECX
004ea736  MOV EDX,dword ptr [EDX + 0x10]
004ea739  MOV dword ptr [EAX + 0x10],EDX
004ea73c  INC dword ptr [ESI + 0xc]
004ea73f  POP ESI
004ea740  RET 0x4
