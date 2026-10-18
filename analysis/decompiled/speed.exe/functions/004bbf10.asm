004bbf10  PUSH ECX
004bbf11  PUSH ESI
004bbf12  MOV ESI,ECX
004bbf14  MOV EAX,dword ptr [ESI + 0x28]
004bbf17  MOV ECX,dword ptr [EAX + 0x30]
004bbf1a  CMP dword ptr [ECX + 0x8c],0x1
004bbf21  JZ 0x004bc0ae
004bbf27  PUSH EBX
004bbf28  XOR EBX,EBX
004bbf2a  MOV dword ptr [ESI + 0x148],EBX
004bbf30  MOV dword ptr [ESI + 0x40],EBX
004bbf33  MOV dword ptr [ESI + 0x44],EBX
004bbf36  MOV dword ptr [ESI + 0x48],EBX
004bbf39  MOV dword ptr [ESI + 0x4c],EBX
004bbf3c  MOV dword ptr [ESI + 0x50],EBX
004bbf3f  MOV dword ptr [ESI + 0x54],EBX
004bbf42  MOV ECX,0x4
004bbf47  MOV dword ptr [ESI + 0x38],ECX
004bbf4a  MOV dword ptr [ESI + 0x3c],ECX
004bbf4d  FLD float ptr [EAX + 0x11c]
004bbf53  FST float ptr [ESI + 0x68]
004bbf56  MOV EDX,dword ptr [EAX + 0x118]
004bbf5c  FST float ptr [EAX + 0x118]
004bbf62  MOV dword ptr [EAX + 0x11c],EDX
004bbf68  FLD float ptr [EAX + 0x120]
004bbf6e  FMUL float ptr [0x00896b58]
004bbf74  FXCH
004bbf76  FMUL float ptr [0x00890ea8]
004bbf7c  FADDP
004bbf7e  FSTP float ptr [EAX + 0x120]
004bbf84  MOV EAX,[0x009142dc]
004bbf89  MOV ECX,dword ptr [ESI + 0x28]
004bbf8c  MOV dword ptr [ESI + 0x64],EAX
004bbf8f  MOV ECX,dword ptr [ECX + 0x30]
004bbf92  MOV EDX,dword ptr [ECX]
004bbf94  CALL dword ptr [EDX + 0x34]
004bbf97  FST float ptr [ESI + 0x74]
004bbf9a  FSTP float ptr [ESI + 0x80]
004bbfa0  MOV dword ptr [ESI + 0x70],0x3d4ccccd
004bbfa7  MOV dword ptr [ESI + 0x78],EBX
004bbfaa  MOV dword ptr [ESI + 0x7c],EBX
004bbfad  MOV byte ptr [ESI + 0x84],BL
004bbfb3  MOV dword ptr [ESI + 0x6c],EBX
004bbfb6  MOV EAX,dword ptr [ESI + 0x34]
004bbfb9  MOV ECX,dword ptr [EAX + 0x8]
004bbfbc  MOV EDX,dword ptr [ECX + 0x44]
004bbfbf  FILD dword ptr [ECX + 0x44]
004bbfc2  TEST EDX,EDX
004bbfc4  JGE 0x004bbfcc
004bbfc6  FADD float ptr [0x00891214]
004bbfcc  FSUBR float ptr [ESI + 0x68]
004bbfcf  FST float ptr [ESP + 0x8]
004bbfd3  FCOMP float ptr [0x00896480]
004bbfd9  FNSTSW AX
004bbfdb  TEST AH,0x41
004bbfde  JNZ 0x004bc0b1
004bbfe4  FLD float ptr [ESP + 0x8]
004bbfe8  FLD float ptr [0x00896d28]
004bbfee  FCOMP float ptr [ESP + 0x8]
004bbff2  FNSTSW AX
004bbff4  TEST AH,0x5
004bbff7  JP 0x004bc001
004bbff9  FSTP ST0
004bbffb  FLD float ptr [0x00896d28]
004bc001  FLD float ptr [ESI + 0x68]
004bc004  FILD dword ptr [ECX + 0x3c]
004bc007  FMUL float ptr [0x00890d60]
004bc00d  FST float ptr [ESI + 0x8c]
004bc013  FCOMP float ptr [0x00890968]
004bc019  FNSTSW AX
004bc01b  TEST AH,0x41
004bc01e  JP 0x004bc02a
004bc020  MOV dword ptr [ESI + 0x8c],0x3c23d70a
004bc02a  MOV dword ptr [ESI + 0x98],EBX
004bc030  FXCH
004bc032  FSTP float ptr [ESI + 0x94]
004bc038  MOV byte ptr [ESI + 0xa0],BL
004bc03e  MOV dword ptr [ESI + 0x88],EBX
004bc044  FST float ptr [ESI + 0x90]
004bc04a  FSTP float ptr [ESI + 0x9c]
004bc050  MOV dword ptr [ESI + 0xa8],0x3a83126f
004bc05a  MOV dword ptr [ESI + 0xb0],EBX
004bc060  MOV dword ptr [ESI + 0xac],EBX
004bc066  MOV dword ptr [ESI + 0xb4],EBX
004bc06c  MOV byte ptr [ESI + 0xbc],BL
004bc072  MOV dword ptr [ESI + 0xb8],EBX
004bc078  MOV dword ptr [ESI + 0xa4],EBX
004bc07e  FLD float ptr [0x009142dc]
004bc084  MOV EAX,dword ptr [ESI + 0x34]
004bc087  MOV ECX,dword ptr [EAX + 0x8]
004bc08a  FADD float ptr [ECX + 0x10]
004bc08d  MOV EDX,dword ptr [ESI + 0x28]
004bc090  FSTP float ptr [ESI + 0x60]
004bc093  MOV EAX,dword ptr [EDX + 0x30]
004bc096  FLD float ptr [EAX + 0x2c]
004bc099  FCOMP float ptr [0x00894b60]
004bc09f  FNSTSW AX
004bc0a1  TEST AH,0x41
004bc0a4  JNZ 0x004bc0aa
004bc0a6  MOV byte ptr [ESI + 0x58],0x1
004bc0aa  MOV dword ptr [ESI + 0x5c],EBX
004bc0ad  POP EBX
004bc0ae  POP ESI
004bc0af  POP ECX
004bc0b0  RET
004bc0b1  FLD float ptr [0x00896480]
004bc0b7  JMP 0x004bc001
