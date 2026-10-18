004e1c10  SUB ESP,0xc
004e1c13  PUSH EBP
004e1c14  MOV EBP,dword ptr [ESP + 0x14]
004e1c18  MOV EAX,dword ptr [EBP + 0x18]
004e1c1b  TEST EAX,EAX
004e1c1d  PUSH ESI
004e1c1e  MOV ESI,ECX
004e1c20  MOV dword ptr [ESP + 0x18],EAX
004e1c24  JZ 0x004e1c31
004e1c26  MOV ECX,dword ptr [ESI + 0x24]
004e1c29  TEST ECX,ECX
004e1c2b  JLE 0x004e1c3b
004e1c2d  CMP EAX,ECX
004e1c2f  JZ 0x004e1c3b
004e1c31  POP ESI
004e1c32  XOR AL,AL
004e1c34  POP EBP
004e1c35  ADD ESP,0xc
004e1c38  RET 0x4
004e1c3b  FILD dword ptr [ESP + 0x18]
004e1c3f  PUSH EBX
004e1c40  PUSH EDI
004e1c41  FST float ptr [ESP + 0x20]
004e1c45  FMUL float ptr [0x00897f2c]
004e1c4b  FST float ptr [ESP + 0x14]
004e1c4f  FSTP float ptr [ESP + 0x10]
004e1c53  FLD float ptr [ESP + 0x10]
004e1c57  FISTP dword ptr [ESP + 0x18]
004e1c5b  MOV EAX,dword ptr [ESP + 0x14]
004e1c5f  MOV dword ptr [ESP + 0x14],EAX
004e1c63  FLD float ptr [ESP + 0x14]
004e1c67  FISTP dword ptr [ESP + 0x10]
004e1c6b  FLD float ptr [ESP + 0x20]
004e1c6f  FMUL float ptr [0x00897f34]
004e1c75  FSTP float ptr [ESP + 0x20]
004e1c79  FLD float ptr [ESP + 0x20]
004e1c7d  FISTP dword ptr [ESP + 0x14]
004e1c81  MOV EDI,dword ptr [ESP + 0x14]
004e1c85  MOV EBX,dword ptr [ESP + 0x10]
004e1c89  MOV EAX,dword ptr [ESI + 0xc]
004e1c8c  LEA ECX,[EDI + EBX*0x1]
004e1c8f  CMP ECX,EAX
004e1c91  JLE 0x004e1c9f
004e1c93  POP EDI
004e1c94  POP EBX
004e1c95  POP ESI
004e1c96  XOR AL,AL
004e1c98  POP EBP
004e1c99  ADD ESP,0xc
004e1c9c  RET 0x4
004e1c9f  CALL 0x0081bccb
004e1ca4  MOV EDX,dword ptr [ESP + 0x18]
004e1ca8  MOV dword ptr [ESI + 0x10],EDX
004e1cab  MOV dword ptr [ESI + 0x14],EBX
004e1cae  MOV dword ptr [ESI + 0x18],EDI
004e1cb1  MOV dword ptr [ESI + 0x28],EBP
004e1cb4  CALL 0x0081bcd9
004e1cb9  POP EDI
004e1cba  POP EBX
004e1cbb  POP ESI
004e1cbc  MOV AL,0x1
004e1cbe  POP EBP
004e1cbf  ADD ESP,0xc
004e1cc2  RET 0x4
