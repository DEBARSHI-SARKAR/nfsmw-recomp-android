007dfc60  PUSH EBP
007dfc61  MOV EBP,ESP
007dfc63  SUB ESP,0x18
007dfc66  MOV dword ptr [EBP + -0x8],0x0
007dfc6d  CMP dword ptr [EBP + 0x1c],0x0
007dfc71  JNZ 0x007dfc7e
007dfc73  MOV EAX,dword ptr [EBP + 0x8]
007dfc76  MOV ECX,dword ptr [EAX + 0x4c]
007dfc79  MOV dword ptr [EBP + -0x14],ECX
007dfc7c  JMP 0x007dfc84
007dfc7e  MOV EDX,dword ptr [EBP + 0x1c]
007dfc81  MOV dword ptr [EBP + -0x14],EDX
007dfc84  MOV EAX,dword ptr [EBP + -0x14]
007dfc87  MOV dword ptr [EBP + -0x10],EAX
007dfc8a  CMP dword ptr [EBP + 0x10],0x0
007dfc8e  JNZ 0x007dfcbc
007dfc90  XOR ECX,ECX
007dfc92  JNZ 0x007dfcb5
007dfc94  PUSH 0x8bdfb8
007dfc99  PUSH 0x0
007dfc9b  PUSH 0x147
007dfca0  PUSH 0x8bdf70
007dfca5  PUSH 0x2
007dfca7  CALL 0x007d2670
007dfcac  ADD ESP,0x14
007dfcaf  CMP EAX,0x1
007dfcb2  JNZ 0x007dfcb5
007dfcb4  INT3
007dfcb5  XOR EAX,EAX
007dfcb7  JMP 0x007dfe2d
007dfcbc  MOV EAX,dword ptr [EBP + 0x10]
007dfcbf  MOV dword ptr [EBP + -0xc],EAX
007dfcc2  CMP dword ptr [EBP + -0xc],0x0
007dfcc6  JBE 0x007dfdfc
007dfccc  MOV ECX,dword ptr [EBP + 0x14]
007dfccf  MOV DL,byte ptr [ECX]
007dfcd1  MOV byte ptr [EBP + -0x18],DL
007dfcd4  CMP byte ptr [EBP + -0x18],0x0
007dfcd8  JZ 0x007dfce2
007dfcda  CMP byte ptr [EBP + -0x18],0x25
007dfcde  JZ 0x007dfce7
007dfce0  JMP 0x007dfd56
007dfce2  JMP 0x007dfdfc
007dfce7  MOV EAX,dword ptr [EBP + 0x14]
007dfcea  ADD EAX,0x1
007dfced  MOV dword ptr [EBP + 0x14],EAX
007dfcf0  MOV dword ptr [EBP + -0x4],0x0
007dfcf7  MOV ECX,dword ptr [EBP + 0x14]
007dfcfa  MOVSX EDX,byte ptr [ECX]
007dfcfd  CMP EDX,0x23
007dfd00  JNZ 0x007dfd12
007dfd02  MOV dword ptr [EBP + -0x4],0x1
007dfd09  MOV EAX,dword ptr [EBP + 0x14]
007dfd0c  ADD EAX,0x1
007dfd0f  MOV dword ptr [EBP + 0x14],EAX
007dfd12  MOV ECX,dword ptr [EBP + -0x4]
007dfd15  PUSH ECX
007dfd16  MOV EDX,dword ptr [EBP + -0x10]
007dfd19  PUSH EDX
007dfd1a  LEA EAX,[EBP + -0xc]
007dfd1d  PUSH EAX
007dfd1e  LEA ECX,[EBP + 0xc]
007dfd21  PUSH ECX
007dfd22  MOV EDX,dword ptr [EBP + 0x18]
007dfd25  PUSH EDX
007dfd26  MOV EAX,dword ptr [EBP + 0x14]
007dfd29  MOV CL,byte ptr [EAX]
007dfd2b  PUSH ECX
007dfd2c  MOV EDX,dword ptr [EBP + 0x8]
007dfd2f  PUSH EDX
007dfd30  CALL 0x007dfe40
007dfd35  ADD ESP,0x1c
007dfd38  TEST EAX,EAX
007dfd3a  JNZ 0x007dfd48
007dfd3c  MOV dword ptr [EBP + -0x8],0x1
007dfd43  JMP 0x007dfdfc
007dfd48  MOV EAX,dword ptr [EBP + 0x14]
007dfd4b  ADD EAX,0x1
007dfd4e  MOV dword ptr [EBP + 0x14],EAX
007dfd51  JMP 0x007dfdf7
007dfd56  MOV ECX,dword ptr [EBP + 0x14]
007dfd59  MOVZX EDX,byte ptr [ECX]
007dfd5c  MOV EAX,dword ptr [EBP + 0x8]
007dfd5f  MOV ECX,dword ptr [EAX + 0x48]
007dfd62  MOVZX EDX,word ptr [ECX + EDX*0x2]
007dfd66  AND EDX,0x8000
007dfd6c  JZ 0x007dfdd2
007dfd6e  CMP dword ptr [EBP + -0xc],0x1
007dfd72  JBE 0x007dfdd2
007dfd74  MOV EAX,dword ptr [EBP + 0x14]
007dfd77  MOVSX ECX,byte ptr [EAX + 0x1]
007dfd7b  TEST ECX,ECX
007dfd7d  JNZ 0x007dfdad
007dfd7f  XOR EDX,EDX
007dfd81  JNZ 0x007dfda4
007dfd83  PUSH 0x8bdf7c
007dfd88  PUSH 0x0
007dfd8a  PUSH 0x188
007dfd8f  PUSH 0x8bdf70
007dfd94  PUSH 0x2
007dfd96  CALL 0x007d2670
007dfd9b  ADD ESP,0x14
007dfd9e  CMP EAX,0x1
007dfda1  JNZ 0x007dfda4
007dfda3  INT3
007dfda4  MOV dword ptr [EBP + -0x8],0x1
007dfdab  JMP 0x007dfdfc
007dfdad  MOV ECX,dword ptr [EBP + 0xc]
007dfdb0  MOV EDX,dword ptr [EBP + 0x14]
007dfdb3  MOV AL,byte ptr [EDX]
007dfdb5  MOV byte ptr [ECX],AL
007dfdb7  MOV ECX,dword ptr [EBP + 0xc]
007dfdba  ADD ECX,0x1
007dfdbd  MOV dword ptr [EBP + 0xc],ECX
007dfdc0  MOV EDX,dword ptr [EBP + 0x14]
007dfdc3  ADD EDX,0x1
007dfdc6  MOV dword ptr [EBP + 0x14],EDX
007dfdc9  MOV EAX,dword ptr [EBP + -0xc]
007dfdcc  SUB EAX,0x1
007dfdcf  MOV dword ptr [EBP + -0xc],EAX
007dfdd2  MOV ECX,dword ptr [EBP + 0xc]
007dfdd5  MOV EDX,dword ptr [EBP + 0x14]
007dfdd8  MOV AL,byte ptr [EDX]
007dfdda  MOV byte ptr [ECX],AL
007dfddc  MOV ECX,dword ptr [EBP + 0xc]
007dfddf  ADD ECX,0x1
007dfde2  MOV dword ptr [EBP + 0xc],ECX
007dfde5  MOV EDX,dword ptr [EBP + 0x14]
007dfde8  ADD EDX,0x1
007dfdeb  MOV dword ptr [EBP + 0x14],EDX
007dfdee  MOV EAX,dword ptr [EBP + -0xc]
007dfdf1  SUB EAX,0x1
007dfdf4  MOV dword ptr [EBP + -0xc],EAX
007dfdf7  JMP 0x007dfcc2
007dfdfc  CMP dword ptr [EBP + -0x8],0x0
007dfe00  JNZ 0x007dfe16
007dfe02  CMP dword ptr [EBP + -0xc],0x0
007dfe06  JBE 0x007dfe16
007dfe08  MOV ECX,dword ptr [EBP + 0xc]
007dfe0b  MOV byte ptr [ECX],0x0
007dfe0e  MOV EAX,dword ptr [EBP + 0x10]
007dfe11  SUB EAX,dword ptr [EBP + -0xc]
007dfe14  JMP 0x007dfe2d
007dfe16  CMP dword ptr [EBP + -0xc],0x0
007dfe1a  JNZ 0x007dfe25
007dfe1c  MOV EDX,dword ptr [EBP + 0xc]
007dfe1f  SUB EDX,0x1
007dfe22  MOV dword ptr [EBP + 0xc],EDX
007dfe25  MOV EAX,dword ptr [EBP + 0xc]
007dfe28  MOV byte ptr [EAX],0x0
007dfe2b  XOR EAX,EAX
007dfe2d  MOV ESP,EBP
007dfe2f  POP EBP
007dfe30  RET
