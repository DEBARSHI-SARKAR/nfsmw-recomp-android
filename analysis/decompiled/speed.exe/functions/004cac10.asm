004cac10  PUSH ECX
004cac11  PUSH EBX
004cac12  PUSH ESI
004cac13  MOV ESI,ECX
004cac15  MOV ECX,dword ptr [ESP + 0x10]
004cac19  MOV EAX,dword ptr [ESI + 0xc]
004cac1c  MOV EBX,dword ptr [ESI + 0x18]
004cac1f  PUSH EDI
004cac20  MOV EDI,dword ptr [ESI + 0x14]
004cac23  IMUL EDI,dword ptr [ECX + 0x4]
004cac27  SAR EDI,0xf
004cac2a  TEST EAX,EAX
004cac2c  JZ 0x004cacff
004cac32  MOV EDX,dword ptr [ESI + 0x4]
004cac35  MOVZX EDX,word ptr [EDX + 0x8]
004cac39  MOV ECX,dword ptr [ECX + 0xc]
004cac3c  LEA ECX,[EDX + ECX*0x1 + 0x10000]
004cac43  AND ECX,0x8000ffff
004cac49  JNS 0x004cac59
004cac4b  DEC ECX
004cac4c  OR ECX,0xffff0000
004cac52  INC ECX
004cac53  JNS 0x004cac59
004cac55  XOR ECX,ECX
004cac57  JMP 0x004cac66
004cac59  CMP ECX,0x10000
004cac5f  JLE 0x004cac66
004cac61  MOV ECX,0x10000
004cac66  TEST EDI,EDI
004cac68  MOV dword ptr [EAX + 0x14],ECX
004cac6b  MOV ECX,dword ptr [ESI + 0xc]
004cac6e  MOV EAX,EDI
004cac70  JGE 0x004cac76
004cac72  XOR EAX,EAX
004cac74  JMP 0x004cac83
004cac76  CMP EDI,0x7fff
004cac7c  JLE 0x004cac83
004cac7e  MOV EAX,0x7fff
004cac83  TEST EBX,EBX
004cac85  MOV dword ptr [ECX + 0xc],EAX
004cac88  MOV ECX,dword ptr [ESI + 0xc]
004cac8b  MOV EAX,EBX
004cac8d  JGE 0x004cac93
004cac8f  XOR EAX,EAX
004cac91  JMP 0x004caca0
004cac93  CMP EBX,0x2000
004cac99  JLE 0x004caca0
004cac9b  MOV EAX,0x2000
004caca0  MOV EDX,dword ptr [ESP + 0x14]
004caca4  MOV dword ptr [ECX + 0x10],EAX
004caca7  MOV EAX,dword ptr [EDX + 0x14]
004cacaa  TEST EAX,EAX
004cacac  MOV ECX,dword ptr [ESI + 0xc]
004cacaf  JGE 0x004cacb5
004cacb1  XOR EAX,EAX
004cacb3  JMP 0x004cacc1
004cacb5  CMP EAX,0x7fff
004cacba  JLE 0x004cacc1
004cacbc  MOV EAX,0x7fff
004cacc1  MOV dword ptr [ECX + 0x20],EAX
004cacc4  MOV EAX,dword ptr [ESI + 0xc]
004cacc7  MOV ECX,dword ptr [EAX]
004cacc9  TEST ECX,ECX
004caccb  JZ 0x004cacd6
004caccd  ADD EAX,0x4
004cacd0  PUSH EAX
004cacd1  CALL 0x0083179c
004cacd6  MOV EAX,dword ptr [ESI + 0xc]
004cacd9  MOV ECX,dword ptr [EAX]
004cacdb  TEST ECX,ECX
004cacdd  MOV dword ptr [ESP + 0xc],0x0
004cace5  JZ 0x004cacf8
004cace7  LEA EAX,[ESP + 0xc]
004caceb  PUSH EAX
004cacec  CALL 0x008311aa
004cacf1  CMP dword ptr [ESP + 0xc],0x1
004cacf6  JG 0x004cacff
004cacf8  MOV ECX,ESI
004cacfa  CALL 0x004cab80
004cacff  MOV ECX,dword ptr [ESI + 0x8]
004cad02  TEST ECX,ECX
004cad04  JZ 0x004cadd8
004cad0a  MOV EDX,dword ptr [ESI + 0x4]
004cad0d  MOVZX EAX,word ptr [EDX + 0x8]
004cad11  MOV EDX,dword ptr [ESP + 0x14]
004cad15  MOV EDX,dword ptr [EDX + 0xc]
004cad18  LEA EAX,[EAX + EDX*0x1 + 0x10000]
004cad1f  AND EAX,0x8000ffff
004cad24  JNS 0x004cad33
004cad26  DEC EAX
004cad27  OR EAX,0xffff0000
004cad2c  INC EAX
004cad2d  JNS 0x004cad33
004cad2f  XOR EAX,EAX
004cad31  JMP 0x004cad3f
004cad33  CMP EAX,0x10000
004cad38  JLE 0x004cad3f
004cad3a  MOV EAX,0x10000
004cad3f  TEST EDI,EDI
004cad41  MOV dword ptr [ECX + 0x14],EAX
004cad44  MOV ECX,dword ptr [ESI + 0x8]
004cad47  MOV EAX,EDI
004cad49  JGE 0x004cad4f
004cad4b  XOR EAX,EAX
004cad4d  JMP 0x004cad5c
004cad4f  CMP EDI,0x7fff
004cad55  JLE 0x004cad5c
004cad57  MOV EAX,0x7fff
004cad5c  TEST EBX,EBX
004cad5e  MOV dword ptr [ECX + 0xc],EAX
004cad61  MOV ECX,dword ptr [ESI + 0x8]
004cad64  MOV EAX,EBX
004cad66  JGE 0x004cad6c
004cad68  XOR EAX,EAX
004cad6a  JMP 0x004cad79
004cad6c  CMP EBX,0x2000
004cad72  JLE 0x004cad79
004cad74  MOV EAX,0x2000
004cad79  MOV dword ptr [ECX + 0x10],EAX
004cad7c  MOV EAX,dword ptr [ESP + 0x14]
004cad80  MOV EAX,dword ptr [EAX + 0x14]
004cad83  TEST EAX,EAX
004cad85  MOV ECX,dword ptr [ESI + 0x8]
004cad88  JGE 0x004cad8e
004cad8a  XOR EAX,EAX
004cad8c  JMP 0x004cad9a
004cad8e  CMP EAX,0x7fff
004cad93  JLE 0x004cad9a
004cad95  MOV EAX,0x7fff
004cad9a  MOV dword ptr [ECX + 0x20],EAX
004cad9d  MOV EAX,dword ptr [ESI + 0x8]
004cada0  MOV ECX,dword ptr [EAX]
004cada2  TEST ECX,ECX
004cada4  JZ 0x004cadaf
004cada6  ADD EAX,0x4
004cada9  PUSH EAX
004cadaa  CALL 0x0083179c
004cadaf  MOV EAX,dword ptr [ESI + 0x8]
004cadb2  MOV ECX,dword ptr [EAX]
004cadb4  TEST ECX,ECX
004cadb6  MOV dword ptr [ESP + 0xc],0x0
004cadbe  JZ 0x004cadd1
004cadc0  LEA EDX,[ESP + 0xc]
004cadc4  PUSH EDX
004cadc5  CALL 0x008311aa
004cadca  CMP dword ptr [ESP + 0xc],0x1
004cadcf  JG 0x004cadd8
004cadd1  MOV ECX,ESI
004cadd3  CALL 0x004cab80
004cadd8  MOV ECX,dword ptr [ESI + 0x10]
004caddb  TEST ECX,ECX
004caddd  JZ 0x004caeb1
004cade3  MOV EAX,dword ptr [ESI + 0x4]
004cade6  MOVZX EDX,word ptr [EAX + 0x8]
004cadea  MOV EAX,dword ptr [ESP + 0x14]
004cadee  MOV EAX,dword ptr [EAX + 0xc]
004cadf1  LEA EAX,[EDX + EAX*0x1 + 0x10000]
004cadf8  AND EAX,0x8000ffff
004cadfd  JNS 0x004cae0c
004cadff  DEC EAX
004cae00  OR EAX,0xffff0000
004cae05  INC EAX
004cae06  JNS 0x004cae0c
004cae08  XOR EAX,EAX
004cae0a  JMP 0x004cae18
004cae0c  CMP EAX,0x10000
004cae11  JLE 0x004cae18
004cae13  MOV EAX,0x10000
004cae18  TEST EDI,EDI
004cae1a  MOV dword ptr [ECX + 0x14],EAX
004cae1d  MOV ECX,dword ptr [ESI + 0x10]
004cae20  MOV EAX,EDI
004cae22  JGE 0x004cae28
004cae24  XOR EAX,EAX
004cae26  JMP 0x004cae35
004cae28  CMP EDI,0x7fff
004cae2e  JLE 0x004cae35
004cae30  MOV EAX,0x7fff
004cae35  TEST EBX,EBX
004cae37  MOV dword ptr [ECX + 0xc],EAX
004cae3a  MOV ECX,dword ptr [ESI + 0x10]
004cae3d  MOV EAX,EBX
004cae3f  JGE 0x004cae45
004cae41  XOR EAX,EAX
004cae43  JMP 0x004cae52
004cae45  CMP EBX,0x2000
004cae4b  JLE 0x004cae52
004cae4d  MOV EAX,0x2000
004cae52  MOV dword ptr [ECX + 0x10],EAX
004cae55  MOV ECX,dword ptr [ESP + 0x14]
004cae59  MOV EAX,dword ptr [ECX + 0x14]
004cae5c  TEST EAX,EAX
004cae5e  MOV ECX,dword ptr [ESI + 0x10]
004cae61  JGE 0x004cae67
004cae63  XOR EAX,EAX
004cae65  JMP 0x004cae73
004cae67  CMP EAX,0x7fff
004cae6c  JLE 0x004cae73
004cae6e  MOV EAX,0x7fff
004cae73  MOV dword ptr [ECX + 0x20],EAX
004cae76  MOV EAX,dword ptr [ESI + 0x10]
004cae79  MOV ECX,dword ptr [EAX]
004cae7b  TEST ECX,ECX
004cae7d  JZ 0x004cae88
004cae7f  ADD EAX,0x4
004cae82  PUSH EAX
004cae83  CALL 0x0083179c
004cae88  MOV EAX,dword ptr [ESI + 0x10]
004cae8b  MOV ECX,dword ptr [EAX]
004cae8d  TEST ECX,ECX
004cae8f  MOV dword ptr [ESP + 0x14],0x0
004cae97  JZ 0x004caeaa
004cae99  LEA EDX,[ESP + 0x14]
004cae9d  PUSH EDX
004cae9e  CALL 0x008311aa
004caea3  CMP dword ptr [ESP + 0x14],0x1
004caea8  JG 0x004caeb1
004caeaa  MOV ECX,ESI
004caeac  CALL 0x004cab80
004caeb1  POP EDI
004caeb2  POP ESI
004caeb3  POP EBX
004caeb4  POP ECX
004caeb5  RET 0x4
