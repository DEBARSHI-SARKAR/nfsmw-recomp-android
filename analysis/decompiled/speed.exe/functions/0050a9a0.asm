0050a9a0  MOV EAX,FS:[0x0]
0050a9a6  PUSH -0x1
0050a9a8  PUSH 0x86df88
0050a9ad  PUSH EAX
0050a9ae  MOV EAX,dword ptr [ESP + 0x14]
0050a9b2  MOV dword ptr FS:[0x0],ESP
0050a9b9  SUB ESP,0x48
0050a9bc  PUSH EBP
0050a9bd  MOV EBP,ECX
0050a9bf  MOV CL,byte ptr [EAX + 0x15]
0050a9c2  TEST CL,CL
0050a9c4  PUSH ESI
0050a9c5  JZ 0x0050aa13
0050a9c7  PUSH 0x1b
0050a9c9  XOR ESI,ESI
0050a9cb  PUSH 0x892920
0050a9d0  LEA ECX,[ESP + 0x14]
0050a9d4  MOV dword ptr [ESP + 0x2c],0xf
0050a9dc  MOV dword ptr [ESP + 0x28],ESI
0050a9e0  MOV byte ptr [ESP + 0x18],0x0
0050a9e5  CALL 0x004303b0
0050a9ea  LEA EAX,[ESP + 0xc]
0050a9ee  PUSH EAX
0050a9ef  LEA ECX,[ESP + 0x2c]
0050a9f3  MOV dword ptr [ESP + 0x5c],ESI
0050a9f7  CALL 0x00432d50
0050a9fc  PUSH 0x8c9f78
0050aa01  LEA ECX,[ESP + 0x2c]
0050aa05  PUSH ECX
0050aa06  MOV dword ptr [ESP + 0x30],0x8bf2c0
0050aa0e  CALL 0x007c56b0
0050aa13  PUSH EBX
0050aa14  MOV EBX,EAX
0050aa16  PUSH EDI
0050aa17  LEA ECX,[ESP + 0x6c]
0050aa1b  MOV dword ptr [ESP + 0x10],EBX
0050aa1f  CALL 0x00504990
0050aa24  MOV EAX,dword ptr [EBX]
0050aa26  MOV CL,byte ptr [EAX + 0x15]
0050aa29  TEST CL,CL
0050aa2b  JZ 0x0050aa32
0050aa2d  MOV EDI,dword ptr [EBX + 0x8]
0050aa30  JMP 0x0050aa4b
0050aa32  MOV EDX,dword ptr [EBX + 0x8]
0050aa35  MOV CL,byte ptr [EDX + 0x15]
0050aa38  TEST CL,CL
0050aa3a  JZ 0x0050aa40
0050aa3c  MOV EDI,EAX
0050aa3e  JMP 0x0050aa4b
0050aa40  MOV ECX,dword ptr [ESP + 0x6c]
0050aa44  CMP ECX,EBX
0050aa46  MOV EDI,dword ptr [ECX + 0x8]
0050aa49  JNZ 0x0050aab9
0050aa4b  MOV AL,byte ptr [EDI + 0x15]
0050aa4e  TEST AL,AL
0050aa50  MOV ESI,dword ptr [EBX + 0x4]
0050aa53  JNZ 0x0050aa58
0050aa55  MOV dword ptr [EDI + 0x4],ESI
0050aa58  MOV EAX,dword ptr [EBP + 0x4]
0050aa5b  CMP dword ptr [EAX + 0x4],EBX
0050aa5e  JNZ 0x0050aa65
0050aa60  MOV dword ptr [EAX + 0x4],EDI
0050aa63  JMP 0x0050aa70
0050aa65  CMP dword ptr [ESI],EBX
0050aa67  JNZ 0x0050aa6d
0050aa69  MOV dword ptr [ESI],EDI
0050aa6b  JMP 0x0050aa70
0050aa6d  MOV dword ptr [ESI + 0x8],EDI
0050aa70  MOV EBX,dword ptr [EBP + 0x4]
0050aa73  MOV EAX,dword ptr [EBX]
0050aa75  CMP EAX,dword ptr [ESP + 0x10]
0050aa79  JNZ 0x0050aa91
0050aa7b  MOV AL,byte ptr [EDI + 0x15]
0050aa7e  TEST AL,AL
0050aa80  JZ 0x0050aa86
0050aa82  MOV EAX,ESI
0050aa84  JMP 0x0050aa8f
0050aa86  PUSH EDI
0050aa87  CALL 0x005004f0
0050aa8c  ADD ESP,0x4
0050aa8f  MOV dword ptr [EBX],EAX
0050aa91  MOV EBX,dword ptr [EBP + 0x4]
0050aa94  MOV ECX,dword ptr [ESP + 0x10]
0050aa98  CMP dword ptr [EBX + 0x8],ECX
0050aa9b  JNZ 0x0050ab11
0050aa9d  MOV AL,byte ptr [EDI + 0x15]
0050aaa0  TEST AL,AL
0050aaa2  JZ 0x0050aaab
0050aaa4  MOV EAX,ESI
0050aaa6  MOV dword ptr [EBX + 0x8],EAX
0050aaa9  JMP 0x0050ab11
0050aaab  PUSH EDI
0050aaac  CALL 0x005004d0
0050aab1  ADD ESP,0x4
0050aab4  MOV dword ptr [EBX + 0x8],EAX
0050aab7  JMP 0x0050ab11
0050aab9  MOV dword ptr [EAX + 0x4],ECX
0050aabc  MOV EDX,dword ptr [EBX]
0050aabe  MOV dword ptr [ECX],EDX
0050aac0  CMP ECX,dword ptr [EBX + 0x8]
0050aac3  JNZ 0x0050aac9
0050aac5  MOV ESI,ECX
0050aac7  JMP 0x0050aae4
0050aac9  MOV AL,byte ptr [EDI + 0x15]
0050aacc  TEST AL,AL
0050aace  MOV ESI,dword ptr [ECX + 0x4]
0050aad1  JNZ 0x0050aad6
0050aad3  MOV dword ptr [EDI + 0x4],ESI
0050aad6  MOV dword ptr [ESI],EDI
0050aad8  MOV EAX,dword ptr [EBX + 0x8]
0050aadb  MOV dword ptr [ECX + 0x8],EAX
0050aade  MOV EDX,dword ptr [EBX + 0x8]
0050aae1  MOV dword ptr [EDX + 0x4],ECX
0050aae4  MOV EAX,dword ptr [EBP + 0x4]
0050aae7  CMP dword ptr [EAX + 0x4],EBX
0050aaea  JNZ 0x0050aaf1
0050aaec  MOV dword ptr [EAX + 0x4],ECX
0050aaef  JMP 0x0050aaff
0050aaf1  MOV EAX,dword ptr [EBX + 0x4]
0050aaf4  CMP dword ptr [EAX],EBX
0050aaf6  JNZ 0x0050aafc
0050aaf8  MOV dword ptr [EAX],ECX
0050aafa  JMP 0x0050aaff
0050aafc  MOV dword ptr [EAX + 0x8],ECX
0050aaff  MOV EAX,dword ptr [EBX + 0x4]
0050ab02  MOV dword ptr [ECX + 0x4],EAX
0050ab05  MOV DL,byte ptr [EBX + 0x14]
0050ab08  MOV AL,byte ptr [ECX + 0x14]
0050ab0b  MOV byte ptr [ECX + 0x14],DL
0050ab0e  MOV byte ptr [EBX + 0x14],AL
0050ab11  MOV EAX,dword ptr [ESP + 0x10]
0050ab15  MOV CL,byte ptr [EAX + 0x14]
0050ab18  MOV BL,0x1
0050ab1a  CMP CL,BL
0050ab1c  JNZ 0x0050ac21
0050ab22  MOV ECX,dword ptr [EBP + 0x4]
0050ab25  CMP EDI,dword ptr [ECX + 0x4]
0050ab28  JZ 0x0050ac1e
0050ab2e  MOV EDI,EDI
0050ab30  CMP byte ptr [EDI + 0x14],BL
0050ab33  JNZ 0x0050ac1e
0050ab39  MOV EAX,dword ptr [ESI]
0050ab3b  CMP EDI,EAX
0050ab3d  JNZ 0x0050aba6
0050ab3f  MOV EAX,dword ptr [ESI + 0x8]
0050ab42  MOV CL,byte ptr [EAX + 0x14]
0050ab45  TEST CL,CL
0050ab47  JNZ 0x0050ab5b
0050ab49  MOV byte ptr [EAX + 0x14],BL
0050ab4c  PUSH ESI
0050ab4d  MOV ECX,EBP
0050ab4f  MOV byte ptr [ESI + 0x14],0x0
0050ab53  CALL 0x00504730
0050ab58  MOV EAX,dword ptr [ESI + 0x8]
0050ab5b  MOV CL,byte ptr [EAX + 0x15]
0050ab5e  TEST CL,CL
0050ab60  JNZ 0x0050abd8
0050ab62  MOV EDX,dword ptr [EAX]
0050ab64  CMP byte ptr [EDX + 0x14],BL
0050ab67  JNZ 0x0050ab71
0050ab69  MOV ECX,dword ptr [EAX + 0x8]
0050ab6c  CMP byte ptr [ECX + 0x14],BL
0050ab6f  JZ 0x0050abd4
0050ab71  MOV ECX,dword ptr [EAX + 0x8]
0050ab74  CMP byte ptr [ECX + 0x14],BL
0050ab77  JNZ 0x0050ab8d
0050ab79  MOV EDX,dword ptr [EAX]
0050ab7b  MOV byte ptr [EDX + 0x14],BL
0050ab7e  PUSH EAX
0050ab7f  MOV ECX,EBP
0050ab81  MOV byte ptr [EAX + 0x14],0x0
0050ab85  CALL 0x00504790
0050ab8a  MOV EAX,dword ptr [ESI + 0x8]
0050ab8d  MOV CL,byte ptr [ESI + 0x14]
0050ab90  MOV byte ptr [EAX + 0x14],CL
0050ab93  MOV byte ptr [ESI + 0x14],BL
0050ab96  MOV EDX,dword ptr [EAX + 0x8]
0050ab99  PUSH ESI
0050ab9a  MOV ECX,EBP
0050ab9c  MOV byte ptr [EDX + 0x14],BL
0050ab9f  CALL 0x00504730
0050aba4  JMP 0x0050ac1e
0050aba6  MOV CL,byte ptr [EAX + 0x14]
0050aba9  TEST CL,CL
0050abab  JNZ 0x0050abbe
0050abad  MOV byte ptr [EAX + 0x14],BL
0050abb0  PUSH ESI
0050abb1  MOV ECX,EBP
0050abb3  MOV byte ptr [ESI + 0x14],0x0
0050abb7  CALL 0x00504790
0050abbc  MOV EAX,dword ptr [ESI]
0050abbe  MOV CL,byte ptr [EAX + 0x15]
0050abc1  TEST CL,CL
0050abc3  JNZ 0x0050abd8
0050abc5  MOV EDX,dword ptr [EAX + 0x8]
0050abc8  CMP byte ptr [EDX + 0x14],BL
0050abcb  JNZ 0x0050abed
0050abcd  MOV ECX,dword ptr [EAX]
0050abcf  CMP byte ptr [ECX + 0x14],BL
0050abd2  JNZ 0x0050abed
0050abd4  MOV byte ptr [EAX + 0x14],0x0
0050abd8  MOV EDX,dword ptr [EBP + 0x4]
0050abdb  MOV EAX,dword ptr [EDX + 0x4]
0050abde  MOV EDI,ESI
0050abe0  CMP EDI,EAX
0050abe2  MOV ESI,dword ptr [ESI + 0x4]
0050abe5  JNZ 0x0050ab30
0050abeb  JMP 0x0050ac1e
0050abed  MOV ECX,dword ptr [EAX]
0050abef  CMP byte ptr [ECX + 0x14],BL
0050abf2  JNZ 0x0050ac08
0050abf4  MOV EDX,dword ptr [EAX + 0x8]
0050abf7  MOV byte ptr [EDX + 0x14],BL
0050abfa  PUSH EAX
0050abfb  MOV ECX,EBP
0050abfd  MOV byte ptr [EAX + 0x14],0x0
0050ac01  CALL 0x00504730
0050ac06  MOV EAX,dword ptr [ESI]
0050ac08  MOV CL,byte ptr [ESI + 0x14]
0050ac0b  MOV byte ptr [EAX + 0x14],CL
0050ac0e  MOV byte ptr [ESI + 0x14],BL
0050ac11  MOV EDX,dword ptr [EAX]
0050ac13  PUSH ESI
0050ac14  MOV ECX,EBP
0050ac16  MOV byte ptr [EDX + 0x14],BL
0050ac19  CALL 0x00504790
0050ac1e  MOV byte ptr [EDI + 0x14],BL
0050ac21  MOV EAX,dword ptr [ESP + 0x10]
0050ac25  PUSH 0x0
0050ac27  PUSH 0x18
0050ac29  PUSH EAX
0050ac2a  MOV ECX,0x925b30
0050ac2f  CALL 0x005d0370
0050ac34  MOV EAX,dword ptr [EBP + 0x8]
0050ac37  TEST EAX,EAX
0050ac39  POP EDI
0050ac3a  POP EBX
0050ac3b  JBE 0x0050ac41
0050ac3d  DEC EAX
0050ac3e  MOV dword ptr [EBP + 0x8],EAX
0050ac41  MOV ECX,dword ptr [ESP + 0x64]
0050ac45  MOV EAX,dword ptr [ESP + 0x60]
0050ac49  MOV dword ptr [EAX],ECX
0050ac4b  MOV ECX,dword ptr [ESP + 0x50]
0050ac4f  POP ESI
0050ac50  POP EBP
0050ac51  MOV dword ptr FS:[0x0],ECX
0050ac58  ADD ESP,0x54
0050ac5b  RET 0x8
