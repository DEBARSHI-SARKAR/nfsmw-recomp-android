006ecab0  MOV AL,byte ptr [ECX + 0x94]
006ecab6  CMP AL,0x1
006ecab8  MOV dword ptr [ECX + 0x90],0xc7c35000
006ecac2  JNZ 0x006ecaf2
006ecac4  MOV EDX,dword ptr [ESP + 0x4]
006ecac8  MOV AL,byte ptr [EDX + 0x94]
006ecace  CMP AL,0x1
006ecad0  JNZ 0x006ecae0
006ecad2  PUSH ECX
006ecad3  PUSH EDX
006ecad4  PUSH ECX
006ecad5  CALL 0x006e7d20
006ecada  ADD ESP,0xc
006ecadd  RET 0x4
006ecae0  CMP AL,0x2
006ecae2  JNZ 0x006ecb24
006ecae4  PUSH ECX
006ecae5  PUSH ECX
006ecae6  PUSH EDX
006ecae7  CALL 0x006ec5c0
006ecaec  ADD ESP,0xc
006ecaef  RET 0x4
006ecaf2  CMP AL,0x2
006ecaf4  JNZ 0x006ecb24
006ecaf6  MOV EDX,dword ptr [ESP + 0x4]
006ecafa  MOV AL,byte ptr [EDX + 0x94]
006ecb00  CMP AL,0x2
006ecb02  JNZ 0x006ecb12
006ecb04  PUSH ECX
006ecb05  PUSH EDX
006ecb06  PUSH ECX
006ecb07  CALL 0x006ec950
006ecb0c  ADD ESP,0xc
006ecb0f  RET 0x4
006ecb12  CMP AL,0x1
006ecb14  JNZ 0x006ecb24
006ecb16  PUSH ECX
006ecb17  PUSH EDX
006ecb18  PUSH ECX
006ecb19  CALL 0x006ec5c0
006ecb1e  ADD ESP,0xc
006ecb21  RET 0x4
006ecb24  XOR AL,AL
006ecb26  RET 0x4
006f0ab0  MOV AL,byte ptr [ECX + 0x94]
006f0ab6  SUB ESP,0x28
006f0ab9  MOV DL,0x1
006f0abb  CMP AL,DL
006f0abd  MOV EAX,dword ptr [ESP + 0x2c]
006f0ac1  PUSH EBX
006f0ac2  JNZ 0x006f0c06
006f0ac8  CMP byte ptr [EAX + 0x94],DL
006f0ace  JNZ 0x006f0c06
006f0ad4  PUSH EBP
006f0ad5  PUSH ESI
006f0ad6  PUSH EDI
006f0ad7  XOR EDI,EDI
006f0ad9  MOV ESI,ECX
006f0adb  MOV EDX,EAX
006f0add  MOV dword ptr [ESP + 0x10],EDI
006f0ae1  JMP 0x006f0ae7
006f0ae3  MOV EAX,dword ptr [ESP + 0x3c]
006f0ae7  CMP EDI,0x1
006f0aea  JNZ 0x006f0af0
006f0aec  MOV ESI,EAX
006f0aee  MOV EDX,ECX
006f0af0  FLD float ptr [ESI]
006f0af2  XOR EDI,EDI
006f0af4  FSUB float ptr [EDX]
006f0af6  FLD float ptr [ESI + 0x4]
006f0af9  FSUB float ptr [EDX + 0x4]
006f0afc  FLD float ptr [ESI + 0x8]
006f0aff  FSUB float ptr [EDX + 0x8]
006f0b02  FSTP float ptr [ESP + 0x30]
006f0b06  CMP EDI,0x1
006f0b09  JNZ 0x006f0b12
006f0b0b  MOV EAX,0x2
006f0b10  JMP 0x006f0b1a
006f0b12  XOR EAX,EAX
006f0b14  CMP EDI,0x2
006f0b17  SETZ AL
006f0b1a  LEA EBX,[EAX + 0x1]
006f0b1d  SHL EBX,0x4
006f0b20  ADD EBX,ESI
006f0b22  MOV EBP,dword ptr [EBX]
006f0b24  MOV dword ptr [ESP + 0x18],EBP
006f0b28  MOV EBP,dword ptr [EBX + 0x4]
006f0b2b  MOV dword ptr [ESP + 0x1c],EBP
006f0b2f  MOV EBP,dword ptr [EBX + 0x8]
006f0b32  MOV dword ptr [ESP + 0x20],EBP
006f0b36  FLD float ptr [ESP + 0x20]
006f0b3a  FMUL float ptr [ESP + 0x30]
006f0b3e  MOV EBX,dword ptr [EBX + 0xc]
006f0b41  FLD float ptr [ESP + 0x1c]
006f0b45  MOV dword ptr [ESP + 0x24],EBX
006f0b49  FMUL ST2
006f0b4b  FADDP
006f0b4d  FLD ST2
006f0b4f  FMUL float ptr [ESP + 0x18]
006f0b53  FADDP
006f0b55  FABS
006f0b57  FSUB float ptr [ESI + EAX*0x4 + 0xa0]
006f0b5e  FLD float ptr [ESP + 0x1c]
006f0b62  FMUL float ptr [EDX + 0x44]
006f0b65  FLD float ptr [ESP + 0x20]
006f0b69  FMUL float ptr [EDX + 0x48]
006f0b6c  FADDP
006f0b6e  FLD float ptr [ESP + 0x18]
006f0b72  FMUL float ptr [EDX + 0x40]
006f0b75  FADDP
006f0b77  FABS
006f0b79  FSUBR ST0,ST1
006f0b7b  FLD float ptr [ESP + 0x1c]
006f0b7f  FMUL float ptr [EDX + 0x54]
006f0b82  FLD float ptr [ESP + 0x20]
006f0b86  FMUL float ptr [EDX + 0x58]
006f0b89  FADDP
006f0b8b  FLD float ptr [ESP + 0x18]
006f0b8f  FMUL float ptr [EDX + 0x50]
006f0b92  FADDP
006f0b94  FABS
006f0b96  FSTP ST2
006f0b98  FXCH
006f0b9a  FSUBP
006f0b9c  FLD float ptr [ESP + 0x20]
006f0ba0  FMUL float ptr [EDX + 0x68]
006f0ba3  FLD float ptr [ESP + 0x18]
006f0ba7  FMUL float ptr [EDX + 0x60]
006f0baa  FADDP
006f0bac  FLD float ptr [ESP + 0x1c]
006f0bb0  FMUL float ptr [EDX + 0x64]
006f0bb3  FADDP
006f0bb5  FABS
006f0bb7  FST float ptr [ESP + 0x14]
006f0bbb  FSUBP
006f0bbd  FCOMP float ptr [0x00890968]
006f0bc3  FNSTSW AX
006f0bc5  TEST AH,0x41
006f0bc8  JZ 0x006f0bf6
006f0bca  INC EDI
006f0bcb  CMP EDI,0x3
006f0bce  JL 0x006f0b06
006f0bd4  MOV EDI,dword ptr [ESP + 0x10]
006f0bd8  FSTP ST0
006f0bda  INC EDI
006f0bdb  FSTP ST0
006f0bdd  CMP EDI,0x2
006f0be0  MOV dword ptr [ESP + 0x10],EDI
006f0be4  JL 0x006f0ae3
006f0bea  POP EDI
006f0beb  POP ESI
006f0bec  POP EBP
006f0bed  MOV AL,0x1
006f0bef  POP EBX
006f0bf0  ADD ESP,0x28
006f0bf3  RET 0x4
006f0bf6  POP EDI
006f0bf7  FSTP ST0
006f0bf9  POP ESI
006f0bfa  FSTP ST0
006f0bfc  POP EBP
006f0bfd  XOR AL,AL
006f0bff  POP EBX
006f0c00  ADD ESP,0x28
006f0c03  RET 0x4
006f0c06  POP EBX
006f0c07  ADD ESP,0x28
006f0c0a  MOV dword ptr [ESP + 0x4],EAX
006f0c0e  JMP 0x006ecab0
