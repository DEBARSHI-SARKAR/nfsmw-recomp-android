0081cb91  PUSH EBP
0081cb92  MOV EBP,ESP
0081cb94  PUSH ECX
0081cb95  PUSH ECX
0081cb96  PUSH EBX
0081cb97  XOR EBX,EBX
0081cb99  PUSH ESI
0081cb9a  MOV ESI,dword ptr [EBP + 0xc]
0081cb9d  MOV dword ptr [ESI],EBX
0081cb9f  MOV dword ptr [ESI + 0x4],EBX
0081cba2  MOV dword ptr [ESI + 0x8],EBX
0081cba5  MOV dword ptr [ESI + 0xc],EBX
0081cba8  CMP byte ptr [0x009c2188],BL
0081cbae  JNZ 0x0081cbb4
0081cbb0  PUSH -0xa
0081cbb2  JMP 0x0081cbbb
0081cbb4  CMP dword ptr [EBP + 0x8],EBX
0081cbb7  JGE 0x0081cbc1
0081cbb9  PUSH -0x8
0081cbbb  POP EAX
0081cbbc  JMP 0x0081cca6
0081cbc1  MOV EAX,dword ptr [EBP + 0x8]
0081cbc4  AND EAX,0xff
0081cbc9  PUSH EDI
0081cbca  PUSH EAX
0081cbcb  CALL 0x0081c131
0081cbd0  MOV EDI,EAX
0081cbd2  CMP EDI,EBX
0081cbd4  POP ECX
0081cbd5  JNZ 0x0081cbdf
0081cbd7  PUSH -0x8
0081cbd9  POP EAX
0081cbda  JMP 0x0081cca5
0081cbdf  PUSH dword ptr [EBP + 0x8]
0081cbe2  CALL 0x00821c48
0081cbe7  CMP EAX,EBX
0081cbe9  POP ECX
0081cbea  JZ 0x0081cc9d
0081cbf0  CMP byte ptr [EAX + 0x24],BL
0081cbf3  JNZ 0x0081cbfc
0081cbf5  MOV dword ptr [ESI],EBX
0081cbf7  JMP 0x0081cca3
0081cbfc  CMP dword ptr [EDI + 0x120],EAX
0081cc02  JNZ 0x0081cc10
0081cc04  MOV dword ptr [ESI],0x2
0081cc0a  MOVZX ECX,word ptr [EDI + 0x14]
0081cc0e  JMP 0x0081cc1a
0081cc10  MOV dword ptr [ESI],0x1
0081cc16  MOVZX ECX,word ptr [EDI + 0x18]
0081cc1a  MOV dword ptr [EBP + 0xc],ECX
0081cc1d  FILD dword ptr [EBP + 0xc]
0081cc20  MOV ECX,dword ptr [EAX + 0x14]
0081cc23  TEST ECX,ECX
0081cc25  FDIVR float ptr [0x00894200]
0081cc2b  FST float ptr [EBP + 0xc]
0081cc2e  FILD dword ptr [EAX + 0x14]
0081cc31  JGE 0x0081cc39
0081cc33  FADD float ptr [0x00891214]
0081cc39  FMUL ST1
0081cc3b  FSTP float ptr [EBP + -0x4]
0081cc3e  FSTP ST0
0081cc40  FLD float ptr [EBP + -0x4]
0081cc43  FISTP dword ptr [EBP + -0x8]
0081cc46  MOV ECX,dword ptr [EBP + -0x8]
0081cc49  MOV dword ptr [ESI + 0x4],ECX
0081cc4c  MOV ECX,dword ptr [EAX + 0x18]
0081cc4f  MOV EDX,dword ptr [EAX + 0x14]
0081cc52  SUB ECX,EDX
0081cc54  TEST ECX,ECX
0081cc56  MOV dword ptr [EBP + -0x8],ECX
0081cc59  FILD dword ptr [EBP + -0x8]
0081cc5c  JGE 0x0081cc64
0081cc5e  FADD float ptr [0x00891214]
0081cc64  FMUL float ptr [EBP + 0xc]
0081cc67  FSTP float ptr [EBP + -0x8]
0081cc6a  FLD float ptr [EBP + -0x8]
0081cc6d  FISTP dword ptr [EBP + -0x4]
0081cc70  MOV ECX,dword ptr [EBP + -0x4]
0081cc73  MOV dword ptr [ESI + 0x8],ECX
0081cc76  MOV EAX,dword ptr [EAX + 0x1c]
0081cc79  TEST EAX,EAX
0081cc7b  MOV dword ptr [EBP + -0x8],EAX
0081cc7e  FILD dword ptr [EBP + -0x8]
0081cc81  JGE 0x0081cc89
0081cc83  FADD float ptr [0x00891214]
0081cc89  FMUL float ptr [EBP + 0xc]
0081cc8c  FSTP float ptr [EBP + 0xc]
0081cc8f  FLD float ptr [EBP + 0xc]
0081cc92  FISTP dword ptr [EBP + -0x8]
0081cc95  MOV EAX,dword ptr [EBP + -0x8]
0081cc98  MOV dword ptr [ESI + 0xc],EAX
0081cc9b  JMP 0x0081cca3
0081cc9d  MOV dword ptr [ESI],0x3
0081cca3  XOR EAX,EAX
0081cca5  POP EDI
0081cca6  POP ESI
0081cca7  POP EBX
0081cca8  LEAVE
0081cca9  RET
