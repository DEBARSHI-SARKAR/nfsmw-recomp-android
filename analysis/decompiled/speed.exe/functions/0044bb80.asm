0044bb80  SUB ESP,0x2c
0044bb83  PUSH EBX
0044bb84  PUSH ESI
0044bb85  MOV ESI,ECX
0044bb87  FLD float ptr [ESI + 0x40]
0044bb8a  MOV EAX,dword ptr [ESI + 0x34]
0044bb8d  FMUL float ptr [ESI + 0x5c]
0044bb90  PUSH EDI
0044bb91  MOV ECX,EAX
0044bb93  XOR EDI,EDI
0044bb95  AND ECX,0x40
0044bb98  FST float ptr [ESP + 0x20]
0044bb9c  FMUL float ptr [ESP + 0x3c]
0044bba0  FMUL float ptr [0x0089309c]
0044bba6  FSTP float ptr [ESP + 0x1c]
0044bbaa  FLD float ptr [ESP + 0x20]
0044bbae  FMUL float ptr [ESI + 0x14]
0044bbb1  FMUL float ptr [0x0089309c]
0044bbb7  FSTP float ptr [ESP + 0x14]
0044bbbb  FLD float ptr [ESI + 0x68]
0044bbbe  FMUL float ptr [0x0089309c]
0044bbc4  FSTP float ptr [ESP + 0x28]
0044bbc8  FLD float ptr [ESP + 0x20]
0044bbcc  FMUL float ptr [ESI + 0x18]
0044bbcf  FMUL float ptr [0x0089309c]
0044bbd5  FSTP float ptr [ESP + 0x18]
0044bbd9  FLD float ptr [ESI + 0x6c]
0044bbdc  FMUL float ptr [0x0089309c]
0044bbe2  FSTP float ptr [ESP + 0x2c]
0044bbe6  JZ 0x0044bc02
0044bbe8  FILD dword ptr [ESI + 0x3c]
0044bbeb  FMUL float ptr [ESI + 0x40]
0044bbee  FMUL float ptr [ESI + 0x5c]
0044bbf1  FILD dword ptr [ESI + 0x38]
0044bbf4  FMUL float ptr [ESI + 0x40]
0044bbf7  FMUL float ptr [ESI + 0x5c]
0044bbfa  FSUBP
0044bbfc  FSTP float ptr [ESP + 0x30]
0044bc00  JMP 0x0044bc09
0044bc02  MOV EDX,dword ptr [ESI + 0x60]
0044bc05  MOV dword ptr [ESP + 0x30],EDX
0044bc09  TEST ECX,ECX
0044bc0b  JZ 0x0044bc1c
0044bc0d  FILD dword ptr [ESI + 0x38]
0044bc10  FMUL float ptr [ESI + 0x40]
0044bc13  FMUL float ptr [ESI + 0x5c]
0044bc16  FSTP float ptr [ESP + 0x24]
0044bc1a  JMP 0x0044bc24
0044bc1c  MOV dword ptr [ESP + 0x24],0x0
0044bc24  TEST ECX,ECX
0044bc26  JZ 0x0044bc37
0044bc28  FILD dword ptr [ESI + 0x3c]
0044bc2b  FMUL float ptr [ESI + 0x40]
0044bc2e  FMUL float ptr [ESI + 0x5c]
0044bc31  FSTP float ptr [ESP + 0x10]
0044bc35  JMP 0x0044bc3e
0044bc37  MOV ECX,dword ptr [ESI + 0x60]
0044bc3a  MOV dword ptr [ESP + 0x10],ECX
0044bc3e  MOV ECX,EAX
0044bc40  MOV EDX,EAX
0044bc42  SHR ECX,0xb
0044bc45  SHR EDX,0x3
0044bc48  AND CL,0x1
0044bc4b  AND DL,0x1
0044bc4e  TEST AL,0x20
0044bc50  MOV byte ptr [ESP + 0xf],CL
0044bc54  JZ 0x0044bc5f
0044bc56  TEST CL,CL
0044bc58  MOV byte ptr [ESP + 0x3c],0x1
0044bc5d  JZ 0x0044bc64
0044bc5f  MOV byte ptr [ESP + 0x3c],0x0
0044bc64  MOV ECX,EAX
0044bc66  SHR ECX,0x4
0044bc69  AND CL,0x1
0044bc6c  TEST DL,DL
0044bc6e  JZ 0x0044bc7b
0044bc70  TEST CL,CL
0044bc72  JZ 0x0044bc87
0044bc74  AND EAX,0xffffffef
0044bc77  XOR CL,CL
0044bc79  JMP 0x0044bc84
0044bc7b  TEST CL,CL
0044bc7d  JNZ 0x0044bc87
0044bc7f  OR EAX,0x8
0044bc82  MOV DL,0x1
0044bc84  MOV dword ptr [ESI + 0x34],EAX
0044bc87  MOV EBX,dword ptr [ESI + 0x34]
0044bc8a  TEST BL,BL
0044bc8c  JNS 0x0044bcb0
0044bc8e  FLD float ptr [ESP + 0x14]
0044bc92  FCOMP float ptr [ESP + 0x28]
0044bc96  FNSTSW AX
0044bc98  TEST AH,0x5
0044bc9b  JP 0x0044bcb0
0044bc9d  FLD float ptr [ESI + 0x64]
0044bca0  MOV byte ptr [ESP + 0xe],0x1
0044bca5  FCOMP float ptr [ESP + 0x10]
0044bca9  FNSTSW AX
0044bcab  TEST AH,0x5
0044bcae  JNP 0x0044bcb5
0044bcb0  MOV byte ptr [ESP + 0xe],0x0
0044bcb5  TEST BH,0x1
0044bcb8  JZ 0x0044bcdb
0044bcba  FLD float ptr [ESP + 0x18]
0044bcbe  FCOMP float ptr [ESP + 0x2c]
0044bcc2  FNSTSW AX
0044bcc4  TEST AH,0x5
0044bcc7  JP 0x0044bcdb
0044bcc9  FLD float ptr [ESI + 0x64]
0044bccc  FCOMP float ptr [ESP + 0x10]
0044bcd0  FNSTSW AX
0044bcd2  TEST AH,0x5
0044bcd5  JP 0x0044bcdb
0044bcd7  MOV AL,0x1
0044bcd9  JMP 0x0044bcdd
0044bcdb  XOR AL,AL
0044bcdd  MOV EBX,dword ptr [ESI + 0x10]
0044bce0  FLD float ptr [ESI + 0x64]
0044bce3  CMP EBX,0x1
0044bce6  FST float ptr [ESP + 0x34]
0044bcea  JZ 0x0044bcf9
0044bcec  POP EDI
0044bced  FSTP ST0
0044bcef  POP ESI
0044bcf0  XOR EAX,EAX
0044bcf2  POP EBX
0044bcf3  ADD ESP,0x2c
0044bcf6  RET 0x4
0044bcf9  MOV BL,byte ptr [ESP + 0xe]
0044bcfd  TEST BL,BL
0044bcff  JZ 0x0044bd4f
0044bd01  FLD float ptr [ESP + 0x14]
0044bd05  FADD float ptr [ESP + 0x1c]
0044bd09  FST float ptr [ESP + 0x14]
0044bd0d  FCOMP float ptr [ESP + 0x28]
0044bd11  FNSTSW AX
0044bd13  TEST AH,0x41
0044bd16  JNZ 0x0044bd30
0044bd18  MOV EDX,dword ptr [ESP + 0x28]
0044bd1c  FSTP ST0
0044bd1e  MOV EAX,dword ptr [ESP + 0x14]
0044bd22  PUSH EDX
0044bd23  PUSH EAX
0044bd24  CALL 0x0045dac0
0044bd29  FADD float ptr [ESP + 0x3c]
0044bd2d  ADD ESP,0x8
0044bd30  FLD float ptr [ESP + 0x14]
0044bd34  MOV EAX,EDI
0044bd36  FDIV float ptr [ESP + 0x20]
0044bd3a  POP EDI
0044bd3b  FMUL float ptr [0x008934e0]
0044bd41  FSTP float ptr [ESI + 0x14]
0044bd44  FSTP float ptr [ESI + 0x64]
0044bd47  POP ESI
0044bd48  POP EBX
0044bd49  ADD ESP,0x2c
0044bd4c  RET 0x4
0044bd4f  XOR EBX,EBX
0044bd51  CMP AL,BL
0044bd53  JZ 0x0044bda3
0044bd55  FLD float ptr [ESP + 0x18]
0044bd59  FADD float ptr [ESP + 0x1c]
0044bd5d  FST float ptr [ESP + 0x18]
0044bd61  FCOMP float ptr [ESP + 0x2c]
0044bd65  FNSTSW AX
0044bd67  TEST AH,0x41
0044bd6a  JNZ 0x0044bd84
0044bd6c  MOV ECX,dword ptr [ESP + 0x2c]
0044bd70  FSTP ST0
0044bd72  MOV EDX,dword ptr [ESP + 0x18]
0044bd76  PUSH ECX
0044bd77  PUSH EDX
0044bd78  CALL 0x0045dac0
0044bd7d  FADD float ptr [ESP + 0x3c]
0044bd81  ADD ESP,0x8
0044bd84  FLD float ptr [ESP + 0x18]
0044bd88  MOV EAX,EDI
0044bd8a  FDIV float ptr [ESP + 0x20]
0044bd8e  POP EDI
0044bd8f  FMUL float ptr [0x008934e0]
0044bd95  FSTP float ptr [ESI + 0x18]
0044bd98  FSTP float ptr [ESI + 0x64]
0044bd9b  POP ESI
0044bd9c  POP EBX
0044bd9d  ADD ESP,0x2c
0044bda0  RET 0x4
0044bda3  CMP DL,BL
0044bda5  JZ 0x0044be41
0044bdab  MOV EAX,dword ptr [ESI + 0x34]
0044bdae  TEST AH,0x10
0044bdb1  JZ 0x0044bdfa
0044bdb3  FSUB float ptr [ESP + 0x1c]
0044bdb7  FCOM float ptr [ESP + 0x24]
0044bdbb  FNSTSW AX
0044bdbd  TEST AH,0x5
0044bdc0  JP 0x0044beb2
0044bdc6  CMP byte ptr [ESP + 0x3c],BL
0044bdca  JZ 0x0044bde1
0044bdcc  FADD float ptr [ESP + 0x30]
0044bdd0  MOV EAX,EDI
0044bdd2  POP EDI
0044bdd3  MOV dword ptr [ESI + 0x18],EBX
0044bdd6  FSTP float ptr [ESI + 0x64]
0044bdd9  POP ESI
0044bdda  POP EBX
0044bddb  ADD ESP,0x2c
0044bdde  RET 0x4
0044bde1  MOV EDI,0x1
0044bde6  FSTP ST0
0044bde8  FLD float ptr [ESP + 0x24]
0044bdec  MOV EAX,EDI
0044bdee  POP EDI
0044bdef  FSTP float ptr [ESI + 0x64]
0044bdf2  POP ESI
0044bdf3  POP EBX
0044bdf4  ADD ESP,0x2c
0044bdf7  RET 0x4
0044bdfa  FADD float ptr [ESP + 0x1c]
0044bdfe  FCOM float ptr [ESP + 0x10]
0044be02  FNSTSW AX
0044be04  TEST AH,0x41
0044be07  JNZ 0x0044beb2
0044be0d  CMP byte ptr [ESP + 0x3c],BL
0044be11  JZ 0x0044be28
0044be13  FSUB float ptr [ESP + 0x30]
0044be17  MOV EAX,EDI
0044be19  POP EDI
0044be1a  MOV dword ptr [ESI + 0x18],EBX
0044be1d  FSTP float ptr [ESI + 0x64]
0044be20  POP ESI
0044be21  POP EBX
0044be22  ADD ESP,0x2c
0044be25  RET 0x4
0044be28  MOV EDI,0x1
0044be2d  FSTP ST0
0044be2f  FLD float ptr [ESP + 0x10]
0044be33  MOV EAX,EDI
0044be35  POP EDI
0044be36  FSTP float ptr [ESI + 0x64]
0044be39  POP ESI
0044be3a  POP EBX
0044be3b  ADD ESP,0x2c
0044be3e  RET 0x4
0044be41  CMP CL,BL
0044be43  JZ 0x0044beb2
0044be45  MOV EAX,dword ptr [ESI + 0x8]
0044be48  SUB EAX,EBX
0044be4a  JZ 0x0044be87
0044be4c  DEC EAX
0044be4d  JNZ 0x0044beb2
0044be4f  FSUB float ptr [ESP + 0x1c]
0044be53  FCOM float ptr [ESP + 0x24]
0044be57  FNSTSW AX
0044be59  TEST AH,0x5
0044be5c  JP 0x0044beb2
0044be5e  MOV AL,byte ptr [ESP + 0xf]
0044be62  FSTP ST0
0044be64  CMP AL,BL
0044be66  JZ 0x0044be6f
0044be68  MOV dword ptr [ESI + 0x10],0x2
0044be6f  FLD float ptr [ESP + 0x24]
0044be73  MOV EAX,EDI
0044be75  POP EDI
0044be76  FSTP float ptr [ESI + 0x64]
0044be79  MOV dword ptr [ESI + 0x8],EBX
0044be7c  MOV dword ptr [ESI + 0x18],EBX
0044be7f  POP ESI
0044be80  POP EBX
0044be81  ADD ESP,0x2c
0044be84  RET 0x4
0044be87  FADD float ptr [ESP + 0x1c]
0044be8b  FCOM float ptr [ESP + 0x10]
0044be8f  FNSTSW AX
0044be91  TEST AH,0x41
0044be94  JNZ 0x0044beb2
0044be96  CMP byte ptr [ESP + 0xf],BL
0044be9a  JZ 0x0044bea3
0044be9c  MOV dword ptr [ESI + 0x10],0x2
0044bea3  FSUB float ptr [ESP + 0x10]
0044bea7  MOV dword ptr [ESI + 0x8],0x1
0044beae  FSUBR float ptr [ESP + 0x10]
0044beb2  MOV EAX,EDI
0044beb4  FSTP float ptr [ESI + 0x64]
0044beb7  POP EDI
0044beb8  POP ESI
0044beb9  POP EBX
0044beba  ADD ESP,0x2c
0044bebd  RET 0x4
