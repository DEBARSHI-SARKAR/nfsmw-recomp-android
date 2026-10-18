0076ea20  SUB ESP,0x28
0076ea23  PUSH ESI
0076ea24  MOV ESI,ECX
0076ea26  MOV EAX,dword ptr [ESI + 0x8]
0076ea29  TEST EAX,EAX
0076ea2b  MOV dword ptr [ESP + 0xc],ESI
0076ea2f  JZ 0x0076ea3e
0076ea31  MOV dword ptr [EAX],0x0
0076ea37  MOV dword ptr [EAX + 0x4],0xffffffff
0076ea3e  MOVSX EAX,word ptr [ESI + 0x8e]
0076ea45  MOVSX EDX,byte ptr [ESI + 0x8c]
0076ea4c  IMUL EAX,EAX,0x16
0076ea4f  MOV dword ptr [ESI + 0x4],0x0
0076ea56  PUSH EBP
0076ea57  ADD EAX,dword ptr [0x009b38c0]
0076ea5d  MOVZX ECX,word ptr [EAX + EDX*0x2]
0076ea61  PUSH EDI
0076ea62  MOV EDI,dword ptr [0x009b38bc]
0076ea68  SHL ECX,0x5
0076ea6b  ADD ECX,EDI
0076ea6d  JZ 0x0076ea8c
0076ea6f  MOV CX,word ptr [ECX + 0xe]
0076ea73  TEST CX,CX
0076ea76  JL 0x0076ea8c
0076ea78  MOV EDI,dword ptr [0x009b38b8]
0076ea7e  MOVSX ECX,CX
0076ea81  SHL ECX,0x6
0076ea84  ADD ECX,EDI
0076ea86  MOV dword ptr [ESP + 0x10],ECX
0076ea8a  JMP 0x0076ea98
0076ea8c  MOV dword ptr [ESP + 0x10],0x9b3830
0076ea94  MOV ECX,dword ptr [ESP + 0x10]
0076ea98  TEST EDX,EDX
0076ea9a  MOVZX EBP,byte ptr [ECX]
0076ea9d  MOVZX EAX,word ptr [EAX + 0xa]
0076eaa1  MOV dword ptr [ESP + 0x18],EBP
0076eaa5  JNZ 0x0076eaac
0076eaa7  SHR EAX,0xa
0076eaaa  JMP 0x0076eaaf
0076eaac  SHR EAX,0x9
0076eaaf  AND AL,0x1
0076eab1  TEST EDX,EDX
0076eab3  PUSH EBX
0076eab4  SETZ BL
0076eab7  XOR BL,AL
0076eab9  MOVSX EAX,byte ptr [ESI + 0x2c1]
0076eac0  JZ 0x0076eac9
0076eac2  MOV ECX,EBP
0076eac4  SUB ECX,EAX
0076eac6  DEC ECX
0076eac7  JMP 0x0076eacb
0076eac9  MOV ECX,EAX
0076eacb  LEA EDI,[EBP + -0x1]
0076eace  CMP ECX,EDI
0076ead0  MOV byte ptr [ESP + 0x13],0x0
0076ead5  JGE 0x0076eb20
0076ead7  SUB EBP,ECX
0076ead9  LEA EDX,[ECX*0x4 + 0x4]
0076eae0  LEA ESI,[EBP*0x4 + 0xfffffff8]
0076eae7  TEST BL,BL
0076eae9  MOV EAX,ESI
0076eaeb  JNZ 0x0076eaef
0076eaed  MOV EAX,EDX
0076eaef  MOV EBP,dword ptr [ESP + 0x14]
0076eaf3  MOV EAX,dword ptr [EAX + EBP*0x1 + 0x4]
0076eaf7  AND EAX,0xf
0076eafa  CMP EAX,0x7
0076eafd  JZ 0x0076eb11
0076eaff  CMP EAX,0x1
0076eb02  JNZ 0x0076eb16
0076eb04  INC ECX
0076eb05  ADD EDX,0x4
0076eb08  SUB ESI,0x4
0076eb0b  CMP ECX,EDI
0076eb0d  JL 0x0076eae7
0076eb0f  JMP 0x0076eb16
0076eb11  MOV byte ptr [ESP + 0x13],0x1
0076eb16  MOV ESI,dword ptr [ESP + 0x18]
0076eb1a  MOV EBP,dword ptr [ESP + 0x1c]
0076eb1e  CMP ECX,EDI
0076eb20  JZ 0x0076eb32
0076eb22  MOV AL,byte ptr [ESP + 0x13]
0076eb26  TEST AL,AL
0076eb28  JNZ 0x0076eb32
0076eb2a  FLD float ptr [ESI + 0x88]
0076eb30  JMP 0x0076eb3a
0076eb32  FLD float ptr [ESI + 0x88]
0076eb38  FCHS
0076eb3a  TEST BL,BL
0076eb3c  JZ 0x0076eb45
0076eb3e  MOV EAX,EBP
0076eb40  SUB EAX,ECX
0076eb42  DEC EAX
0076eb43  JMP 0x0076eb47
0076eb45  MOV EAX,ECX
0076eb47  MOV EDX,dword ptr [ESP + 0x14]
0076eb4b  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x4]
0076eb4f  TEST BL,BL
0076eb51  POP EBX
0076eb52  JZ 0x0076eb59
0076eb54  SUB EBP,ECX
0076eb56  DEC EBP
0076eb57  MOV ECX,EBP
0076eb59  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0076eb5d  SHL ECX,0xe
0076eb60  SAR ECX,0x12
0076eb63  MOV dword ptr [ESP + 0x18],ECX
0076eb67  FILD dword ptr [ESP + 0x18]
0076eb6b  MOV EDX,dword ptr [ESI + 0xc4]
0076eb71  SAR EAX,0x12
0076eb74  MOV dword ptr [ESP + 0x18],EAX
0076eb78  FMUL float ptr [0x009b3a68]
0076eb7e  MOV EAX,EDX
0076eb80  MOV dword ptr [ESP + 0x28],EDX
0076eb84  FMUL float ptr [0x008933d4]
0076eb8a  FILD dword ptr [ESP + 0x18]
0076eb8e  MOV dword ptr [ESP + 0x2c],0x0
0076eb96  MOV ECX,dword ptr [ESP + 0x2c]
0076eb9a  MOV dword ptr [ESP + 0x20],ECX
0076eb9e  FMUL float ptr [0x009b3a68]
0076eba4  MOV dword ptr [ESP + 0x1c],EAX
0076eba8  PUSH ECX
0076eba9  FADDP
0076ebab  FADD ST0,ST1
0076ebad  FSTP float ptr [ESP + 0x1c]
0076ebb1  FSTP ST0
0076ebb3  FLD float ptr [ESI + 0xbc]
0076ebb9  FCHS
0076ebbb  FSTP float ptr [ESP + 0x34]
0076ebbf  MOV EDX,dword ptr [ESP + 0x34]
0076ebc3  MOV dword ptr [ESP + 0x28],EDX
0076ebc7  FLD float ptr [ESP + 0x28]
0076ebcb  FMUL float ptr [ESP + 0x28]
0076ebcf  FLD float ptr [ESP + 0x24]
0076ebd3  FMUL float ptr [ESP + 0x24]
0076ebd7  FADDP
0076ebd9  FLD float ptr [ESP + 0x20]
0076ebdd  FMUL float ptr [ESP + 0x20]
0076ebe1  FADDP
0076ebe3  FSTP float ptr [ESP]
0076ebe6  CALL 0x005c5e80
0076ebeb  FLD float ptr [0x00890968]
0076ebf1  ADD ESP,0x4
0076ebf4  FLD ST1
0076ebf6  POP EDI
0076ebf7  FUCOMPP
0076ebf9  POP EBP
0076ebfa  FNSTSW AX
0076ebfc  TEST AH,0x44
0076ebff  JNP 0x0076ec21
0076ec01  FDIVR float ptr [0x0089096c]
0076ec07  FLD float ptr [ESP + 0x14]
0076ec0b  FMUL ST1
0076ec0d  FSTP float ptr [ESP + 0x14]
0076ec11  FLD float ptr [ESP + 0x18]
0076ec15  FMUL ST1
0076ec17  FSTP float ptr [ESP + 0x18]
0076ec1b  FMUL float ptr [ESP + 0x1c]
0076ec1f  JMP 0x0076ec27
0076ec21  FSTP ST0
0076ec23  FLD float ptr [ESP + 0x1c]
0076ec27  FLD float ptr [ESP + 0x10]
0076ec2b  FSUB float ptr [ESI + 0x2c4]
0076ec31  FLD float ptr [ESP + 0x14]
0076ec35  FMUL ST1
0076ec37  FADD float ptr [ESI + 0x98]
0076ec3d  FSTP float ptr [ESI + 0x98]
0076ec43  FLD float ptr [ESP + 0x18]
0076ec47  FMUL ST1
0076ec49  FADD float ptr [ESI + 0x9c]
0076ec4f  FSTP float ptr [ESI + 0x9c]
0076ec55  FXCH
0076ec57  FMUL ST1
0076ec59  FADD float ptr [ESI + 0xa0]
0076ec5f  FSTP float ptr [ESI + 0xa0]
0076ec65  POP ESI
0076ec66  FSTP ST0
0076ec68  ADD ESP,0x28
0076ec6b  RET
