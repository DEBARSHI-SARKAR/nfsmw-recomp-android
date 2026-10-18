007cdcd0  PUSH EBP
007cdcd1  MOV EBP,ESP
007cdcd3  SUB ESP,0x8
007cdcd6  MOVSX EAX,byte ptr [EBP + 0x18]
007cdcda  TEST EAX,EAX
007cdcdc  JZ 0x007cdd05
007cdcde  MOV ECX,dword ptr [EBP + 0x14]
007cdce1  XOR EDX,EDX
007cdce3  CMP dword ptr [ECX],0x2d
007cdce6  SETZ DL
007cdce9  ADD EDX,dword ptr [EBP + 0x8]
007cdcec  MOV dword ptr [EBP + -0x4],EDX
007cdcef  XOR EAX,EAX
007cdcf1  CMP dword ptr [EBP + 0xc],0x0
007cdcf5  SETG AL
007cdcf8  PUSH EAX
007cdcf9  MOV ECX,dword ptr [EBP + -0x4]
007cdcfc  PUSH ECX
007cdcfd  CALL 0x007ce160
007cdd02  ADD ESP,0x8
007cdd05  MOV EDX,dword ptr [EBP + 0x8]
007cdd08  MOV dword ptr [EBP + -0x4],EDX
007cdd0b  MOV EAX,dword ptr [EBP + 0x14]
007cdd0e  CMP dword ptr [EAX],0x2d
007cdd11  JNZ 0x007cdd22
007cdd13  MOV ECX,dword ptr [EBP + -0x4]
007cdd16  MOV byte ptr [ECX],0x2d
007cdd19  MOV EDX,dword ptr [EBP + -0x4]
007cdd1c  ADD EDX,0x1
007cdd1f  MOV dword ptr [EBP + -0x4],EDX
007cdd22  CMP dword ptr [EBP + 0xc],0x0
007cdd26  JLE 0x007cdd47
007cdd28  MOV EAX,dword ptr [EBP + -0x4]
007cdd2b  MOV ECX,dword ptr [EBP + -0x4]
007cdd2e  MOV DL,byte ptr [ECX + 0x1]
007cdd31  MOV byte ptr [EAX],DL
007cdd33  MOV EAX,dword ptr [EBP + -0x4]
007cdd36  ADD EAX,0x1
007cdd39  MOV dword ptr [EBP + -0x4],EAX
007cdd3c  MOV ECX,dword ptr [EBP + -0x4]
007cdd3f  MOV DL,byte ptr [0x0090725c]
007cdd45  MOV byte ptr [ECX],DL
007cdd47  PUSH 0x8b91c0
007cdd4c  MOV EAX,dword ptr [EBP + -0x4]
007cdd4f  ADD EAX,dword ptr [EBP + 0xc]
007cdd52  MOVSX ECX,byte ptr [EBP + 0x18]
007cdd56  NEG ECX
007cdd58  SBB ECX,ECX
007cdd5a  INC ECX
007cdd5b  ADD EAX,ECX
007cdd5d  PUSH EAX
007cdd5e  CALL 0x007d0bd0
007cdd63  ADD ESP,0x8
007cdd66  MOV dword ptr [EBP + -0x4],EAX
007cdd69  CMP dword ptr [EBP + 0x10],0x0
007cdd6d  JZ 0x007cdd75
007cdd6f  MOV EDX,dword ptr [EBP + -0x4]
007cdd72  MOV byte ptr [EDX],0x45
007cdd75  MOV EAX,dword ptr [EBP + -0x4]
007cdd78  ADD EAX,0x1
007cdd7b  MOV dword ptr [EBP + -0x4],EAX
007cdd7e  MOV ECX,dword ptr [EBP + 0x14]
007cdd81  MOV EDX,dword ptr [ECX + 0xc]
007cdd84  MOVSX EAX,byte ptr [EDX]
007cdd87  CMP EAX,0x30
007cdd8a  JZ 0x007cde36
007cdd90  MOV ECX,dword ptr [EBP + 0x14]
007cdd93  MOV EDX,dword ptr [ECX + 0x4]
007cdd96  SUB EDX,0x1
007cdd99  MOV dword ptr [EBP + -0x8],EDX
007cdd9c  JNS 0x007cddac
007cdd9e  MOV EAX,dword ptr [EBP + -0x8]
007cdda1  NEG EAX
007cdda3  MOV dword ptr [EBP + -0x8],EAX
007cdda6  MOV ECX,dword ptr [EBP + -0x4]
007cdda9  MOV byte ptr [ECX],0x2d
007cddac  MOV EDX,dword ptr [EBP + -0x4]
007cddaf  ADD EDX,0x1
007cddb2  MOV dword ptr [EBP + -0x4],EDX
007cddb5  CMP dword ptr [EBP + -0x8],0x64
007cddb9  JL 0x007cdde4
007cddbb  MOV EAX,dword ptr [EBP + -0x8]
007cddbe  CDQ
007cddbf  MOV ECX,0x64
007cddc4  IDIV ECX
007cddc6  MOVSX EDX,AL
007cddc9  MOV EAX,dword ptr [EBP + -0x4]
007cddcc  MOVSX ECX,byte ptr [EAX]
007cddcf  ADD ECX,EDX
007cddd1  MOV EDX,dword ptr [EBP + -0x4]
007cddd4  MOV byte ptr [EDX],CL
007cddd6  MOV EAX,dword ptr [EBP + -0x8]
007cddd9  CDQ
007cddda  MOV ECX,0x64
007cdddf  IDIV ECX
007cdde1  MOV dword ptr [EBP + -0x8],EDX
007cdde4  MOV EDX,dword ptr [EBP + -0x4]
007cdde7  ADD EDX,0x1
007cddea  MOV dword ptr [EBP + -0x4],EDX
007cdded  CMP dword ptr [EBP + -0x8],0xa
007cddf1  JL 0x007cde1c
007cddf3  MOV EAX,dword ptr [EBP + -0x8]
007cddf6  CDQ
007cddf7  MOV ECX,0xa
007cddfc  IDIV ECX
007cddfe  MOVSX EDX,AL
007cde01  MOV EAX,dword ptr [EBP + -0x4]
007cde04  MOVSX ECX,byte ptr [EAX]
007cde07  ADD ECX,EDX
007cde09  MOV EDX,dword ptr [EBP + -0x4]
007cde0c  MOV byte ptr [EDX],CL
007cde0e  MOV EAX,dword ptr [EBP + -0x8]
007cde11  CDQ
007cde12  MOV ECX,0xa
007cde17  IDIV ECX
007cde19  MOV dword ptr [EBP + -0x8],EDX
007cde1c  MOV EDX,dword ptr [EBP + -0x4]
007cde1f  ADD EDX,0x1
007cde22  MOV dword ptr [EBP + -0x4],EDX
007cde25  MOVSX EAX,byte ptr [EBP + -0x8]
007cde29  MOV ECX,dword ptr [EBP + -0x4]
007cde2c  MOVSX EDX,byte ptr [ECX]
007cde2f  ADD EDX,EAX
007cde31  MOV EAX,dword ptr [EBP + -0x4]
007cde34  MOV byte ptr [EAX],DL
007cde36  MOV EAX,dword ptr [EBP + 0x8]
007cde39  MOV ESP,EBP
007cde3b  POP EBP
007cde3c  RET
