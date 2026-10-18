00423bd0  SUB ESP,0x10
00423bd3  PUSH EBX
00423bd4  PUSH EBP
00423bd5  MOV EBP,dword ptr [ESP + 0x24]
00423bd9  MOV EAX,dword ptr [EBP + 0x4]
00423bdc  MOV EBX,dword ptr [EAX]
00423bde  CMP EBX,EAX
00423be0  MOV dword ptr [ESP + 0x8],0x0
00423be8  JZ 0x00423ce5
00423bee  PUSH EDI
00423bef  MOV EDI,dword ptr [ESP + 0x20]
00423bf3  PUSH ESI
00423bf4  MOV EAX,dword ptr [EBX + 0x8]
00423bf7  MOV EAX,dword ptr [EAX + 0x14]
00423bfa  TEST EAX,EAX
00423bfc  JZ 0x00423c79
00423bfe  MOV ECX,dword ptr [EAX + 0x4]
00423c01  PUSH 0x4039f0
00423c06  CALL 0x005d59f0
00423c0b  MOV ESI,EAX
00423c0d  TEST ESI,ESI
00423c0f  SETNZ AL
00423c12  TEST AL,AL
00423c14  JZ 0x00423c79
00423c16  MOV EAX,dword ptr [ESI]
00423c18  MOV ECX,ESI
00423c1a  CALL dword ptr [EAX + 0x2c]
00423c1d  FCOMP float ptr [0x0089096c]
00423c23  MOV EDX,dword ptr [ESI]
00423c25  MOV ECX,ESI
00423c27  FNSTSW AX
00423c29  TEST AH,0x41
00423c2c  JNZ 0x00423c47
00423c2e  CALL dword ptr [EDX + 0x24]
00423c31  MOV ECX,dword ptr [EAX]
00423c33  MOV dword ptr [ESP + 0x14],ECX
00423c37  MOV EDX,dword ptr [EAX + 0x4]
00423c3a  MOV dword ptr [ESP + 0x18],EDX
00423c3e  MOV EAX,dword ptr [EAX + 0x8]
00423c41  MOV dword ptr [ESP + 0x1c],EAX
00423c45  JMP 0x00423c4f
00423c47  LEA EAX,[ESP + 0x14]
00423c4b  PUSH EAX
00423c4c  CALL dword ptr [EDX + 0x34]
00423c4f  FLD float ptr [ESP + 0x14]
00423c53  FADD float ptr [EDI]
00423c55  FSTP float ptr [EDI]
00423c57  FLD float ptr [ESP + 0x18]
00423c5b  FADD float ptr [EDI + 0x4]
00423c5e  FSTP float ptr [EDI + 0x4]
00423c61  FLD float ptr [ESP + 0x1c]
00423c65  FADD float ptr [EDI + 0x8]
00423c68  FSTP float ptr [EDI + 0x8]
00423c6b  FLD float ptr [ESP + 0x10]
00423c6f  FADD float ptr [0x0089096c]
00423c75  FSTP float ptr [ESP + 0x10]
00423c79  MOV EBX,dword ptr [EBX]
00423c7b  CMP EBX,dword ptr [EBP + 0x4]
00423c7e  JNZ 0x00423bf4
00423c84  FLD float ptr [ESP + 0x10]
00423c88  POP ESI
00423c89  FCOMP float ptr [0x00890968]
00423c8f  FNSTSW AX
00423c91  TEST AH,0x41
00423c94  JNZ 0x00423ce4
00423c96  FLD float ptr [0x0089096c]
00423c9c  MOV EAX,dword ptr [ESP + 0x24]
00423ca0  FDIV float ptr [ESP + 0xc]
00423ca4  PUSH EDI
00423ca5  PUSH EDI
00423ca6  FLD ST0
00423ca8  FMUL float ptr [EDI]
00423caa  FST float ptr [EDI]
00423cac  FLD ST1
00423cae  FMUL float ptr [EDI + 0x4]
00423cb1  FST float ptr [ESP + 0x30]
00423cb5  FSTP float ptr [EDI + 0x4]
00423cb8  FXCH
00423cba  FMUL float ptr [EDI + 0x8]
00423cbd  FST float ptr [ESP + 0x14]
00423cc1  FSTP float ptr [EDI + 0x8]
00423cc4  FSUB float ptr [EAX]
00423cc6  FSTP float ptr [EDI]
00423cc8  FLD float ptr [ESP + 0x30]
00423ccc  FSUB float ptr [EAX + 0x4]
00423ccf  FSTP float ptr [EDI + 0x4]
00423cd2  FLD float ptr [ESP + 0x14]
00423cd6  FSUB float ptr [EAX + 0x8]
00423cd9  FSTP float ptr [EDI + 0x8]
00423cdc  CALL 0x0040fe20
00423ce1  ADD ESP,0x8
00423ce4  POP EDI
00423ce5  POP EBP
00423ce6  POP EBX
00423ce7  ADD ESP,0x10
00423cea  RET
