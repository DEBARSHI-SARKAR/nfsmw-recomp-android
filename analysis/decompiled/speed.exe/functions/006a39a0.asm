006a39a0  PUSH -0x1
006a39a2  PUSH 0x87c8bf
006a39a7  MOV EAX,FS:[0x0]
006a39ad  PUSH EAX
006a39ae  MOV dword ptr FS:[0x0],ESP
006a39b5  SUB ESP,0x10
006a39b8  PUSH ESI
006a39b9  MOV ESI,ECX
006a39bb  MOV EAX,dword ptr [ESI + 0x34]
006a39be  LEA ECX,[ESI + 0x34]
006a39c1  CALL dword ptr [EAX + 0x40]
006a39c4  MOVSX ECX,word ptr [EAX + 0x10]
006a39c8  MOV dword ptr [ESP + 0x4],ECX
006a39cc  FILD dword ptr [ESP + 0x4]
006a39d0  FMUL float ptr [0x00890d60]
006a39d6  FSTP float ptr [ESP + 0x8]
006a39da  MOVSX EDX,word ptr [EAX + 0x12]
006a39de  MOV dword ptr [ESP + 0x4],EDX
006a39e2  FILD dword ptr [ESP + 0x4]
006a39e6  FMUL float ptr [0x00890d60]
006a39ec  FSTP float ptr [ESP + 0xc]
006a39f0  MOVSX EAX,word ptr [EAX + 0x14]
006a39f4  MOV dword ptr [ESP + 0x4],EAX
006a39f8  FILD dword ptr [ESP + 0x4]
006a39fc  FMUL float ptr [0x00890d60]
006a3a02  FST float ptr [ESP + 0x10]
006a3a06  FMUL float ptr [ESP + 0x10]
006a3a0a  FLD float ptr [ESP + 0xc]
006a3a0e  FMUL float ptr [ESP + 0xc]
006a3a12  FADDP
006a3a14  FLD float ptr [ESP + 0x8]
006a3a18  FMUL float ptr [ESP + 0x8]
006a3a1c  FADDP
006a3a1e  FCOMP float ptr [0x00890968]
006a3a24  FNSTSW AX
006a3a26  TEST AH,0x41
006a3a29  JP 0x006a3a69
006a3a2b  PUSH EDI
006a3a2c  MOV EDI,dword ptr [ESI + 0xa0]
006a3a32  TEST EDI,EDI
006a3a34  JZ 0x006a3a56
006a3a36  MOV ECX,EDI
006a3a38  CALL 0x0066fb40
006a3a3d  PUSH 0x0
006a3a3f  PUSH 0x8
006a3a41  PUSH EDI
006a3a42  MOV ECX,0x925b30
006a3a47  CALL 0x005d0370
006a3a4c  MOV dword ptr [ESI + 0xa0],0x0
006a3a56  POP EDI
006a3a57  POP ESI
006a3a58  MOV ECX,dword ptr [ESP + 0x10]
006a3a5c  MOV dword ptr FS:[0x0],ECX
006a3a63  ADD ESP,0x1c
006a3a66  RET 0x4
006a3a69  MOV ECX,dword ptr [ESI + 0xa0]
006a3a6f  TEST ECX,ECX
006a3a71  PUSH 0x0
006a3a73  JNZ 0x006a3adc
006a3a75  PUSH 0x8
006a3a77  MOV ECX,0x925b30
006a3a7c  CALL 0x005d29d0
006a3a81  MOV dword ptr [ESP + 0x4],EAX
006a3a85  TEST EAX,EAX
006a3a87  MOV dword ptr [ESP + 0x1c],0x0
006a3a8f  JZ 0x006a3ac2
006a3a91  MOV EDX,dword ptr [ESI + 0x3c]
006a3a94  PUSH 0x0
006a3a96  LEA ECX,[ESP + 0xc]
006a3a9a  PUSH ECX
006a3a9b  MOV ECX,dword ptr [ESP + 0x2c]
006a3a9f  PUSH ECX
006a3aa0  PUSH 0x0
006a3aa2  PUSH EDX
006a3aa3  MOV ECX,EAX
006a3aa5  CALL 0x00667e70
006a3aaa  MOV dword ptr [ESI + 0xa0],EAX
006a3ab0  POP ESI
006a3ab1  MOV ECX,dword ptr [ESP + 0x10]
006a3ab5  MOV dword ptr FS:[0x0],ECX
006a3abc  ADD ESP,0x1c
006a3abf  RET 0x4
006a3ac2  XOR EAX,EAX
006a3ac4  MOV dword ptr [ESI + 0xa0],EAX
006a3aca  POP ESI
006a3acb  MOV ECX,dword ptr [ESP + 0x10]
006a3acf  MOV dword ptr FS:[0x0],ECX
006a3ad6  ADD ESP,0x1c
006a3ad9  RET 0x4
006a3adc  MOV EAX,dword ptr [ESP + 0x28]
006a3ae0  LEA EDX,[ESP + 0xc]
006a3ae4  PUSH EDX
006a3ae5  PUSH EAX
006a3ae6  CALL 0x00668070
006a3aeb  MOV ECX,dword ptr [ESI + 0xa0]
006a3af1  CALL 0x00667fc0
006a3af6  MOV ECX,dword ptr [ESP + 0x14]
006a3afa  POP ESI
006a3afb  MOV dword ptr FS:[0x0],ECX
006a3b02  ADD ESP,0x1c
006a3b05  RET 0x4
