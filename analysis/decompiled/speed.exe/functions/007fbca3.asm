007fbca3  PUSH EBP
007fbca4  MOV EBP,ESP
007fbca6  PUSH EBX
007fbca7  PUSH ESI
007fbca8  MOV ESI,dword ptr [EBP + 0x10]
007fbcab  PUSH EDI
007fbcac  XOR EDI,EDI
007fbcae  MOV EAX,dword ptr [EBP + 0xc]
007fbcb1  SUB EAX,EDI
007fbcb3  JNZ 0x007fbcca
007fbcb5  CMP ESI,0x9
007fbcb8  JNZ 0x007fbe1b
007fbcbe  PUSH 0x46
007fbcc0  POP ESI
007fbcc1  MOV dword ptr [EBP + 0xc],0x1
007fbcc8  JMP 0x007fbcae
007fbcca  DEC EAX
007fbccb  JZ 0x007fbd59
007fbcd1  SUB EAX,0x4
007fbcd4  JZ 0x007fbd4b
007fbcd6  DEC EAX
007fbcd7  JZ 0x007fbd3d
007fbcd9  DEC EAX
007fbcda  JZ 0x007fbd10
007fbcdc  DEC EAX
007fbcdd  JZ 0x007fbd02
007fbcdf  DEC EAX
007fbce0  JNZ 0x007fbe2a
007fbce6  MOV EAX,dword ptr [EBP + 0x8]
007fbce9  PUSH ESI
007fbcea  PUSH dword ptr [EAX + 0x29c]
007fbcf0  MOV dword ptr [EAX + 0x494c],ESI
007fbcf6  CALL 0x007fca71
007fbcfb  POP ECX
007fbcfc  POP ECX
007fbcfd  JMP 0x007fbe2a
007fbd02  MOV EAX,dword ptr [EBP + 0x8]
007fbd05  MOV dword ptr [EAX + 0x4948],ESI
007fbd0b  JMP 0x007fbe2a
007fbd10  MOV EDI,dword ptr [EBP + 0x8]
007fbd13  PUSH dword ptr [EDI + 0x254]
007fbd19  LEA EBX,[EDI + 0x29c]
007fbd1f  PUSH ESI
007fbd20  PUSH dword ptr [EBX]
007fbd22  CALL 0x007fe7f5
007fbd27  PUSH dword ptr [EDI + 0x24c]
007fbd2d  PUSH ESI
007fbd2e  PUSH dword ptr [EBX]
007fbd30  CALL 0x007fe7f5
007fbd35  ADD ESP,0x18
007fbd38  JMP 0x007fbe2a
007fbd3d  MOV EAX,dword ptr [EBP + 0x8]
007fbd40  MOV dword ptr [EAX + 0x4944],ESI
007fbd46  JMP 0x007fbe2a
007fbd4b  MOV EAX,dword ptr [EBP + 0x8]
007fbd4e  MOV dword ptr [EAX + 0x4940],ESI
007fbd54  JMP 0x007fbe2a
007fbd59  MOV ECX,dword ptr [EBP + 0x8]
007fbd5c  MOV EAX,dword ptr [ECX + 0x1b4]
007fbd62  IMUL EAX,dword ptr [ECX + 0x1b0]
007fbd69  TEST EAX,EAX
007fbd6b  MOV dword ptr [EBP + 0xc],EAX
007fbd6e  FILD dword ptr [EBP + 0xc]
007fbd71  JGE 0x007fbd79
007fbd73  FADD double ptr [0x008c3870]
007fbd79  MOV EAX,dword ptr [ECX + 0x1a4]
007fbd7f  FSQRT
007fbd81  PUSH 0x64
007fbd83  XOR EDX,EDX
007fbd85  POP EBX
007fbd86  IMUL EAX,ESI
007fbd89  DIV EBX
007fbd8b  TEST EAX,EAX
007fbd8d  MOV dword ptr [EBP + 0xc],EAX
007fbd90  FILD dword ptr [EBP + 0xc]
007fbd93  JGE 0x007fbd9b
007fbd95  FADD double ptr [0x008c3870]
007fbd9b  FDIVP
007fbd9d  MOV dword ptr [ECX + 0x1a8],ESI
007fbda3  FMUL double ptr [0x008c3868]
007fbda9  FCOM double ptr [0x008c3860]
007fbdaf  FNSTSW AX
007fbdb1  TEST AH,0x41
007fbdb4  JNZ 0x007fbdc0
007fbdb6  FSTP ST0
007fbdb8  MOV dword ptr [ECX + 0x1a0],EDI
007fbdbe  JMP 0x007fbe2a
007fbdc0  FCOM double ptr [0x008c3868]
007fbdc6  FNSTSW AX
007fbdc8  TEST AH,0x41
007fbdcb  JNZ 0x007fbddb
007fbdcd  FSTP ST0
007fbdcf  MOV dword ptr [ECX + 0x1a0],0x8
007fbdd9  JMP 0x007fbe2a
007fbddb  FCOM double ptr [0x008c3858]
007fbde1  FNSTSW AX
007fbde3  TEST AH,0x41
007fbde6  JNZ 0x007fbdf6
007fbde8  FSTP ST0
007fbdea  MOV dword ptr [ECX + 0x1a0],0x4
007fbdf4  JMP 0x007fbe2a
007fbdf6  FCOMP double ptr [0x008c3850]
007fbdfc  FNSTSW AX
007fbdfe  TEST AH,0x41
007fbe01  JNZ 0x007fbe0f
007fbe03  MOV dword ptr [ECX + 0x1a0],0x5
007fbe0d  JMP 0x007fbe2a
007fbe0f  MOV dword ptr [ECX + 0x1a0],0x6
007fbe19  JMP 0x007fbe2a
007fbe1b  MOV EAX,dword ptr [EBP + 0x8]
007fbe1e  MOV dword ptr [EAX + 0x1a8],EDI
007fbe24  MOV dword ptr [EAX + 0x1a0],ESI
007fbe2a  POP EDI
007fbe2b  POP ESI
007fbe2c  POP EBX
007fbe2d  POP EBP
007fbe2e  RET
