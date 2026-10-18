004e5a80  PUSH EBP
004e5a81  MOV EBP,ESP
004e5a83  AND ESP,0xfffffff0
004e5a86  SUB ESP,0x3c
004e5a89  PUSH ESI
004e5a8a  MOV ESI,ECX
004e5a8c  MOV EAX,dword ptr [ESI + 0x14]
004e5a8f  MOV EAX,dword ptr [EAX + 0x34]
004e5a92  FLD float ptr [EAX + 0x44]
004e5a95  MOV ECX,dword ptr [EAX + 0x40]
004e5a98  FLD float ptr [EAX + 0x48]
004e5a9b  ADD EAX,0x40
004e5a9e  MOV dword ptr [ESI + 0x60],ECX
004e5aa1  FXCH
004e5aa3  FSTP float ptr [ESI + 0x64]
004e5aa6  MOV dword ptr [ESP + 0xc],0x40000000
004e5aae  FSTP float ptr [ESI + 0x68]
004e5ab1  MOV ECX,dword ptr [ESI + 0x14]
004e5ab4  MOV EAX,dword ptr [ECX + 0x34]
004e5ab7  MOV EDX,dword ptr [EAX + 0x10]
004e5aba  ADD EAX,0x10
004e5abd  MOV dword ptr [ESP + 0x10],EDX
004e5ac1  MOV EDX,dword ptr [EAX + 0x4]
004e5ac4  MOV EAX,dword ptr [EAX + 0x8]
004e5ac7  MOV dword ptr [ESP + 0x14],EDX
004e5acb  MOV EDX,dword ptr [ESI + 0x18]
004e5ace  MOV dword ptr [ESP + 0x18],EAX
004e5ad2  MOV EAX,dword ptr [EDX + 0xc4]
004e5ad8  TEST EAX,EAX
004e5ada  JZ 0x004e5b5a
004e5adc  CMP EAX,0x1
004e5adf  JZ 0x004e5b5a
004e5ae1  MOV ECX,dword ptr [ECX + 0x10]
004e5ae4  TEST ECX,ECX
004e5ae6  JLE 0x004e5b54
004e5ae8  CMP ECX,0x1
004e5aeb  MOV EAX,ECX
004e5aed  JLE 0x004e5af4
004e5aef  MOV EAX,0x1
004e5af4  SHL EAX,0x4
004e5af7  ADD EAX,0x914430
004e5afc  MOV EDX,dword ptr [EAX + 0x4]
004e5aff  MOV ECX,dword ptr [EAX]
004e5b01  MOV EAX,dword ptr [ESI + 0x60]
004e5b04  MOV dword ptr [ESP + 0x24],EDX
004e5b08  LEA EDX,[ESP + 0x20]
004e5b0c  MOV dword ptr [ESP + 0x30],EAX
004e5b10  MOV dword ptr [ESP + 0x20],ECX
004e5b14  MOV ECX,dword ptr [ESI + 0x64]
004e5b17  PUSH EDX
004e5b18  LEA EAX,[ESP + 0x34]
004e5b1c  PUSH EAX
004e5b1d  MOV dword ptr [ESP + 0x30],0x0
004e5b25  MOV dword ptr [ESP + 0x3c],ECX
004e5b29  MOV dword ptr [ESP + 0x40],0x0
004e5b31  CALL 0x0045f340
004e5b36  FSUB float ptr [0x0089096c]
004e5b3c  FLD float ptr [0x00897dd0]
004e5b42  ADD ESP,0x8
004e5b45  FCOMP
004e5b47  FNSTSW AX
004e5b49  TEST AH,0x5
004e5b4c  JNP 0x004e5b58
004e5b4e  FSTP float ptr [ESP + 0xc]
004e5b52  JMP 0x004e5b5a
004e5b54  XOR EAX,EAX
004e5b56  JMP 0x004e5af4
004e5b58  FSTP ST0
004e5b5a  FLD float ptr [ESP + 0xc]
004e5b5e  MOV EDX,dword ptr [EBP + 0x8]
004e5b61  FCHS
004e5b63  PUSH EDX
004e5b64  FLD float ptr [ESP + 0x14]
004e5b68  FMUL ST1
004e5b6a  FSTP float ptr [ESP + 0x34]
004e5b6e  FLD float ptr [ESP + 0x18]
004e5b72  FMUL ST1
004e5b74  FSTP float ptr [ESP + 0x38]
004e5b78  FMUL float ptr [ESP + 0x1c]
004e5b7c  FLD float ptr [ESP + 0x34]
004e5b80  FADD float ptr [ESI + 0x60]
004e5b83  FLD float ptr [ESP + 0x38]
004e5b87  FADD float ptr [ESI + 0x64]
004e5b8a  FXCH ST2
004e5b8c  FADD float ptr [ESI + 0x68]
004e5b8f  FSTP float ptr [ESP + 0x3c]
004e5b93  MOV ECX,dword ptr [ESP + 0x3c]
004e5b97  MOV dword ptr [ESI + 0x68],ECX
004e5b9a  FSTP float ptr [ESI + 0x60]
004e5b9d  MOV ECX,ESI
004e5b9f  FSTP float ptr [ESI + 0x64]
004e5ba2  CALL 0x004c6250
004e5ba7  POP ESI
004e5ba8  MOV ESP,EBP
004e5baa  POP EBP
004e5bab  RET 0x4
