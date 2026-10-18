005aa690  MOV EAX,FS:[0x0]
005aa696  PUSH -0x1
005aa698  PUSH 0x873d08
005aa69d  PUSH EAX
005aa69e  MOV dword ptr FS:[0x0],ESP
005aa6a5  SUB ESP,0x44
005aa6a8  PUSH ESI
005aa6a9  PUSH EDI
005aa6aa  MOV EDI,ECX
005aa6ac  CMP dword ptr [EDI + 0x8],0x1ffffffe
005aa6b3  JC 0x005aa701
005aa6b5  PUSH 0x13
005aa6b7  XOR ESI,ESI
005aa6b9  PUSH 0x892b50
005aa6be  LEA ECX,[ESP + 0x10]
005aa6c2  MOV dword ptr [ESP + 0x28],0xf
005aa6ca  MOV dword ptr [ESP + 0x24],ESI
005aa6ce  MOV byte ptr [ESP + 0x14],0x0
005aa6d3  CALL 0x004303b0
005aa6d8  LEA EAX,[ESP + 0x8]
005aa6dc  PUSH EAX
005aa6dd  LEA ECX,[ESP + 0x28]
005aa6e1  MOV dword ptr [ESP + 0x58],ESI
005aa6e5  CALL 0x00432d50
005aa6ea  PUSH 0x8c9ca8
005aa6ef  LEA ECX,[ESP + 0x28]
005aa6f3  PUSH ECX
005aa6f4  MOV dword ptr [ESP + 0x2c],0x8bf290
005aa6fc  CALL 0x007c56b0
005aa701  MOV EDX,dword ptr [ESP + 0x68]
005aa705  MOV EAX,dword ptr [EDI + 0x4]
005aa708  MOV ESI,dword ptr [ESP + 0x64]
005aa70c  PUSH EBX
005aa70d  PUSH 0x0
005aa70f  PUSH EDX
005aa710  PUSH EAX
005aa711  PUSH ESI
005aa712  PUSH EAX
005aa713  MOV ECX,EDI
005aa715  CALL 0x0058b450
005aa71a  MOV EBX,dword ptr [EDI + 0x8]
005aa71d  MOV ECX,EAX
005aa71f  MOV EAX,dword ptr [EDI + 0x4]
005aa722  INC EBX
005aa723  CMP ESI,EAX
005aa725  MOV dword ptr [ESP + 0x6c],ECX
005aa729  MOV dword ptr [EDI + 0x8],EBX
005aa72c  JNZ 0x005aa73e
005aa72e  MOV dword ptr [EAX + 0x4],ECX
005aa731  MOV EAX,dword ptr [EDI + 0x4]
005aa734  MOV dword ptr [EAX],ECX
005aa736  MOV EDX,dword ptr [EDI + 0x4]
005aa739  MOV dword ptr [EDX + 0x8],ECX
005aa73c  JMP 0x005aa761
005aa73e  MOV AL,byte ptr [ESP + 0x64]
005aa742  TEST AL,AL
005aa744  JZ 0x005aa753
005aa746  MOV dword ptr [ESI],ECX
005aa748  MOV EAX,dword ptr [EDI + 0x4]
005aa74b  CMP ESI,dword ptr [EAX]
005aa74d  JNZ 0x005aa761
005aa74f  MOV dword ptr [EAX],ECX
005aa751  JMP 0x005aa761
005aa753  MOV dword ptr [ESI + 0x8],ECX
005aa756  MOV EAX,dword ptr [EDI + 0x4]
005aa759  CMP ESI,dword ptr [EAX + 0x8]
005aa75c  JNZ 0x005aa761
005aa75e  MOV dword ptr [EAX + 0x8],ECX
005aa761  MOV EDX,dword ptr [ECX + 0x4]
005aa764  CMP byte ptr [EDX + 0x14],0x0
005aa768  LEA EAX,[ECX + 0x4]
005aa76b  MOV ESI,ECX
005aa76d  MOV BL,0x1
005aa76f  JNZ 0x005aa81a
005aa775  PUSH EBP
005aa776  MOV ECX,dword ptr [EAX]
005aa778  MOV EBP,dword ptr [ECX + 0x4]
005aa77b  MOV EDX,dword ptr [EBP]
005aa77e  CMP ECX,EDX
005aa780  JNZ 0x005aa7d2
005aa782  MOV EDX,dword ptr [EBP + 0x8]
005aa785  CMP byte ptr [EDX + 0x14],0x0
005aa789  JNZ 0x005aa7a3
005aa78b  MOV ECX,dword ptr [EAX]
005aa78d  MOV byte ptr [ECX + 0x14],BL
005aa790  MOV byte ptr [EDX + 0x14],BL
005aa793  MOV EDX,dword ptr [EAX]
005aa795  MOV ECX,dword ptr [EDX + 0x4]
005aa798  MOV byte ptr [ECX + 0x14],0x0
005aa79c  MOV EDX,dword ptr [EAX]
005aa79e  MOV ESI,dword ptr [EDX + 0x4]
005aa7a1  JMP 0x005aa804
005aa7a3  CMP ESI,dword ptr [ECX + 0x8]
005aa7a6  JNZ 0x005aa7b2
005aa7a8  MOV ESI,ECX
005aa7aa  PUSH ESI
005aa7ab  MOV ECX,EDI
005aa7ad  CALL 0x0058b390
005aa7b2  MOV EAX,dword ptr [ESI + 0x4]
005aa7b5  MOV byte ptr [EAX + 0x14],BL
005aa7b8  MOV ECX,dword ptr [ESI + 0x4]
005aa7bb  MOV EDX,dword ptr [ECX + 0x4]
005aa7be  MOV byte ptr [EDX + 0x14],0x0
005aa7c2  MOV EAX,dword ptr [ESI + 0x4]
005aa7c5  MOV ECX,dword ptr [EAX + 0x4]
005aa7c8  PUSH ECX
005aa7c9  MOV ECX,EDI
005aa7cb  CALL 0x0058b3f0
005aa7d0  JMP 0x005aa804
005aa7d2  CMP byte ptr [EDX + 0x14],0x0
005aa7d6  JZ 0x005aa78b
005aa7d8  CMP ESI,dword ptr [ECX]
005aa7da  JNZ 0x005aa7e6
005aa7dc  MOV ESI,ECX
005aa7de  PUSH ESI
005aa7df  MOV ECX,EDI
005aa7e1  CALL 0x0058b3f0
005aa7e6  MOV EAX,dword ptr [ESI + 0x4]
005aa7e9  MOV byte ptr [EAX + 0x14],BL
005aa7ec  MOV ECX,dword ptr [ESI + 0x4]
005aa7ef  MOV EDX,dword ptr [ECX + 0x4]
005aa7f2  MOV byte ptr [EDX + 0x14],0x0
005aa7f6  MOV EAX,dword ptr [ESI + 0x4]
005aa7f9  MOV ECX,dword ptr [EAX + 0x4]
005aa7fc  PUSH ECX
005aa7fd  MOV ECX,EDI
005aa7ff  CALL 0x0058b390
005aa804  MOV EDX,dword ptr [ESI + 0x4]
005aa807  MOV CL,byte ptr [EDX + 0x14]
005aa80a  TEST CL,CL
005aa80c  LEA EAX,[ESI + 0x4]
005aa80f  JZ 0x005aa776
005aa815  MOV ECX,dword ptr [ESP + 0x70]
005aa819  POP EBP
005aa81a  MOV EAX,dword ptr [EDI + 0x4]
005aa81d  MOV EDX,dword ptr [EAX + 0x4]
005aa820  MOV EAX,dword ptr [ESP + 0x60]
005aa824  MOV byte ptr [EDX + 0x14],BL
005aa827  POP EBX
005aa828  MOV dword ptr [EAX],ECX
005aa82a  MOV ECX,dword ptr [ESP + 0x4c]
005aa82e  POP EDI
005aa82f  POP ESI
005aa830  MOV dword ptr FS:[0x0],ECX
005aa837  ADD ESP,0x50
005aa83a  RET 0x10
