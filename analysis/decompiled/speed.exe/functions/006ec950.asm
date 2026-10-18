006ec950  SUB ESP,0x10
006ec953  PUSH EBX
006ec954  PUSH EBP
006ec955  MOV EBP,dword ptr [ESP + 0x20]
006ec959  PUSH ESI
006ec95a  PUSH EDI
006ec95b  MOV EDI,dword ptr [ESP + 0x24]
006ec95f  FLD float ptr [EDI]
006ec961  PUSH ECX
006ec962  FSUB float ptr [EBP]
006ec965  FSTP float ptr [ESP + 0x14]
006ec969  FLD float ptr [EDI + 0x4]
006ec96c  FSUB float ptr [EBP + 0x4]
006ec96f  FSTP float ptr [ESP + 0x18]
006ec973  FLD float ptr [EDI + 0x8]
006ec976  FSUB float ptr [EBP + 0x8]
006ec979  FSTP float ptr [ESP + 0x1c]
006ec97d  FLD float ptr [ESP + 0x18]
006ec981  FMUL float ptr [ESP + 0x18]
006ec985  FLD float ptr [ESP + 0x1c]
006ec989  FMUL float ptr [ESP + 0x1c]
006ec98d  FADDP
006ec98f  FLD float ptr [ESP + 0x14]
006ec993  FMUL float ptr [ESP + 0x14]
006ec997  FADDP
006ec999  FSTP float ptr [ESP]
006ec99c  CALL 0x005c5e80
006ec9a1  FSTP float ptr [ESP + 0x28]
006ec9a5  ADD ESP,0x4
006ec9a8  FLD float ptr [EDI + 0xa0]
006ec9ae  FADD float ptr [EBP + 0xa0]
006ec9b4  FSTP float ptr [ESP + 0x28]
006ec9b8  FLD float ptr [0x00890968]
006ec9be  FLD float ptr [ESP + 0x24]
006ec9c2  FUCOMPP
006ec9c4  FNSTSW AX
006ec9c6  TEST AH,0x44
006ec9c9  JP 0x006eca1a
006ec9cb  MOV ESI,dword ptr [ESP + 0x2c]
006ec9cf  MOV dword ptr [ESI + 0x80],0x0
006ec9d9  MOV dword ptr [ESI + 0x84],0xbf800000
006ec9e3  MOV dword ptr [ESI + 0x88],0x0
006ec9ed  MOV EAX,dword ptr [EDI]
006ec9ef  LEA EBX,[ESI + 0x80]
006ec9f5  MOV dword ptr [ESI + 0x70],EAX
006ec9f8  FLD float ptr [EDI + 0xa0]
006ec9fe  FADD float ptr [EDI + 0x4]
006eca01  FSTP float ptr [ESI + 0x70]
006eca04  MOV ECX,dword ptr [EDI + 0x8]
006eca07  MOV dword ptr [ESI + 0x70],ECX
006eca0a  FLD float ptr [EDI + 0xa0]
006eca10  FCHS
006eca12  FSTP float ptr [ESI + 0x90]
006eca18  JMP 0x006eca73
006eca1a  FLD float ptr [ESP + 0x24]
006eca1e  FCOMP float ptr [ESP + 0x28]
006eca22  FNSTSW AX
006eca24  TEST AH,0x5
006eca27  JP 0x006ecaa5
006eca29  MOV ESI,dword ptr [ESP + 0x2c]
006eca2d  LEA EBX,[ESI + 0x80]
006eca33  LEA EDX,[ESP + 0x10]
006eca37  PUSH EBX
006eca38  PUSH EDX
006eca39  CALL 0x0040feb0
006eca3e  FLD float ptr [ESP + 0x2c]
006eca42  FSUB float ptr [ESP + 0x30]
006eca46  ADD ESP,0x8
006eca49  FST float ptr [ESI + 0x90]
006eca4f  FADD float ptr [EBP + 0xa0]
006eca55  FLD ST0
006eca57  FMUL float ptr [EBX]
006eca59  FADD float ptr [EBP]
006eca5c  FSTP float ptr [ESI + 0x70]
006eca5f  FLD ST0
006eca61  FMUL float ptr [EBX + 0x4]
006eca64  FADD float ptr [EBP + 0x4]
006eca67  FSTP float ptr [ESI + 0x74]
006eca6a  FMUL float ptr [EBX + 0x8]
006eca6d  FADD float ptr [EBP + 0x8]
006eca70  FSTP float ptr [ESI + 0x78]
006eca73  CMP EDI,ESI
006eca75  JNZ 0x006ecaa5
006eca77  FLD float ptr [EBX]
006eca79  FMUL float ptr [0x00890da8]
006eca7f  FSTP float ptr [EBX]
006eca81  FLD float ptr [ESI + 0x84]
006eca87  FMUL float ptr [0x00890da8]
006eca8d  FSTP float ptr [ESI + 0x84]
006eca93  FLD float ptr [ESI + 0x88]
006eca99  FMUL float ptr [0x00890da8]
006eca9f  FSTP float ptr [ESI + 0x88]
006ecaa5  POP EDI
006ecaa6  POP ESI
006ecaa7  POP EBP
006ecaa8  XOR AL,AL
006ecaaa  POP EBX
006ecaab  ADD ESP,0x10
006ecaae  RET
