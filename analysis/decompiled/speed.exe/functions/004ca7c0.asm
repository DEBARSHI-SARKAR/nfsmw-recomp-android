004ca7c0  PUSH ESI
004ca7c1  MOV ESI,ECX
004ca7c3  MOV ECX,dword ptr [ESI + 0xa0]
004ca7c9  IMUL ECX,ECX,0x68
004ca7cc  ADD ECX,0x912858
004ca7d2  CALL 0x004ca1a0
004ca7d7  MOV EAX,dword ptr [ESI + 0xa0]
004ca7dd  MOV ECX,dword ptr [ESP + 0x8]
004ca7e1  IMUL EAX,EAX,0x68
004ca7e4  MOV EDX,dword ptr [ECX]
004ca7e6  ADD EAX,0x912858
004ca7eb  MOV dword ptr [EAX],EDX
004ca7ed  MOV EDX,dword ptr [ECX + 0x14]
004ca7f0  MOV dword ptr [EAX + 0x14],EDX
004ca7f3  MOV EDX,dword ptr [ECX + 0x8]
004ca7f6  MOV dword ptr [EAX + 0x8],EDX
004ca7f9  MOV EDX,dword ptr [ECX + 0xc]
004ca7fc  MOV dword ptr [EAX + 0xc],EDX
004ca7ff  MOV EDX,dword ptr [ECX + 0x10]
004ca802  MOV dword ptr [EAX + 0x10],EDX
004ca805  MOV EDX,dword ptr [ECX + 0x18]
004ca808  MOV dword ptr [EAX + 0x18],EDX
004ca80b  MOV CL,byte ptr [ECX + 0x1c]
004ca80e  MOV byte ptr [EAX + 0x1c],CL
004ca811  MOV EAX,dword ptr [ESI + 0xa0]
004ca817  INC EAX
004ca818  MOV dword ptr [ESI + 0xa0],EAX
004ca81e  MOV ESI,EAX
004ca820  LEA EAX,[ESI + -0x1]
004ca823  POP ESI
004ca824  RET 0x4
