006edd60  PUSH ESI
006edd61  MOV ESI,ECX
006edd63  CALL 0x006edc90
006edd68  TEST AL,AL
006edd6a  JZ 0x006ede1f
006edd70  MOV EAX,dword ptr [ESI + 0x2c]
006edd73  LEA ECX,[ESI + 0x2c]
006edd76  CALL dword ptr [EAX + 0xc]
006edd79  TEST EAX,EAX
006edd7b  JZ 0x006ede1f
006edd81  MOV ECX,dword ptr [EAX + 0x4]
006edd84  PUSH 0x4040e0
006edd89  CALL 0x005d59f0
006edd8e  TEST EAX,EAX
006edd90  JZ 0x006ede1f
006edd96  MOV EDX,dword ptr [EAX]
006edd98  MOV ECX,EAX
006edd9a  CALL dword ptr [EDX + 0x8c]
006edda0  MOV AL,byte ptr [ESI + 0x80]
006edda6  TEST AL,AL
006edda8  FMUL float ptr [0x008967e0]
006eddae  JZ 0x006eddd8
006eddb0  MOV AL,[0x00988e1c]
006eddb5  FSTP ST0
006eddb7  TEST AL,AL
006eddb9  JNZ 0x006ede0c
006eddbb  FLD float ptr [ESP + 0xc]
006eddbf  PUSH 0x0
006eddc1  FMUL float ptr [0x00890cd4]
006eddc7  PUSH ECX
006eddc8  FSUBR float ptr [ESI + 0x84]
006eddce  FSTP float ptr [ESP]
006eddd1  CALL 0x00401dc0
006eddd6  JMP 0x006ede03
006eddd8  FCOMP float ptr [0x00901ae8]
006eddde  FNSTSW AX
006edde0  TEST AH,0x41
006edde3  JNZ 0x006ede0c
006edde5  FLD float ptr [ESP + 0x8]
006edde9  PUSH 0x3f800000
006eddee  FDIV float ptr [0x00901ae4]
006eddf4  PUSH ECX
006eddf5  FADD float ptr [ESI + 0x84]
006eddfb  FSTP float ptr [ESP]
006eddfe  CALL 0x00401da0
006ede03  FSTP float ptr [ESI + 0x84]
006ede09  ADD ESP,0x8
006ede0c  FLD float ptr [ESI + 0x84]
006ede12  FCOMP float ptr [0x00890968]
006ede18  FNSTSW AX
006ede1a  TEST AH,0x41
006ede1d  JP 0x006ede28
006ede1f  MOV ECX,ESI
006ede21  PUSH 0x0
006ede23  CALL 0x006e9aa0
006ede28  POP ESI
006ede29  RET 0x8
