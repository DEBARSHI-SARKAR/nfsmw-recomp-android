004fcb60  MOV EDX,dword ptr [ESP + 0x4]
004fcb64  FLD float ptr [EDX]
004fcb66  PUSH ESI
004fcb67  MOV ESI,dword ptr [ESP + 0xc]
004fcb6b  FSUB float ptr [ESI]
004fcb6d  MOV EAX,dword ptr [ECX + 0x40]
004fcb70  FLD float ptr [EDX + 0x4]
004fcb73  FSUB float ptr [ESI + 0x4]
004fcb76  FLD float ptr [EDX + 0x8]
004fcb79  FSUB float ptr [ESI + 0x8]
004fcb7c  FLD ST0
004fcb7e  FMUL ST1
004fcb80  FLD ST2
004fcb82  FMUL ST3
004fcb84  FADDP
004fcb86  FLD ST3
004fcb88  FMUL ST4
004fcb8a  FADDP
004fcb8c  FSQRT
004fcb8e  FSTP ST3
004fcb90  FSTP ST0
004fcb92  FSTP ST0
004fcb94  FMUL float ptr [0x008933d4]
004fcb9a  FSTP float ptr [ESP + 0x8]
004fcb9e  FLD float ptr [EDX]
004fcba0  FADD float ptr [ESI]
004fcba2  FMUL float ptr [0x008933d4]
004fcba8  FSUB float ptr [EAX + 0x40]
004fcbab  FLD float ptr [EDX + 0x4]
004fcbae  FADD float ptr [ESI + 0x4]
004fcbb1  FMUL float ptr [0x008933d4]
004fcbb7  FSUB float ptr [EAX + 0x44]
004fcbba  FLD float ptr [EDX + 0x8]
004fcbbd  FADD float ptr [ESI + 0x8]
004fcbc0  POP ESI
004fcbc1  FMUL float ptr [0x008933d4]
004fcbc7  FSUB float ptr [EAX + 0x48]
004fcbca  FLD ST0
004fcbcc  FMUL float ptr [EAX + 0x58]
004fcbcf  FLD ST2
004fcbd1  FMUL float ptr [EAX + 0x54]
004fcbd4  FADDP
004fcbd6  FLD ST3
004fcbd8  FMUL float ptr [EAX + 0x50]
004fcbdb  FADDP
004fcbdd  FLD float ptr [ESP + 0x4]
004fcbe1  FCHS
004fcbe3  FCOMPP
004fcbe5  FNSTSW AX
004fcbe7  TEST AH,0x41
004fcbea  JNZ 0x004fcbf7
004fcbec  FSTP ST0
004fcbee  XOR EAX,EAX
004fcbf0  FSTP ST0
004fcbf2  FSTP ST0
004fcbf4  RET 0x8
004fcbf7  FLD ST0
004fcbf9  FMUL ST1
004fcbfb  FLD ST2
004fcbfd  FMUL ST3
004fcbff  FADDP
004fcc01  FLD ST3
004fcc03  FMUL ST4
004fcc05  FADDP
004fcc07  FSQRT
004fcc09  FSTP ST3
004fcc0b  FSTP ST0
004fcc0d  FSTP ST0
004fcc0f  FSUB float ptr [ESP + 0x4]
004fcc13  FSTP float ptr [ESP + 0x8]
004fcc17  FLD float ptr [ECX + 0xc]
004fcc1a  FLD float ptr [ESP + 0x8]
004fcc1e  FCOMP float ptr [ESP + 0x4]
004fcc22  FNSTSW AX
004fcc24  TEST AH,0x41
004fcc27  JNZ 0x004fcc36
004fcc29  FSTP ST0
004fcc2b  FLD float ptr [ECX + 0xc]
004fcc2e  FDIV float ptr [ESP + 0x8]
004fcc32  FMUL float ptr [ESP + 0x4]
004fcc36  CALL 0x007c4b80
004fcc3b  RET 0x8
