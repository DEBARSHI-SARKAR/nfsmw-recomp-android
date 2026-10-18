0074a5d0  PUSH EBP
0074a5d1  MOV EBP,ESP
0074a5d3  AND ESP,0xfffffff0
0074a5d6  SUB ESP,0x184
0074a5dc  PUSH EBX
0074a5dd  PUSH ESI
0074a5de  MOV ESI,ECX
0074a5e0  MOV EAX,dword ptr [ESI + 0x244]
0074a5e6  CMP word ptr [EAX + 0x40],0x5
0074a5eb  PUSH EDI
0074a5ec  JG 0x0074ab15
0074a5f2  FLD float ptr [ESI + 0x28c]
0074a5f8  FMUL float ptr [0x008970cc]
0074a5fe  CALL 0x007c4b80
0074a603  MOV ECX,dword ptr [ESI + 0x288]
0074a609  MOV EDI,EAX
0074a60b  MOV EAX,dword ptr [ECX + 0x40]
0074a60e  ADD EAX,0x50
0074a611  LEA EDX,[ESI + 0x3610]
0074a617  MOV dword ptr [ESP + 0x78],EAX
0074a61b  PUSH EDX
0074a61c  LEA EAX,[ESP + 0x154]
0074a623  PUSH EAX
0074a624  MOV dword ptr [ESP + 0x84],EDI
0074a62b  LEA EBX,[ESI + 0x34d0]
0074a631  CALL 0x00444fe0
0074a636  LEA ECX,[ESI + 0x270]
0074a63c  PUSH ECX
0074a63d  LEA EDX,[ESP + 0x15c]
0074a644  PUSH EDX
0074a645  LEA EAX,[ESP + 0x90]
0074a64c  PUSH EAX
0074a64d  MOV dword ptr [ESP + 0x194],0x0
0074a658  MOV dword ptr [ESP + 0x198],0x0
0074a663  MOV dword ptr [ESP + 0x19c],0x0
0074a66e  MOV dword ptr [ESP + 0x1a0],0x3f800000
0074a679  CALL 0x006bd940
0074a67e  MOV EAX,dword ptr [ESI + 0x244]
0074a684  FLD float ptr [EAX + 0x2c]
0074a687  LEA ECX,[ESP + 0x24]
0074a68b  FADD float ptr [EAX + 0x24]
0074a68e  PUSH ECX
0074a68f  FLD float ptr [EAX + 0x20]
0074a692  MOV EDX,ECX
0074a694  FADD float ptr [EAX + 0x28]
0074a697  PUSH EDX
0074a698  FMUL float ptr [0x008933d4]
0074a69e  FSTP float ptr [ESP + 0x2c]
0074a6a2  FMUL float ptr [0x008933d4]
0074a6a8  FSTP float ptr [ESP + 0x30]
0074a6ac  FLD float ptr [ESI + 0x3840]
0074a6b2  FADD float ptr [ESI + 0x3830]
0074a6b8  FMUL float ptr [0x008933d4]
0074a6be  FSTP float ptr [ESP + 0x50]
0074a6c2  FLD float ptr [ESI + 0x3844]
0074a6c8  FADD float ptr [ESI + 0x3834]
0074a6ce  FMUL float ptr [0x008933d4]
0074a6d4  FSTP float ptr [ESP + 0x54]
0074a6d8  FLD float ptr [ESP + 0x50]
0074a6dc  FSUB float ptr [ESP + 0x2c]
0074a6e0  FLD float ptr [ESP + 0x54]
0074a6e4  FSUB float ptr [ESP + 0x30]
0074a6e8  FXCH
0074a6ea  FSTP float ptr [ESP + 0x2c]
0074a6ee  FSTP float ptr [ESP + 0x30]
0074a6f2  CALL 0x0045f3c0
0074a6f7  FLD float ptr [ESP + 0x2c]
0074a6fb  MOV EAX,dword ptr [ESP + 0x2c]
0074a6ff  FMUL float ptr [0x008b2f84]
0074a705  MOV ECX,dword ptr [ESP + 0x30]
0074a709  MOV dword ptr [ESI + 0x250],EAX
0074a70f  ADD ESP,0x1c
0074a712  FSTP float ptr [ESP + 0x58]
0074a716  MOV EDX,dword ptr [ESP + 0x58]
0074a71a  FLD float ptr [ESP + 0x14]
0074a71e  MOV dword ptr [ESP + 0x18],EDX
0074a722  FMUL float ptr [0x008b2f84]
0074a728  PUSH 0x0
0074a72a  MOV dword ptr [ESI + 0x254],ECX
0074a730  MOV dword ptr [ESI + 0x258],0x0
0074a73a  FSTP float ptr [ESP + 0x60]
0074a73e  MOV EAX,dword ptr [ESP + 0x60]
0074a742  FLD float ptr [ESP + 0x1c]
0074a746  MOV dword ptr [ESP + 0x20],EAX
0074a74a  FADD float ptr [ESP + 0x38]
0074a74e  PUSH 0x3
0074a750  FSTP float ptr [ESP + 0x20]
0074a754  FLD float ptr [ESP + 0x24]
0074a758  FADD float ptr [ESP + 0x40]
0074a75c  FSTP float ptr [ESP + 0x24]
0074a760  LEA ECX,[ESP + 0x20]
0074a764  PUSH ECX
0074a765  MOV ECX,0x9aa540
0074a76a  CALL 0x00727480
0074a76f  TEST EAX,EAX
0074a771  JZ 0x0074a77f
0074a773  CMP EAX,dword ptr [ESI + 0x244]
0074a779  JNZ 0x0074ab15
0074a77f  TEST EDI,EDI
0074a781  MOV dword ptr [ESP + 0x3c],0x0
0074a789  JLE 0x0074ab15
0074a78f  MOV ECX,0x388
0074a794  LEA EDX,[ESI + 0x3880]
0074a79a  MOV dword ptr [ESP + 0x58],ECX
0074a79e  MOV dword ptr [ESP + 0x34],EDX
0074a7a2  JMP 0x0074a7b0
0074a7a4  MOV ECX,dword ptr [ESP + 0x58]
0074a7a8  JMP 0x0074a7b0
0074a7b0  MOV EAX,dword ptr [ESI + 0x29c]
0074a7b6  FLD float ptr [ESI + 0x33f8]
0074a7bc  MOV EDI,dword ptr [ESI + 0x298]
0074a7c2  FLD ST0
0074a7c4  FMUL float ptr [ESI + 0x3480]
0074a7ca  ADD EAX,ECX
0074a7cc  SHL EAX,0x4
0074a7cf  FLD ST1
0074a7d1  FMUL float ptr [ESI + 0x3484]
0074a7d7  ADD EAX,ESI
0074a7d9  MOV dword ptr [ESP + 0x18],EAX
0074a7dd  MOV EAX,dword ptr [ESP + 0x3c]
0074a7e1  ADD EDI,ECX
0074a7e3  FSTP float ptr [ESP + 0xd4]
0074a7ea  XOR EDX,EDX
0074a7ec  FXCH
0074a7ee  FMUL float ptr [ESI + 0x3488]
0074a7f4  MOV ECX,0xa
0074a7f9  DIV ECX
0074a7fb  FSTP float ptr [ESP + 0xd8]
0074a802  MOV ECX,dword ptr [ESP + 0x18]
0074a806  SHL EDI,0x4
0074a809  ADD EDI,ESI
0074a80b  SHL EDX,0x4
0074a80e  FADD float ptr [EDX + ESI*0x1 + 0x36c8]
0074a815  LEA EAX,[EDX + ESI*0x1 + 0x36c8]
0074a81c  FLD float ptr [ESP + 0xd4]
0074a823  FADD float ptr [EAX + 0x4]
0074a826  FLD float ptr [ESP + 0xd8]
0074a82d  FADD float ptr [EAX + 0x8]
0074a830  FSTP float ptr [ESP + 0xf8]
0074a837  FLD float ptr [ESP + 0x80]
0074a83e  FADD float ptr [ECX]
0074a840  FLD float ptr [ESP + 0x84]
0074a847  FADD float ptr [ECX + 0x4]
0074a84a  FSTP float ptr [ESP + 0xb4]
0074a851  FLD float ptr [ESP + 0x88]
0074a858  FADD float ptr [ECX + 0x8]
0074a85b  FSTP float ptr [ESP + 0xb8]
0074a862  FADD ST0,ST2
0074a864  FSTP float ptr [ESP + 0x60]
0074a868  MOV EDX,dword ptr [ESP + 0x60]
0074a86c  FLD float ptr [ESP + 0xb4]
0074a873  MOV dword ptr [EDI],EDX
0074a875  FADD ST0,ST1
0074a877  FSTP float ptr [ESP + 0x64]
0074a87b  MOV EAX,dword ptr [ESP + 0x64]
0074a87f  MOV dword ptr [EDI + 0x4],EAX
0074a882  FSTP ST0
0074a884  FSTP ST0
0074a886  FLD float ptr [ESP + 0xb8]
0074a88d  FADD float ptr [ESP + 0xf8]
0074a894  FSTP float ptr [ESP + 0x68]
0074a898  MOV EDX,dword ptr [ESP + 0x68]
0074a89c  FLD float ptr [ESP + 0x68]
0074a8a0  MOV dword ptr [EDI + 0x8],EDX
0074a8a3  FCOMP float ptr [ESI + 0x3868]
0074a8a9  FNSTSW AX
0074a8ab  TEST AH,0x5
0074a8ae  JNP 0x0074aade
0074a8b4  FLD float ptr [ESP + 0x68]
0074a8b8  FCOMP float ptr [ESI + 0x3838]
0074a8be  FNSTSW AX
0074a8c0  TEST AH,0x41
0074a8c3  JZ 0x0074aade
0074a8c9  FLD float ptr [ECX]
0074a8cb  FSUB float ptr [ESP + 0x60]
0074a8cf  FLD float ptr [ECX + 0x4]
0074a8d2  FSUB float ptr [ESP + 0x64]
0074a8d6  FLD float ptr [ECX + 0x8]
0074a8d9  LEA ECX,[ESP + 0x20]
0074a8dd  FSUB float ptr [ESP + 0x68]
0074a8e1  PUSH ECX
0074a8e2  MOV EDX,ECX
0074a8e4  PUSH EDX
0074a8e5  FSTP float ptr [ESP + 0x150]
0074a8ec  MOV EAX,dword ptr [ESP + 0x150]
0074a8f3  FXCH
0074a8f5  MOV dword ptr [ESP + 0x30],EAX
0074a8f9  FSTP float ptr [ESP + 0x28]
0074a8fd  FSTP float ptr [ESP + 0x2c]
0074a901  CALL 0x0045f490
0074a906  MOV ECX,dword ptr [ESP + 0x80]
0074a90d  LEA EAX,[ESP + 0x28]
0074a911  PUSH EAX
0074a912  PUSH ECX
0074a913  LEA EDX,[ESP + 0x50]
0074a917  PUSH EDX
0074a918  CALL 0x0045f7c0
0074a91d  FLD float ptr [ESI + 0x3420]
0074a923  FADD ST0,ST0
0074a925  ADD ESP,0x14
0074a928  FLD float ptr [ESP + 0x40]
0074a92c  FMUL ST1
0074a92e  FSTP float ptr [ESP + 0x40]
0074a932  FLD float ptr [ESP + 0x44]
0074a936  FMUL ST1
0074a938  FSTP float ptr [ESP + 0x44]
0074a93c  FLD float ptr [ESP + 0x48]
0074a940  FMUL ST1
0074a942  FSTP float ptr [ESP + 0x48]
0074a946  FSTP ST0
0074a948  FLD float ptr [ESI + 0x3690]
0074a94e  FADD float ptr [ESI + 0x3424]
0074a954  FLD float ptr [ESP + 0x20]
0074a958  FMUL ST1
0074a95a  FSTP float ptr [ESP + 0x20]
0074a95e  FLD float ptr [ESP + 0x24]
0074a962  FMUL ST1
0074a964  FSTP float ptr [ESP + 0x24]
0074a968  FLD float ptr [ESP + 0x28]
0074a96c  FMUL ST1
0074a96e  FSTP float ptr [ESP + 0x28]
0074a972  FSTP ST0
0074a974  FLD float ptr [ESP + 0x20]
0074a978  FADD float ptr [ESP + 0x40]
0074a97c  FST float ptr [ESP + 0x90]
0074a983  FLD float ptr [ESP + 0x44]
0074a987  FADD float ptr [ESP + 0x24]
0074a98b  FST float ptr [ESP + 0x94]
0074a992  FLD float ptr [ESP + 0x48]
0074a996  FADD float ptr [ESP + 0x28]
0074a99a  FST float ptr [ESP + 0x18]
0074a99e  FLD float ptr [EDI]
0074a9a0  FSUB float ptr [ESP + 0x90]
0074a9a7  FLD float ptr [EDI + 0x4]
0074a9aa  FSUB float ptr [ESP + 0x94]
0074a9b1  FLD float ptr [EDI + 0x8]
0074a9b4  FSUB ST0,ST3
0074a9b6  FSTP float ptr [ESP + 0x128]
0074a9bd  MOV EAX,dword ptr [ESP + 0x128]
0074a9c4  FXCH
0074a9c6  MOV dword ptr [EBX + 0x8],EAX
0074a9c9  FSTP float ptr [EBX]
0074a9cb  FSTP float ptr [EBX + 0x4]
0074a9ce  FSTP ST0
0074a9d0  FLD float ptr [ESP + 0x40]
0074a9d4  FSUB float ptr [ESP + 0x20]
0074a9d8  FLD float ptr [ESP + 0x44]
0074a9dc  FSUB float ptr [ESP + 0x24]
0074a9e0  FSTP float ptr [ESP + 0xa4]
0074a9e7  FLD float ptr [ESP + 0x48]
0074a9eb  FSUB float ptr [ESP + 0x28]
0074a9ef  FSTP float ptr [ESP + 0xa8]
0074a9f6  FADD float ptr [EDI]
0074a9f8  FLD float ptr [ESP + 0xa4]
0074a9ff  PUSH 0x3f000000
0074aa04  FADD float ptr [EDI + 0x4]
0074aa07  PUSH 0x0
0074aa09  FLD float ptr [ESP + 0xb0]
0074aa10  PUSH 0x987ab0
0074aa15  FADD float ptr [EDI + 0x8]
0074aa18  FSTP float ptr [ESP + 0x114]
0074aa1f  MOV ECX,dword ptr [ESP + 0x114]
0074aa26  FXCH
0074aa28  MOV dword ptr [EBX + 0x18],ECX
0074aa2b  FSTP float ptr [EBX + 0x10]
0074aa2e  FSTP float ptr [EBX + 0x14]
0074aa31  FLD float ptr [ESP + 0x2c]
0074aa35  FSUB float ptr [ESP + 0x4c]
0074aa39  FLD float ptr [ESP + 0x30]
0074aa3d  FSUB float ptr [ESP + 0x50]
0074aa41  FSTP float ptr [ESP + 0xd0]
0074aa48  FLD float ptr [ESP + 0x34]
0074aa4c  FSUB float ptr [ESP + 0x54]
0074aa50  FSTP float ptr [ESP + 0xd4]
0074aa57  FADD float ptr [EDI]
0074aa59  FLD float ptr [ESP + 0xd0]
0074aa60  FADD float ptr [EDI + 0x4]
0074aa63  FLD float ptr [ESP + 0xd4]
0074aa6a  FADD float ptr [EDI + 0x8]
0074aa6d  FSTP float ptr [ESP + 0x124]
0074aa74  MOV EDX,dword ptr [ESP + 0x124]
0074aa7b  FXCH
0074aa7d  MOV dword ptr [EBX + 0x38],EDX
0074aa80  FSTP float ptr [EBX + 0x30]
0074aa83  FSTP float ptr [EBX + 0x34]
0074aa86  FXCH
0074aa88  FSTP float ptr [ESP + 0xec]
0074aa8f  FSTP float ptr [ESP + 0xf0]
0074aa96  FLD float ptr [ESP + 0x24]
0074aa9a  FLD float ptr [ESP + 0xec]
0074aaa1  FADD float ptr [EDI]
0074aaa3  FLD float ptr [ESP + 0xf0]
0074aaaa  FADD float ptr [EDI + 0x4]
0074aaad  FXCH ST2
0074aaaf  FADD float ptr [EDI + 0x8]
0074aab2  FSTP float ptr [ESP + 0x144]
0074aab9  MOV EAX,dword ptr [ESP + 0x144]
0074aac0  MOV dword ptr [EBX + 0x28],EAX
0074aac3  FSTP float ptr [EBX + 0x20]
0074aac6  FSTP float ptr [EBX + 0x24]
0074aac9  MOV ECX,dword ptr [ESI + 0x3404]
0074aacf  PUSH ECX
0074aad0  MOV ECX,dword ptr [ESI + 0x288]
0074aad6  PUSH EBX
0074aad7  CALL 0x006be750
0074aadc  JMP 0x0074aaea
0074aade  MOV EDX,dword ptr [ESP + 0x34]
0074aae2  PUSH EDX
0074aae3  MOV ECX,ESI
0074aae5  CALL 0x0074a490
0074aaea  MOV EAX,dword ptr [ESP + 0x3c]
0074aaee  MOV EDI,dword ptr [ESP + 0x58]
0074aaf2  MOV EDX,dword ptr [ESP + 0x34]
0074aaf6  MOV ECX,dword ptr [ESP + 0x7c]
0074aafa  INC EAX
0074aafb  ADD EDI,0x2
0074aafe  ADD EDX,0x20
0074ab01  CMP EAX,ECX
0074ab03  MOV dword ptr [ESP + 0x3c],EAX
0074ab07  MOV dword ptr [ESP + 0x58],EDI
0074ab0b  MOV dword ptr [ESP + 0x34],EDX
0074ab0f  JL 0x0074a7a4
0074ab15  POP EDI
0074ab16  POP ESI
0074ab17  POP EBX
0074ab18  MOV ESP,EBP
0074ab1a  POP EBP
0074ab1b  RET
