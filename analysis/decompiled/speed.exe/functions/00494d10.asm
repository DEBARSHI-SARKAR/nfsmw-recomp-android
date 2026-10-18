00494d10  MOV EDX,dword ptr [ESP + 0x8]
00494d14  MOV EAX,dword ptr [ESP + 0x4]
00494d18  PUSH ESI
00494d19  MOV ESI,ECX
00494d1b  MOV dword ptr [EDX + 0x8],0x0
00494d22  MOV dword ptr [EDX + 0x4],0x0
00494d29  MOV dword ptr [EDX],0x0
00494d2f  MOV CL,byte ptr [EAX + 0x18]
00494d32  TEST CL,CL
00494d34  JNZ 0x00494d56
00494d36  MOV CL,byte ptr [ESI]
00494d38  SHR CL,0x4
00494d3b  MOVZX ECX,CL
00494d3e  MOV dword ptr [ESP + 0xc],ECX
00494d42  FILD dword ptr [ESP + 0xc]
00494d46  FMUL float ptr [EAX + 0x10]
00494d49  FMUL float ptr [0x00895504]
00494d4f  FADD float ptr [EAX + 0x8]
00494d52  FSTP float ptr [EDX]
00494d54  JMP 0x00494d99
00494d56  CMP CL,0x1
00494d59  MOV CL,byte ptr [ESI]
00494d5b  JNZ 0x00494d7c
00494d5d  SHR CL,0x4
00494d60  MOVZX ECX,CL
00494d63  MOV dword ptr [ESP + 0xc],ECX
00494d67  FILD dword ptr [ESP + 0xc]
00494d6b  FMUL float ptr [EAX + 0x10]
00494d6e  FMUL float ptr [0x00895504]
00494d74  FADD float ptr [EAX + 0x8]
00494d77  FSTP float ptr [EDX + 0x4]
00494d7a  JMP 0x00494d99
00494d7c  SHR CL,0x4
00494d7f  MOVZX ECX,CL
00494d82  MOV dword ptr [ESP + 0xc],ECX
00494d86  FILD dword ptr [ESP + 0xc]
00494d8a  FMUL float ptr [EAX + 0x10]
00494d8d  FMUL float ptr [0x00895504]
00494d93  FADD float ptr [EAX + 0x8]
00494d96  FSTP float ptr [EDX + 0x8]
00494d99  MOV CL,byte ptr [ESI]
00494d9b  AND CL,0xf
00494d9e  MOVZX ECX,CL
00494da1  MOV dword ptr [ESP + 0xc],ECX
00494da5  POP ESI
00494da6  FILD dword ptr [ESP + 0x8]
00494daa  FMUL float ptr [EAX + 0x14]
00494dad  FMUL float ptr [0x00895504]
00494db3  FADD float ptr [EAX + 0xc]
00494db6  FSTP float ptr [EDX + 0xc]
00494db9  RET 0x8
