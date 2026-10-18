0077ee30  MOV EAX,FS:[0x0]
0077ee36  PUSH -0x1
0077ee38  PUSH 0x881e78
0077ee3d  PUSH EAX
0077ee3e  MOV EAX,dword ptr [ESP + 0x14]
0077ee42  MOV dword ptr FS:[0x0],ESP
0077ee49  SUB ESP,0x48
0077ee4c  PUSH EBP
0077ee4d  MOV EBP,ECX
0077ee4f  MOV CL,byte ptr [EAX + 0x15]
0077ee52  TEST CL,CL
0077ee54  PUSH ESI
0077ee55  JZ 0x0077eea3
0077ee57  PUSH 0x1b
0077ee59  XOR ESI,ESI
0077ee5b  PUSH 0x892920
0077ee60  LEA ECX,[ESP + 0x14]
0077ee64  MOV dword ptr [ESP + 0x2c],0xf
0077ee6c  MOV dword ptr [ESP + 0x28],ESI
0077ee70  MOV byte ptr [ESP + 0x18],0x0
0077ee75  CALL 0x004303b0
0077ee7a  LEA EAX,[ESP + 0xc]
0077ee7e  PUSH EAX
0077ee7f  LEA ECX,[ESP + 0x2c]
0077ee83  MOV dword ptr [ESP + 0x5c],ESI
0077ee87  CALL 0x00432d50
0077ee8c  PUSH 0x8c9f78
0077ee91  LEA ECX,[ESP + 0x2c]
0077ee95  PUSH ECX
0077ee96  MOV dword ptr [ESP + 0x30],0x8bf2c0
0077ee9e  CALL 0x007c56b0
0077eea3  PUSH EBX
0077eea4  MOV EBX,EAX
0077eea6  PUSH EDI
0077eea7  LEA ECX,[ESP + 0x6c]
0077eeab  MOV dword ptr [ESP + 0x10],EBX
0077eeaf  CALL 0x0076bae0
0077eeb4  MOV EAX,dword ptr [EBX]
0077eeb6  MOV CL,byte ptr [EAX + 0x15]
0077eeb9  TEST CL,CL
0077eebb  JZ 0x0077eec2
0077eebd  MOV EDI,dword ptr [EBX + 0x8]
0077eec0  JMP 0x0077eedb
0077eec2  MOV EDX,dword ptr [EBX + 0x8]
0077eec5  MOV CL,byte ptr [EDX + 0x15]
0077eec8  TEST CL,CL
0077eeca  JZ 0x0077eed0
0077eecc  MOV EDI,EAX
0077eece  JMP 0x0077eedb
0077eed0  MOV ECX,dword ptr [ESP + 0x6c]
0077eed4  CMP ECX,EBX
0077eed6  MOV EDI,dword ptr [ECX + 0x8]
0077eed9  JNZ 0x0077ef49
0077eedb  MOV AL,byte ptr [EDI + 0x15]
0077eede  TEST AL,AL
0077eee0  MOV ESI,dword ptr [EBX + 0x4]
0077eee3  JNZ 0x0077eee8
0077eee5  MOV dword ptr [EDI + 0x4],ESI
0077eee8  MOV EAX,dword ptr [EBP + 0x4]
0077eeeb  CMP dword ptr [EAX + 0x4],EBX
0077eeee  JNZ 0x0077eef5
0077eef0  MOV dword ptr [EAX + 0x4],EDI
0077eef3  JMP 0x0077ef00
0077eef5  CMP dword ptr [ESI],EBX
0077eef7  JNZ 0x0077eefd
0077eef9  MOV dword ptr [ESI],EDI
0077eefb  JMP 0x0077ef00
0077eefd  MOV dword ptr [ESI + 0x8],EDI
0077ef00  MOV EBX,dword ptr [EBP + 0x4]
0077ef03  MOV EAX,dword ptr [EBX]
0077ef05  CMP EAX,dword ptr [ESP + 0x10]
0077ef09  JNZ 0x0077ef21
0077ef0b  MOV AL,byte ptr [EDI + 0x15]
0077ef0e  TEST AL,AL
0077ef10  JZ 0x0077ef16
0077ef12  MOV EAX,ESI
0077ef14  JMP 0x0077ef1f
0077ef16  PUSH EDI
0077ef17  CALL 0x0076b580
0077ef1c  ADD ESP,0x4
0077ef1f  MOV dword ptr [EBX],EAX
0077ef21  MOV EBX,dword ptr [EBP + 0x4]
0077ef24  MOV ECX,dword ptr [ESP + 0x10]
0077ef28  CMP dword ptr [EBX + 0x8],ECX
0077ef2b  JNZ 0x0077efa1
0077ef2d  MOV AL,byte ptr [EDI + 0x15]
0077ef30  TEST AL,AL
0077ef32  JZ 0x0077ef3b
0077ef34  MOV EAX,ESI
0077ef36  MOV dword ptr [EBX + 0x8],EAX
0077ef39  JMP 0x0077efa1
0077ef3b  PUSH EDI
0077ef3c  CALL 0x0076b560
0077ef41  ADD ESP,0x4
0077ef44  MOV dword ptr [EBX + 0x8],EAX
0077ef47  JMP 0x0077efa1
0077ef49  MOV dword ptr [EAX + 0x4],ECX
0077ef4c  MOV EDX,dword ptr [EBX]
0077ef4e  MOV dword ptr [ECX],EDX
0077ef50  CMP ECX,dword ptr [EBX + 0x8]
0077ef53  JNZ 0x0077ef59
0077ef55  MOV ESI,ECX
0077ef57  JMP 0x0077ef74
0077ef59  MOV AL,byte ptr [EDI + 0x15]
0077ef5c  TEST AL,AL
0077ef5e  MOV ESI,dword ptr [ECX + 0x4]
0077ef61  JNZ 0x0077ef66
0077ef63  MOV dword ptr [EDI + 0x4],ESI
0077ef66  MOV dword ptr [ESI],EDI
0077ef68  MOV EAX,dword ptr [EBX + 0x8]
0077ef6b  MOV dword ptr [ECX + 0x8],EAX
0077ef6e  MOV EDX,dword ptr [EBX + 0x8]
0077ef71  MOV dword ptr [EDX + 0x4],ECX
0077ef74  MOV EAX,dword ptr [EBP + 0x4]
0077ef77  CMP dword ptr [EAX + 0x4],EBX
0077ef7a  JNZ 0x0077ef81
0077ef7c  MOV dword ptr [EAX + 0x4],ECX
0077ef7f  JMP 0x0077ef8f
0077ef81  MOV EAX,dword ptr [EBX + 0x4]
0077ef84  CMP dword ptr [EAX],EBX
0077ef86  JNZ 0x0077ef8c
0077ef88  MOV dword ptr [EAX],ECX
0077ef8a  JMP 0x0077ef8f
0077ef8c  MOV dword ptr [EAX + 0x8],ECX
0077ef8f  MOV EAX,dword ptr [EBX + 0x4]
0077ef92  MOV dword ptr [ECX + 0x4],EAX
0077ef95  MOV DL,byte ptr [EBX + 0x14]
0077ef98  MOV AL,byte ptr [ECX + 0x14]
0077ef9b  MOV byte ptr [ECX + 0x14],DL
0077ef9e  MOV byte ptr [EBX + 0x14],AL
0077efa1  MOV EAX,dword ptr [ESP + 0x10]
0077efa5  MOV CL,byte ptr [EAX + 0x14]
0077efa8  MOV BL,0x1
0077efaa  CMP CL,BL
0077efac  JNZ 0x0077f0b1
0077efb2  MOV ECX,dword ptr [EBP + 0x4]
0077efb5  CMP EDI,dword ptr [ECX + 0x4]
0077efb8  JZ 0x0077f0ae
0077efbe  MOV EDI,EDI
0077efc0  CMP byte ptr [EDI + 0x14],BL
0077efc3  JNZ 0x0077f0ae
0077efc9  MOV EAX,dword ptr [ESI]
0077efcb  CMP EDI,EAX
0077efcd  JNZ 0x0077f036
0077efcf  MOV EAX,dword ptr [ESI + 0x8]
0077efd2  MOV CL,byte ptr [EAX + 0x14]
0077efd5  TEST CL,CL
0077efd7  JNZ 0x0077efeb
0077efd9  MOV byte ptr [EAX + 0x14],BL
0077efdc  PUSH ESI
0077efdd  MOV ECX,EBP
0077efdf  MOV byte ptr [ESI + 0x14],0x0
0077efe3  CALL 0x0076b500
0077efe8  MOV EAX,dword ptr [ESI + 0x8]
0077efeb  MOV CL,byte ptr [EAX + 0x15]
0077efee  TEST CL,CL
0077eff0  JNZ 0x0077f068
0077eff2  MOV EDX,dword ptr [EAX]
0077eff4  CMP byte ptr [EDX + 0x14],BL
0077eff7  JNZ 0x0077f001
0077eff9  MOV ECX,dword ptr [EAX + 0x8]
0077effc  CMP byte ptr [ECX + 0x14],BL
0077efff  JZ 0x0077f064
0077f001  MOV ECX,dword ptr [EAX + 0x8]
0077f004  CMP byte ptr [ECX + 0x14],BL
0077f007  JNZ 0x0077f01d
0077f009  MOV EDX,dword ptr [EAX]
0077f00b  MOV byte ptr [EDX + 0x14],BL
0077f00e  PUSH EAX
0077f00f  MOV ECX,EBP
0077f011  MOV byte ptr [EAX + 0x14],0x0
0077f015  CALL 0x0076b5a0
0077f01a  MOV EAX,dword ptr [ESI + 0x8]
0077f01d  MOV CL,byte ptr [ESI + 0x14]
0077f020  MOV byte ptr [EAX + 0x14],CL
0077f023  MOV byte ptr [ESI + 0x14],BL
0077f026  MOV EDX,dword ptr [EAX + 0x8]
0077f029  PUSH ESI
0077f02a  MOV ECX,EBP
0077f02c  MOV byte ptr [EDX + 0x14],BL
0077f02f  CALL 0x0076b500
0077f034  JMP 0x0077f0ae
0077f036  MOV CL,byte ptr [EAX + 0x14]
0077f039  TEST CL,CL
0077f03b  JNZ 0x0077f04e
0077f03d  MOV byte ptr [EAX + 0x14],BL
0077f040  PUSH ESI
0077f041  MOV ECX,EBP
0077f043  MOV byte ptr [ESI + 0x14],0x0
0077f047  CALL 0x0076b5a0
0077f04c  MOV EAX,dword ptr [ESI]
0077f04e  MOV CL,byte ptr [EAX + 0x15]
0077f051  TEST CL,CL
0077f053  JNZ 0x0077f068
0077f055  MOV EDX,dword ptr [EAX + 0x8]
0077f058  CMP byte ptr [EDX + 0x14],BL
0077f05b  JNZ 0x0077f07d
0077f05d  MOV ECX,dword ptr [EAX]
0077f05f  CMP byte ptr [ECX + 0x14],BL
0077f062  JNZ 0x0077f07d
0077f064  MOV byte ptr [EAX + 0x14],0x0
0077f068  MOV EDX,dword ptr [EBP + 0x4]
0077f06b  MOV EAX,dword ptr [EDX + 0x4]
0077f06e  MOV EDI,ESI
0077f070  CMP EDI,EAX
0077f072  MOV ESI,dword ptr [ESI + 0x4]
0077f075  JNZ 0x0077efc0
0077f07b  JMP 0x0077f0ae
0077f07d  MOV ECX,dword ptr [EAX]
0077f07f  CMP byte ptr [ECX + 0x14],BL
0077f082  JNZ 0x0077f098
0077f084  MOV EDX,dword ptr [EAX + 0x8]
0077f087  MOV byte ptr [EDX + 0x14],BL
0077f08a  PUSH EAX
0077f08b  MOV ECX,EBP
0077f08d  MOV byte ptr [EAX + 0x14],0x0
0077f091  CALL 0x0076b500
0077f096  MOV EAX,dword ptr [ESI]
0077f098  MOV CL,byte ptr [ESI + 0x14]
0077f09b  MOV byte ptr [EAX + 0x14],CL
0077f09e  MOV byte ptr [ESI + 0x14],BL
0077f0a1  MOV EDX,dword ptr [EAX]
0077f0a3  PUSH ESI
0077f0a4  MOV ECX,EBP
0077f0a6  MOV byte ptr [EDX + 0x14],BL
0077f0a9  CALL 0x0076b5a0
0077f0ae  MOV byte ptr [EDI + 0x14],BL
0077f0b1  MOV EAX,dword ptr [ESP + 0x10]
0077f0b5  PUSH 0x0
0077f0b7  PUSH 0x18
0077f0b9  PUSH EAX
0077f0ba  MOV ECX,0x925b30
0077f0bf  CALL 0x005d0370
0077f0c4  MOV EAX,dword ptr [EBP + 0x8]
0077f0c7  TEST EAX,EAX
0077f0c9  POP EDI
0077f0ca  POP EBX
0077f0cb  JBE 0x0077f0d1
0077f0cd  DEC EAX
0077f0ce  MOV dword ptr [EBP + 0x8],EAX
0077f0d1  MOV ECX,dword ptr [ESP + 0x64]
0077f0d5  MOV EAX,dword ptr [ESP + 0x60]
0077f0d9  MOV dword ptr [EAX],ECX
0077f0db  MOV ECX,dword ptr [ESP + 0x50]
0077f0df  POP ESI
0077f0e0  POP EBP
0077f0e1  MOV dword ptr FS:[0x0],ECX
0077f0e8  ADD ESP,0x54
0077f0eb  RET 0x8
