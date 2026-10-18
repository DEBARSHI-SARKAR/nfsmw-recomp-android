004bcf70  PUSH ESI
004bcf71  MOV ESI,ECX
004bcf73  MOV ECX,dword ptr [ESI + 0x18]
004bcf76  CALL 0x004d5bd0
004bcf7b  FCOMP float ptr [0x0089654c]
004bcf81  FNSTSW AX
004bcf83  TEST AH,0x41
004bcf86  JNZ 0x004bcf8c
004bcf88  XOR AL,AL
004bcf8a  POP ESI
004bcf8b  RET
004bcf8c  MOV EAX,dword ptr [ESI + 0x28]
004bcf8f  MOV ECX,dword ptr [EAX + 0x30]
004bcf92  PUSH EDI
004bcf93  MOV EDI,dword ptr [ESI + 0x18]
004bcf96  FLD float ptr [EDI + 0x70]
004bcf99  FSUB float ptr [ECX + 0x4c]
004bcf9c  FCOMP float ptr [0x00896484]
004bcfa2  FNSTSW AX
004bcfa4  TEST AH,0x5
004bcfa7  JP 0x004bcfae
004bcfa9  POP EDI
004bcfaa  XOR AL,AL
004bcfac  POP ESI
004bcfad  RET
004bcfae  MOV EDX,dword ptr [EDI + 0x5c]
004bcfb1  MOV AL,byte ptr [EDX + 0xb4]
004bcfb7  TEST AL,AL
004bcfb9  JNZ 0x004bcfa9
004bcfbb  MOV EAX,dword ptr [ESI + 0x84]
004bcfc1  TEST EAX,EAX
004bcfc3  JNZ 0x004bcfa9
004bcfc5  MOV ECX,dword ptr [ESI + 0x2c]
004bcfc8  TEST ECX,ECX
004bcfca  JZ 0x004bcfd5
004bcfcc  CALL 0x004b3470
004bcfd1  TEST AL,AL
004bcfd3  JNZ 0x004bcfa9
004bcfd5  CMP dword ptr [EDI + 0x6c],0x2
004bcfd9  JNZ 0x004bcfa9
004bcfdb  FLD float ptr [EDI + 0x64]
004bcfde  FCOMP float ptr [0x00896548]
004bcfe4  FNSTSW AX
004bcfe6  TEST AH,0x41
004bcfe9  JZ 0x004bcfa9
004bcfeb  MOV ECX,dword ptr [0x009885c8]
004bcff1  TEST ECX,ECX
004bcff3  JZ 0x004bcffe
004bcff5  MOV EAX,dword ptr [ECX]
004bcff7  CALL dword ptr [EAX + 0x3c]
004bcffa  TEST AL,AL
004bcffc  JNZ 0x004bcfa9
004bcffe  POP EDI
004bcfff  MOV AL,0x1
004bd001  POP ESI
004bd002  RET
