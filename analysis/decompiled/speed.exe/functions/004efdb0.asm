004efdb0  PUSH ESI
004efdb1  MOV ESI,ECX
004efdb3  MOV EAX,dword ptr [ESI + 0x14]
004efdb6  MOV CL,byte ptr [EAX + 0x38]
004efdb9  TEST CL,CL
004efdbb  JZ 0x004eff24
004efdc1  MOV ECX,dword ptr [ESP + 0x8]
004efdc5  PUSH EBP
004efdc6  PUSH ECX
004efdc7  LEA ECX,[ESI + 0x48]
004efdca  CALL 0x004b0320
004efdcf  MOV EAX,dword ptr [ESI + 0x2c]
004efdd2  TEST EAX,EAX
004efdd4  MOV ECX,dword ptr [ESI + 0x14]
004efdd7  JNZ 0x004efee2
004efddd  MOV EDX,dword ptr [ECX + 0x34]
004efde0  MOV AL,byte ptr [EDX + 0x22c]
004efde6  TEST AL,AL
004efde8  JZ 0x004eff0e
004efdee  FLD float ptr [ESI + 0x38]
004efdf1  FADD float ptr [0x008959e4]
004efdf7  FCOMP float ptr [ECX + 0x3c]
004efdfa  FNSTSW AX
004efdfc  TEST AH,0x5
004efdff  JP 0x004eff0e
004efe05  FLD float ptr [ESI + 0x40]
004efe08  FADD float ptr [0x008959e4]
004efe0e  FCOMP float ptr [ECX + 0x3c]
004efe11  FNSTSW AX
004efe13  TEST AH,0x5
004efe16  JP 0x004eff0e
004efe1c  MOV AL,byte ptr [ESI + 0x3e]
004efe1f  TEST AL,AL
004efe21  JZ 0x004eff0e
004efe27  MOV EAX,[0x008ef998]
004efe2c  XOR EBP,EBP
004efe2e  TEST EAX,EAX
004efe30  JLE 0x004eff0e
004efe36  PUSH EDI
004efe37  JMP 0x004efe40
004efe40  PUSH EBP
004efe41  PUSH 0x41200000
004efe46  CALL 0x004dde10
004efe4b  ADD ESP,0x8
004efe4e  TEST AL,AL
004efe50  JZ 0x004efed1
004efe52  PUSH EBP
004efe53  MOV ECX,ESI
004efe55  CALL 0x004e7000
004efe5a  TEST AL,AL
004efe5c  JZ 0x004efed1
004efe5e  MOV ECX,dword ptr [0x00911fa8]
004efe64  PUSH 0x3f800000
004efe69  CALL 0x004aed10
004efe6e  FCOMP float ptr [0x00897e14]
004efe74  FNSTSW AX
004efe76  TEST AH,0x5
004efe79  JNP 0x004efe9c
004efe7b  FLD float ptr [0x00914324]
004efe81  MOV ECX,dword ptr [ESI + 0x14]
004efe84  FADD float ptr [0x00897e08]
004efe8a  FCOMP float ptr [ECX + 0x3c]
004efe8d  FNSTSW AX
004efe8f  TEST AH,0x5
004efe92  JNP 0x004efe9c
004efe94  MOV EAX,dword ptr [ECX + 0x3c]
004efe97  MOV dword ptr [ESI + 0x40],EAX
004efe9a  JMP 0x004efed1
004efe9c  MOV ECX,dword ptr [ESI + 0x14]
004efe9f  MOV EDX,dword ptr [ECX + 0x34]
004efea2  MOV EAX,dword ptr [EDX + 0x208]
004efea8  MOVZX EDI,byte ptr [EAX + 0x4c]
004efeac  MOV byte ptr [ESI + 0x3d],0x1
004efeb0  MOV ECX,dword ptr [0x00911fa8]
004efeb6  PUSH 0x40333333
004efebb  CALL 0x004aed10
004efec0  PUSH EDI
004efec1  FADD float ptr [0x00897e10]
004efec7  MOV ECX,ESI
004efec9  FSTP float ptr [ESI + 0x30]
004efecc  CALL 0x004e6ed0
004efed1  MOV EAX,[0x008ef998]
004efed6  INC EBP
004efed7  CMP EBP,EAX
004efed9  JL 0x004efe40
004efedf  POP EDI
004efee0  JMP 0x004eff0e
004efee2  FLD float ptr [ESI + 0x34]
004efee5  FADD float ptr [ESI + 0x30]
004efee8  FCOMP float ptr [ECX + 0x3c]
004efeeb  FNSTSW AX
004efeed  TEST AH,0x41
004efef0  JNZ 0x004efef9
004efef2  MOV AL,byte ptr [ESI + 0x3d]
004efef5  TEST AL,AL
004efef7  JNZ 0x004eff0e
004efef9  MOV AL,byte ptr [ESI + 0x3c]
004efefc  TEST AL,AL
004efefe  JNZ 0x004eff0e
004eff00  MOV AL,byte ptr [ESI + 0x64]
004eff03  TEST AL,AL
004eff05  JNZ 0x004eff0e
004eff07  MOV ECX,ESI
004eff09  CALL 0x004de0e0
004eff0e  MOV AL,byte ptr [ESI + 0x64]
004eff11  TEST AL,AL
004eff13  POP EBP
004eff14  JZ 0x004eff24
004eff16  MOV AL,byte ptr [ESI + 0x60]
004eff19  TEST AL,AL
004eff1b  JZ 0x004eff24
004eff1d  MOV ECX,ESI
004eff1f  CALL 0x004de150
004eff24  POP ESI
004eff25  RET 0x4
