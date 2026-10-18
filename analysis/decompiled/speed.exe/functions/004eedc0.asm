004eedc0  PUSH -0x1
004eedc2  PUSH 0x86d2ab
004eedc7  MOV EAX,FS:[0x0]
004eedcd  PUSH EAX
004eedce  MOV dword ptr FS:[0x0],ESP
004eedd5  SUB ESP,0x8
004eedd8  PUSH EBX
004eedd9  PUSH EDI
004eedda  MOV EDI,ECX
004eeddc  MOV AL,byte ptr [EDI + 0x8]
004eeddf  XOR EBX,EBX
004eede1  CMP AL,BL
004eede3  MOV dword ptr [ESP + 0x8],EDI
004eede7  JZ 0x004eef66
004eeded  CMP dword ptr [0x008f86f8],0x1
004eedf4  JNZ 0x004eef66
004eedfa  MOV EAX,dword ptr [EDI + 0x10]
004eedfd  CMP EAX,EBX
004eedff  PUSH EBP
004eee00  PUSH ESI
004eee01  JZ 0x004eee11
004eee03  MOV EAX,dword ptr [EAX]
004eee05  SAR EAX,0x10
004eee08  AND EAX,0x7fff
004eee0d  MOV EBP,EAX
004eee0f  JMP 0x004eee13
004eee11  XOR EBP,EBP
004eee13  MOV ESI,dword ptr [EDI + 0x28]
004eee16  CMP ESI,EBX
004eee18  JZ 0x004eee31
004eee1a  MOV ECX,dword ptr [ESI]
004eee1c  CMP ECX,EBX
004eee1e  JZ 0x004eee25
004eee20  CALL 0x00831782
004eee25  PUSH ESI
004eee26  CALL 0x00831682
004eee2b  ADD ESP,0x4
004eee2e  MOV dword ptr [EDI + 0x28],EBX
004eee31  MOV ECX,dword ptr [0x00911fa8]
004eee37  PUSH EDI
004eee38  CALL 0x004b8db0
004eee3d  PUSH 0x28
004eee3f  CALL 0x00831667
004eee44  MOV ESI,EAX
004eee46  ADD ESP,0x4
004eee49  MOV dword ptr [ESP + 0x14],ESI
004eee4d  CMP ESI,EBX
004eee4f  MOV dword ptr [ESP + 0x20],EBX
004eee53  JZ 0x004eef16
004eee59  MOV EAX,dword ptr [EDI + 0x10]
004eee5c  CMP EAX,EBX
004eee5e  JZ 0x004eee77
004eee60  MOV ECX,dword ptr [0x00911fa8]
004eee66  MOV ECX,dword ptr [ECX + 0x24]
004eee69  CMP dword ptr [ECX + 0x24],EBX
004eee6c  MOV EAX,dword ptr [EAX]
004eee6e  JZ 0x004eee77
004eee70  AND EAX,0xffff
004eee75  JMP 0x004eee79
004eee77  XOR EAX,EAX
004eee79  MOV ECX,dword ptr [ESP + 0x28]
004eee7d  CMP ECX,EBX
004eee7f  JGE 0x004eee85
004eee81  XOR ECX,ECX
004eee83  JMP 0x004eee8f
004eee85  CMP ECX,0x2
004eee88  JLE 0x004eee8f
004eee8a  MOV ECX,0x2
004eee8f  CMP EBP,EBX
004eee91  LEA EDI,[ESI + 0x4]
004eee94  MOV dword ptr [EDI],ECX
004eee96  MOV ECX,EBP
004eee98  JGE 0x004eee9e
004eee9a  XOR ECX,ECX
004eee9c  JMP 0x004eeeab
004eee9e  CMP EBP,0x7fff
004eeea4  JLE 0x004eeeab
004eeea6  MOV ECX,0x7fff
004eeeab  CMP EAX,EBX
004eeead  MOV dword ptr [ESI + 0x8],ECX
004eeeb0  JGE 0x004eeeb6
004eeeb2  XOR EAX,EAX
004eeeb4  JMP 0x004eeec2
004eeeb6  CMP EAX,0xffff
004eeebb  JLE 0x004eeec2
004eeebd  MOV EAX,0xffff
004eeec2  PUSH ESI
004eeec3  PUSH EDI
004eeec4  PUSH 0x91480c
004eeec9  MOV dword ptr [ESI + 0xc],EAX
004eeecc  MOV dword ptr [ESI + 0x10],EBX
004eeecf  MOV dword ptr [ESI + 0x14],EBX
004eeed2  MOV dword ptr [ESI + 0x18],0x61a8
004eeed9  MOV dword ptr [ESI + 0x1c],EBX
004eeedc  MOV dword ptr [ESI + 0x20],0x7fff
004eeee3  MOV dword ptr [ESI + 0x24],EBX
004eeee6  CALL 0x00831a8a
004eeeeb  ADD ESP,0xc
004eeeee  CMP EAX,EBX
004eeef0  JGE 0x004eef10
004eeef2  PUSH 0x8f02d8
004eeef7  MOV ECX,0x91480c
004eeefc  CALL 0x0083198b
004eef01  PUSH ESI
004eef02  PUSH EDI
004eef03  PUSH 0x91480c
004eef08  CALL 0x00831a8a
004eef0d  ADD ESP,0xc
004eef10  MOV EDI,dword ptr [ESP + 0x10]
004eef14  JMP 0x004eef18
004eef16  XOR ESI,ESI
004eef18  MOV dword ptr [EDI + 0x28],ESI
004eef1b  MOV ECX,dword ptr [ESI]
004eef1d  CMP ECX,EBX
004eef1f  POP ESI
004eef20  MOV dword ptr [ESP + 0x1c],0xffffffff
004eef28  MOV dword ptr [ESP + 0x24],EBX
004eef2c  POP EBP
004eef2d  JZ 0x004eef39
004eef2f  LEA EDX,[ESP + 0x20]
004eef33  PUSH EDX
004eef34  CALL 0x008311aa
004eef39  CMP dword ptr [0x009885c8],EBX
004eef3f  JZ 0x004eef5c
004eef41  MOV EAX,dword ptr [EDI + 0xc]
004eef44  MOV dword ptr [EAX + 0x4],EBX
004eef47  POP EDI
004eef48  XOR EAX,EAX
004eef4a  POP EBX
004eef4b  MOV ECX,dword ptr [ESP + 0x8]
004eef4f  MOV dword ptr FS:[0x0],ECX
004eef56  ADD ESP,0x14
004eef59  RET 0xc
004eef5c  MOV ECX,dword ptr [EDI + 0xc]
004eef5f  MOV dword ptr [ECX + 0x4],0x7fff
004eef66  MOV ECX,dword ptr [ESP + 0x10]
004eef6a  POP EDI
004eef6b  XOR EAX,EAX
004eef6d  POP EBX
004eef6e  MOV dword ptr FS:[0x0],ECX
004eef75  ADD ESP,0x14
004eef78  RET 0xc
