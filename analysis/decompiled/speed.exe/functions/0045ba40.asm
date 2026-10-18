0045ba40  MOV EAX,FS:[0x0]
0045ba46  PUSH -0x1
0045ba48  PUSH 0x869f68
0045ba4d  PUSH EAX
0045ba4e  MOV EAX,dword ptr [ESP + 0x14]
0045ba52  MOV dword ptr FS:[0x0],ESP
0045ba59  SUB ESP,0x48
0045ba5c  PUSH EBP
0045ba5d  MOV EBP,ECX
0045ba5f  MOV CL,byte ptr [EAX + 0x21]
0045ba62  TEST CL,CL
0045ba64  PUSH ESI
0045ba65  JZ 0x0045bab3
0045ba67  PUSH 0x1b
0045ba69  XOR ESI,ESI
0045ba6b  PUSH 0x892920
0045ba70  LEA ECX,[ESP + 0x14]
0045ba74  MOV dword ptr [ESP + 0x2c],0xf
0045ba7c  MOV dword ptr [ESP + 0x28],ESI
0045ba80  MOV byte ptr [ESP + 0x18],0x0
0045ba85  CALL 0x004303b0
0045ba8a  LEA EAX,[ESP + 0xc]
0045ba8e  PUSH EAX
0045ba8f  LEA ECX,[ESP + 0x2c]
0045ba93  MOV dword ptr [ESP + 0x5c],ESI
0045ba97  CALL 0x00432d50
0045ba9c  PUSH 0x8c9f78
0045baa1  LEA ECX,[ESP + 0x2c]
0045baa5  PUSH ECX
0045baa6  MOV dword ptr [ESP + 0x30],0x8bf2c0
0045baae  CALL 0x007c56b0
0045bab3  PUSH EBX
0045bab4  MOV EBX,EAX
0045bab6  PUSH EDI
0045bab7  LEA ECX,[ESP + 0x6c]
0045babb  MOV dword ptr [ESP + 0x10],EBX
0045babf  CALL 0x0045b960
0045bac4  MOV EAX,dword ptr [EBX]
0045bac6  MOV CL,byte ptr [EAX + 0x21]
0045bac9  TEST CL,CL
0045bacb  JZ 0x0045bad2
0045bacd  MOV EDI,dword ptr [EBX + 0x8]
0045bad0  JMP 0x0045baeb
0045bad2  MOV EDX,dword ptr [EBX + 0x8]
0045bad5  MOV CL,byte ptr [EDX + 0x21]
0045bad8  TEST CL,CL
0045bada  JZ 0x0045bae0
0045badc  MOV EDI,EAX
0045bade  JMP 0x0045baeb
0045bae0  MOV ECX,dword ptr [ESP + 0x6c]
0045bae4  CMP ECX,EBX
0045bae6  MOV EDI,dword ptr [ECX + 0x8]
0045bae9  JNZ 0x0045bb65
0045baeb  MOV AL,byte ptr [EDI + 0x21]
0045baee  TEST AL,AL
0045baf0  MOV ESI,dword ptr [EBX + 0x4]
0045baf3  JNZ 0x0045baf8
0045baf5  MOV dword ptr [EDI + 0x4],ESI
0045baf8  MOV EAX,dword ptr [EBP + 0x4]
0045bafb  CMP dword ptr [EAX + 0x4],EBX
0045bafe  JNZ 0x0045bb05
0045bb00  MOV dword ptr [EAX + 0x4],EDI
0045bb03  JMP 0x0045bb10
0045bb05  CMP dword ptr [ESI],EBX
0045bb07  JNZ 0x0045bb0d
0045bb09  MOV dword ptr [ESI],EDI
0045bb0b  JMP 0x0045bb10
0045bb0d  MOV dword ptr [ESI + 0x8],EDI
0045bb10  MOV EDX,dword ptr [EBP + 0x4]
0045bb13  CMP dword ptr [EDX],EBX
0045bb15  JNZ 0x0045bb3d
0045bb17  MOV AL,byte ptr [EDI + 0x21]
0045bb1a  TEST AL,AL
0045bb1c  JZ 0x0045bb22
0045bb1e  MOV ECX,ESI
0045bb20  JMP 0x0045bb3b
0045bb22  MOV EAX,dword ptr [EDI]
0045bb24  MOV BL,byte ptr [EAX + 0x21]
0045bb27  TEST BL,BL
0045bb29  MOV ECX,EDI
0045bb2b  JNZ 0x0045bb3b
0045bb2d  LEA ECX,[ECX]
0045bb30  MOV ECX,EAX
0045bb32  MOV EAX,dword ptr [ECX]
0045bb34  MOV BL,byte ptr [EAX + 0x21]
0045bb37  TEST BL,BL
0045bb39  JZ 0x0045bb30
0045bb3b  MOV dword ptr [EDX],ECX
0045bb3d  MOV EBX,dword ptr [EBP + 0x4]
0045bb40  MOV EAX,dword ptr [ESP + 0x10]
0045bb44  CMP dword ptr [EBX + 0x8],EAX
0045bb47  JNZ 0x0045bbbd
0045bb49  MOV AL,byte ptr [EDI + 0x21]
0045bb4c  TEST AL,AL
0045bb4e  JZ 0x0045bb57
0045bb50  MOV EAX,ESI
0045bb52  MOV dword ptr [EBX + 0x8],EAX
0045bb55  JMP 0x0045bbbd
0045bb57  PUSH EDI
0045bb58  CALL 0x00453260
0045bb5d  ADD ESP,0x4
0045bb60  MOV dword ptr [EBX + 0x8],EAX
0045bb63  JMP 0x0045bbbd
0045bb65  MOV dword ptr [EAX + 0x4],ECX
0045bb68  MOV EDX,dword ptr [EBX]
0045bb6a  MOV dword ptr [ECX],EDX
0045bb6c  CMP ECX,dword ptr [EBX + 0x8]
0045bb6f  JNZ 0x0045bb75
0045bb71  MOV ESI,ECX
0045bb73  JMP 0x0045bb90
0045bb75  MOV AL,byte ptr [EDI + 0x21]
0045bb78  TEST AL,AL
0045bb7a  MOV ESI,dword ptr [ECX + 0x4]
0045bb7d  JNZ 0x0045bb82
0045bb7f  MOV dword ptr [EDI + 0x4],ESI
0045bb82  MOV dword ptr [ESI],EDI
0045bb84  MOV EAX,dword ptr [EBX + 0x8]
0045bb87  MOV dword ptr [ECX + 0x8],EAX
0045bb8a  MOV EDX,dword ptr [EBX + 0x8]
0045bb8d  MOV dword ptr [EDX + 0x4],ECX
0045bb90  MOV EAX,dword ptr [EBP + 0x4]
0045bb93  CMP dword ptr [EAX + 0x4],EBX
0045bb96  JNZ 0x0045bb9d
0045bb98  MOV dword ptr [EAX + 0x4],ECX
0045bb9b  JMP 0x0045bbab
0045bb9d  MOV EAX,dword ptr [EBX + 0x4]
0045bba0  CMP dword ptr [EAX],EBX
0045bba2  JNZ 0x0045bba8
0045bba4  MOV dword ptr [EAX],ECX
0045bba6  JMP 0x0045bbab
0045bba8  MOV dword ptr [EAX + 0x8],ECX
0045bbab  MOV EAX,dword ptr [EBX + 0x4]
0045bbae  MOV dword ptr [ECX + 0x4],EAX
0045bbb1  MOV DL,byte ptr [EBX + 0x20]
0045bbb4  MOV AL,byte ptr [ECX + 0x20]
0045bbb7  MOV byte ptr [ECX + 0x20],DL
0045bbba  MOV byte ptr [EBX + 0x20],AL
0045bbbd  MOV EAX,dword ptr [ESP + 0x10]
0045bbc1  MOV CL,byte ptr [EAX + 0x20]
0045bbc4  MOV BL,0x1
0045bbc6  CMP CL,BL
0045bbc8  JNZ 0x0045bcd1
0045bbce  MOV ECX,dword ptr [EBP + 0x4]
0045bbd1  CMP EDI,dword ptr [ECX + 0x4]
0045bbd4  JZ 0x0045bcce
0045bbda  LEA EBX,[EBX]
0045bbe0  CMP byte ptr [EDI + 0x20],BL
0045bbe3  JNZ 0x0045bcce
0045bbe9  MOV EAX,dword ptr [ESI]
0045bbeb  CMP EDI,EAX
0045bbed  JNZ 0x0045bc56
0045bbef  MOV EAX,dword ptr [ESI + 0x8]
0045bbf2  MOV CL,byte ptr [EAX + 0x20]
0045bbf5  TEST CL,CL
0045bbf7  JNZ 0x0045bc0b
0045bbf9  MOV byte ptr [EAX + 0x20],BL
0045bbfc  PUSH ESI
0045bbfd  MOV ECX,EBP
0045bbff  MOV byte ptr [ESI + 0x20],0x0
0045bc03  CALL 0x004552b0
0045bc08  MOV EAX,dword ptr [ESI + 0x8]
0045bc0b  MOV CL,byte ptr [EAX + 0x21]
0045bc0e  TEST CL,CL
0045bc10  JNZ 0x0045bc88
0045bc12  MOV EDX,dword ptr [EAX]
0045bc14  CMP byte ptr [EDX + 0x20],BL
0045bc17  JNZ 0x0045bc21
0045bc19  MOV ECX,dword ptr [EAX + 0x8]
0045bc1c  CMP byte ptr [ECX + 0x20],BL
0045bc1f  JZ 0x0045bc84
0045bc21  MOV ECX,dword ptr [EAX + 0x8]
0045bc24  CMP byte ptr [ECX + 0x20],BL
0045bc27  JNZ 0x0045bc3d
0045bc29  MOV EDX,dword ptr [EAX]
0045bc2b  MOV byte ptr [EDX + 0x20],BL
0045bc2e  PUSH EAX
0045bc2f  MOV ECX,EBP
0045bc31  MOV byte ptr [EAX + 0x20],0x0
0045bc35  CALL 0x00455310
0045bc3a  MOV EAX,dword ptr [ESI + 0x8]
0045bc3d  MOV CL,byte ptr [ESI + 0x20]
0045bc40  MOV byte ptr [EAX + 0x20],CL
0045bc43  MOV byte ptr [ESI + 0x20],BL
0045bc46  MOV EDX,dword ptr [EAX + 0x8]
0045bc49  PUSH ESI
0045bc4a  MOV ECX,EBP
0045bc4c  MOV byte ptr [EDX + 0x20],BL
0045bc4f  CALL 0x004552b0
0045bc54  JMP 0x0045bcce
0045bc56  MOV CL,byte ptr [EAX + 0x20]
0045bc59  TEST CL,CL
0045bc5b  JNZ 0x0045bc6e
0045bc5d  MOV byte ptr [EAX + 0x20],BL
0045bc60  PUSH ESI
0045bc61  MOV ECX,EBP
0045bc63  MOV byte ptr [ESI + 0x20],0x0
0045bc67  CALL 0x00455310
0045bc6c  MOV EAX,dword ptr [ESI]
0045bc6e  MOV CL,byte ptr [EAX + 0x21]
0045bc71  TEST CL,CL
0045bc73  JNZ 0x0045bc88
0045bc75  MOV EDX,dword ptr [EAX + 0x8]
0045bc78  CMP byte ptr [EDX + 0x20],BL
0045bc7b  JNZ 0x0045bc9d
0045bc7d  MOV ECX,dword ptr [EAX]
0045bc7f  CMP byte ptr [ECX + 0x20],BL
0045bc82  JNZ 0x0045bc9d
0045bc84  MOV byte ptr [EAX + 0x20],0x0
0045bc88  MOV EDX,dword ptr [EBP + 0x4]
0045bc8b  MOV EAX,dword ptr [EDX + 0x4]
0045bc8e  MOV EDI,ESI
0045bc90  CMP EDI,EAX
0045bc92  MOV ESI,dword ptr [ESI + 0x4]
0045bc95  JNZ 0x0045bbe0
0045bc9b  JMP 0x0045bcce
0045bc9d  MOV ECX,dword ptr [EAX]
0045bc9f  CMP byte ptr [ECX + 0x20],BL
0045bca2  JNZ 0x0045bcb8
0045bca4  MOV EDX,dword ptr [EAX + 0x8]
0045bca7  MOV byte ptr [EDX + 0x20],BL
0045bcaa  PUSH EAX
0045bcab  MOV ECX,EBP
0045bcad  MOV byte ptr [EAX + 0x20],0x0
0045bcb1  CALL 0x004552b0
0045bcb6  MOV EAX,dword ptr [ESI]
0045bcb8  MOV CL,byte ptr [ESI + 0x20]
0045bcbb  MOV byte ptr [EAX + 0x20],CL
0045bcbe  MOV byte ptr [ESI + 0x20],BL
0045bcc1  MOV EDX,dword ptr [EAX]
0045bcc3  PUSH ESI
0045bcc4  MOV ECX,EBP
0045bcc6  MOV byte ptr [EDX + 0x20],BL
0045bcc9  CALL 0x00455310
0045bcce  MOV byte ptr [EDI + 0x20],BL
0045bcd1  MOV EAX,dword ptr [ESP + 0x10]
0045bcd5  PUSH 0x890f10
0045bcda  PUSH 0x24
0045bcdc  PUSH EAX
0045bcdd  MOV ECX,0x925b30
0045bce2  CALL 0x005d0370
0045bce7  MOV EAX,dword ptr [EBP + 0x8]
0045bcea  TEST EAX,EAX
0045bcec  POP EDI
0045bced  POP EBX
0045bcee  JBE 0x0045bcf4
0045bcf0  DEC EAX
0045bcf1  MOV dword ptr [EBP + 0x8],EAX
0045bcf4  MOV ECX,dword ptr [ESP + 0x64]
0045bcf8  MOV EAX,dword ptr [ESP + 0x60]
0045bcfc  MOV dword ptr [EAX],ECX
0045bcfe  MOV ECX,dword ptr [ESP + 0x50]
0045bd02  POP ESI
0045bd03  POP EBP
0045bd04  MOV dword ptr FS:[0x0],ECX
0045bd0b  ADD ESP,0x54
0045bd0e  RET 0x8
