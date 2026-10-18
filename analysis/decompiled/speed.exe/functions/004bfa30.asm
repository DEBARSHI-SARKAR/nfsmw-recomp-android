004bfa30  PUSH EBP
004bfa31  MOV EBP,ESP
004bfa33  AND ESP,0xfffffff0
004bfa36  SUB ESP,0x34
004bfa39  PUSH EBX
004bfa3a  PUSH ESI
004bfa3b  MOV ESI,ECX
004bfa3d  MOV EAX,dword ptr [ESI + 0x28]
004bfa40  TEST EAX,EAX
004bfa42  PUSH EDI
004bfa43  JZ 0x004bfb7a
004bfa49  CMP byte ptr [EAX + 0x94],0x1
004bfa50  JNZ 0x004bfb7a
004bfa56  FLD float ptr [EAX + 0x34]
004bfa59  LEA EDI,[ESI + 0x30]
004bfa5c  FLD float ptr [EAX + 0x38]
004bfa5f  MOV EAX,dword ptr [EAX + 0x30]
004bfa62  MOV dword ptr [EDI],EAX
004bfa64  FXCH
004bfa66  FSTP float ptr [EDI + 0x4]
004bfa69  FSTP float ptr [EDI + 0x8]
004bfa6c  MOV EAX,dword ptr [ESI + 0x28]
004bfa6f  FLD float ptr [EAX + 0x4]
004bfa72  MOV ECX,dword ptr [EAX]
004bfa74  FLD float ptr [EAX + 0x8]
004bfa77  MOV dword ptr [ESI + 0x40],ECX
004bfa7a  FXCH
004bfa7c  FSTP float ptr [ESI + 0x44]
004bfa7f  FSTP float ptr [ESI + 0x48]
004bfa82  MOV EAX,dword ptr [ESI + 0x28]
004bfa85  FLD float ptr [EAX + 0x44]
004bfa88  MOV EDX,dword ptr [EAX + 0x40]
004bfa8b  FLD float ptr [EAX + 0x48]
004bfa8e  ADD EAX,0x40
004bfa91  LEA EAX,[ESP + 0xc]
004bfa95  FXCH
004bfa97  PUSH EAX
004bfa98  FSTP float ptr [ESI + 0x54]
004bfa9b  PUSH 0x0
004bfa9d  PUSH EDI
004bfa9e  FSTP float ptr [ESI + 0x58]
004bfaa1  MOV dword ptr [ESI + 0x50],EDX
004bfaa4  CALL 0x004b0790
004bfaa9  ADD ESP,0xc
004bfaac  TEST EAX,EAX
004bfaae  JZ 0x004bfb7a
004bfab4  LEA EBX,[EAX + 0x40]
004bfab7  PUSH EBX
004bfab8  PUSH EDI
004bfab9  CALL 0x0045f340
004bfabe  FSTP float ptr [ESI + 0x64]
004bfac1  MOV ECX,dword ptr [ESI + 0x28]
004bfac4  FLD float ptr [ECX + 0x70]
004bfac7  ADD ESP,0x8
004bfaca  FMUL float ptr [0x00897188]
004bfad0  FCOM float ptr [0x0089096c]
004bfad6  FST float ptr [ESI + 0x60]
004bfad9  FNSTSW AX
004bfadb  TEST AH,0x41
004bfade  JNZ 0x004bfaeb
004bfae0  FSTP ST0
004bfae2  MOV dword ptr [ESI + 0x60],0x3f800000
004bfae9  JMP 0x004bfaff
004bfaeb  FCOMP float ptr [0x008910f0]
004bfaf1  FNSTSW AX
004bfaf3  TEST AH,0x5
004bfaf6  JP 0x004bfaff
004bfaf8  MOV dword ptr [ESI + 0x60],0x3f000000
004bfaff  FLD float ptr [ESI + 0x60]
004bfb02  LEA EAX,[ESP + 0x10]
004bfb06  FMUL float ptr [0x00897184]
004bfb0c  PUSH EAX
004bfb0d  LEA ECX,[ESP + 0x24]
004bfb11  PUSH ECX
004bfb12  FSTP float ptr [ESI + 0x60]
004bfb15  MOV EDX,dword ptr [EBX + 0x8]
004bfb18  FLD float ptr [EBX]
004bfb1a  MOV dword ptr [ESP + 0x40],EDX
004bfb1e  FLD float ptr [EBX + 0x4]
004bfb21  FXCH
004bfb23  FSUB float ptr [EDI]
004bfb25  FSTP float ptr [ESP + 0x18]
004bfb29  FSUB float ptr [EDI + 0x4]
004bfb2c  FSTP float ptr [ESP + 0x1c]
004bfb30  FLD float ptr [ESP + 0x40]
004bfb34  FSUB float ptr [EDI + 0x8]
004bfb37  FSTP float ptr [ESP + 0x20]
004bfb3b  CALL 0x0045f490
004bfb40  FLD float ptr [ESP + 0x2c]
004bfb44  FMUL float ptr [ESI + 0x44]
004bfb47  FLD float ptr [ESP + 0x30]
004bfb4b  FMUL float ptr [ESI + 0x48]
004bfb4e  FADDP
004bfb50  FLD float ptr [ESP + 0x28]
004bfb54  FMUL float ptr [ESI + 0x40]
004bfb57  FADDP
004bfb59  FSTP float ptr [ESP + 0x14]
004bfb5d  MOV EDX,dword ptr [ESP + 0x14]
004bfb61  PUSH EDX
004bfb62  CALL 0x0045dd10
004bfb67  MOV ECX,0x4000
004bfb6c  ADD ESP,0xc
004bfb6f  SUB ECX,EAX
004bfb71  MOVZX EDX,CX
004bfb74  SHR EDX,0x6
004bfb77  MOV dword ptr [ESI + 0x68],EDX
004bfb7a  POP EDI
004bfb7b  POP ESI
004bfb7c  POP EBX
004bfb7d  MOV ESP,EBP
004bfb7f  POP EBP
004bfb80  RET 0x4
