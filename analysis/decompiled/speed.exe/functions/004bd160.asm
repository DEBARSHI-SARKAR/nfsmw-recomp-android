004bd160  SUB ESP,0x58
004bd163  FLD double ptr [0x008970e0]
004bd169  PUSH EBX
004bd16a  FABS
004bd16c  PUSH EBP
004bd16d  FCOMP float ptr [0x00896abc]
004bd173  PUSH ESI
004bd174  PUSH EDI
004bd175  MOV ESI,ECX
004bd177  FNSTSW AX
004bd179  MOV dword ptr [ESP + 0x4c],0x0
004bd181  MOV dword ptr [ESP + 0x50],0x3f800000
004bd189  TEST AH,0x5
004bd18c  MOV dword ptr [ESP + 0x54],0x0
004bd194  MOV dword ptr [ESP + 0x58],0x420c0000
004bd19c  JP 0x004bd1a6
004bd19e  MOV dword ptr [ESP + 0x58],0x420c0000
004bd1a6  MOV ECX,dword ptr [ESI + 0x28]
004bd1a9  MOV EAX,dword ptr [ECX]
004bd1ab  MOV dword ptr [ESP + 0x60],0x0
004bd1b3  CALL dword ptr [EAX + 0x4c]
004bd1b6  FSTP float ptr [ESP + 0x5c]
004bd1ba  LEA ECX,[ESP + 0x4c]
004bd1be  CALL 0x004b0720
004bd1c3  FLD float ptr [ESI + 0x90]
004bd1c9  FADD float ptr [0x00890bf8]
004bd1cf  MOV ECX,dword ptr [ESI + 0x18]
004bd1d2  MOV EDX,dword ptr [ECX + 0xd8]
004bd1d8  MOV EAX,dword ptr [EDX + 0x78]
004bd1db  FABS
004bd1dd  MOV dword ptr [ESP + 0x14],EAX
004bd1e1  FSTP float ptr [ESP + 0x18]
004bd1e5  MOV byte ptr [ESP + 0x13],0x1
004bd1ea  FLD float ptr [ESP + 0x14]
004bd1ee  FSUB float ptr [ESP + 0x18]
004bd1f2  FDIV float ptr [ESP + 0x14]
004bd1f6  FSUBR float ptr [0x0089096c]
004bd1fc  FST float ptr [ESI + 0xd0]
004bd202  FST float ptr [ESP + 0x14]
004bd206  FCOMP float ptr [0x00890968]
004bd20c  FNSTSW AX
004bd20e  TEST AH,0x41
004bd211  JNZ 0x004bd2bd
004bd217  FLD float ptr [ESP + 0x14]
004bd21b  FLD float ptr [0x0089096c]
004bd221  FCOMP float ptr [ESP + 0x14]
004bd225  FNSTSW AX
004bd227  TEST AH,0x5
004bd22a  JP 0x004bd234
004bd22c  FSTP ST0
004bd22e  FLD float ptr [0x0089096c]
004bd234  FST float ptr [ESI + 0xd0]
004bd23a  MOV EAX,dword ptr [ECX + 0xd8]
004bd240  FLD float ptr [EAX + 0x64]
004bd243  FSUB float ptr [ESP + 0x18]
004bd247  FDIV float ptr [EAX + 0x64]
004bd24a  FSUBR float ptr [0x0089096c]
004bd250  FST float ptr [ESI + 0xd4]
004bd256  FST float ptr [ESP + 0x14]
004bd25a  FCOMP float ptr [0x00890968]
004bd260  FNSTSW AX
004bd262  TEST AH,0x41
004bd265  JNZ 0x004bd2c8
004bd267  FLD float ptr [ESP + 0x14]
004bd26b  FLD float ptr [0x0089096c]
004bd271  FCOMP float ptr [ESP + 0x14]
004bd275  FNSTSW AX
004bd277  TEST AH,0x5
004bd27a  JP 0x004bd284
004bd27c  FSTP ST0
004bd27e  FLD float ptr [0x0089096c]
004bd284  MOV EDX,dword ptr [ESI + 0x14]
004bd287  FST float ptr [ESI + 0xd4]
004bd28d  MOV EAX,dword ptr [EDX + 0x34]
004bd290  MOV EDX,dword ptr [EAX + 0x1ec]
004bd296  TEST EDX,EDX
004bd298  JNZ 0x004bd2d0
004bd29a  MOV EAX,dword ptr [ESI + 0x2c]
004bd29d  MOV EAX,dword ptr [EAX + 0x38]
004bd2a0  CMP EAX,0x3
004bd2a3  JZ 0x004bd2d0
004bd2a5  TEST EAX,EAX
004bd2a7  JNZ 0x004bd2d0
004bd2a9  MOV EDX,dword ptr [ESI + 0x30]
004bd2ac  MOV EAX,dword ptr [EDX + 0x84]
004bd2b2  TEST EAX,EAX
004bd2b4  JZ 0x004bd2ec
004bd2b6  CMP EAX,0x1
004bd2b9  JNZ 0x004bd2ec
004bd2bb  JMP 0x004bd2e7
004bd2bd  FLD float ptr [0x00890968]
004bd2c3  JMP 0x004bd234
004bd2c8  FLD float ptr [0x00890968]
004bd2ce  JMP 0x004bd284
004bd2d0  MOV EAX,dword ptr [ESI + 0x2c]
004bd2d3  MOV EAX,dword ptr [EAX + 0x38]
004bd2d6  SUB EAX,0x2
004bd2d9  JZ 0x004bd2e7
004bd2db  SUB EAX,0x5
004bd2de  JNZ 0x004bd2ec
004bd2e0  MOV AL,byte ptr [ECX + 0x68]
004bd2e3  TEST AL,AL
004bd2e5  JZ 0x004bd2ec
004bd2e7  MOV byte ptr [ESP + 0x13],0x0
004bd2ec  MOV EDI,dword ptr [ECX + 0xd8]
004bd2f2  FLD float ptr [EDI + 0x70]
004bd2f5  MOV EDX,dword ptr [ESI + 0x28]
004bd2f8  FSUB float ptr [EDI + 0x68]
004bd2fb  MOV EAX,dword ptr [EDX + 0x134]
004bd301  PUSH 0x0
004bd303  ADD ECX,0xd0
004bd309  FMUL ST2
004bd30b  PUSH 0x38afe02e
004bd310  MOV dword ptr [ESP + 0x50],EAX
004bd314  FADD float ptr [EDI + 0x68]
004bd317  FSTP float ptr [ESP + 0x44]
004bd31b  FLD float ptr [EDI + 0x90]
004bd321  FSUB float ptr [EDI + 0x7c]
004bd324  FMUL ST2
004bd326  FADD float ptr [EDI + 0x7c]
004bd329  FSTP float ptr [ESP + 0x48]
004bd32d  FLD float ptr [EDI + 0x88]
004bd333  FSUB float ptr [EDI + 0x8c]
004bd339  FMUL ST1
004bd33b  FADD float ptr [EDI + 0x8c]
004bd341  FSTP float ptr [ESP + 0x34]
004bd345  FSTP ST0
004bd347  FSTP ST0
004bd349  CALL 0x00454810
004bd34e  TEST EAX,EAX
004bd350  JNZ 0x004bd35c
004bd352  PUSH 0x4
004bd354  CALL 0x006269b0
004bd359  ADD ESP,0x4
004bd35c  FLD float ptr [EDI + 0x6c]
004bd35f  MOV ECX,dword ptr [ESI + 0x18]
004bd362  FSUB float ptr [EDI + 0x6c]
004bd365  PUSH 0x0
004bd367  ADD ECX,0xd0
004bd36d  PUSH 0xe3836473
004bd372  FMUL float ptr [ESI + 0xd4]
004bd378  FADD float ptr [EAX]
004bd37a  FSTP float ptr [ESP + 0x38]
004bd37e  CALL 0x00454810
004bd383  TEST EAX,EAX
004bd385  JNZ 0x004bd391
004bd387  PUSH 0x4
004bd389  CALL 0x006269b0
004bd38e  ADD ESP,0x4
004bd391  MOV ECX,dword ptr [ESI + 0x28]
004bd394  MOV EAX,dword ptr [EAX]
004bd396  MOV ECX,dword ptr [ECX + 0x134]
004bd39c  CMP EAX,ECX
004bd39e  MOV dword ptr [ESP + 0x38],EAX
004bd3a2  JL 0x004bd3a8
004bd3a4  MOV dword ptr [ESP + 0x38],ECX
004bd3a8  FLD float ptr [ESP + 0x3c]
004bd3ac  FSUB float ptr [ESP + 0x2c]
004bd3b0  FMUL float ptr [ESP + 0x60]
004bd3b4  FADD float ptr [ESP + 0x2c]
004bd3b8  FSTP float ptr [ESP + 0x1c]
004bd3bc  FLD float ptr [ESP + 0x60]
004bd3c0  FMUL float ptr [0x00890968]
004bd3c6  FSTP float ptr [ESP + 0x24]
004bd3ca  FLD float ptr [ESP + 0x40]
004bd3ce  FSUB float ptr [ESP + 0x30]
004bd3d2  FMUL float ptr [ESP + 0x60]
004bd3d6  FADD float ptr [ESP + 0x30]
004bd3da  FSTP float ptr [ESP + 0x20]
004bd3de  FILD dword ptr [ESP + 0x38]
004bd3e2  FILD dword ptr [ESP + 0x48]
004bd3e6  FSUB ST0,ST1
004bd3e8  FMUL float ptr [ESP + 0x60]
004bd3ec  FADD ST0,ST1
004bd3ee  CALL 0x007c4b80
004bd3f3  FSTP ST0
004bd3f5  MOV ECX,EAX
004bd3f7  MOV AL,byte ptr [ESP + 0x13]
004bd3fb  TEST AL,AL
004bd3fd  JZ 0x004bd4db
004bd403  FLD float ptr [ESP + 0x1c]
004bd407  FADD float ptr [0x00895074]
004bd40d  FLD float ptr [ESP + 0x1c]
004bd411  FCOMP
004bd413  FNSTSW AX
004bd415  TEST AH,0x41
004bd418  JZ 0x004bd439
004bd41a  FSTP ST0
004bd41c  FLD float ptr [ESP + 0x1c]
004bd420  FSUB float ptr [0x00895074]
004bd426  FLD float ptr [ESP + 0x1c]
004bd42a  FCOMP
004bd42c  FNSTSW AX
004bd42e  TEST AH,0x5
004bd431  JNP 0x004bd439
004bd433  FSTP ST0
004bd435  FLD float ptr [ESP + 0x1c]
004bd439  FSTP float ptr [ESI + 0xc0]
004bd43f  LEA EBX,[ESI + 0xc0]
004bd445  FLD float ptr [ESP + 0x20]
004bd449  FADD float ptr [0x00895074]
004bd44f  FLD float ptr [ESP + 0x20]
004bd453  FCOMP
004bd455  FNSTSW AX
004bd457  TEST AH,0x41
004bd45a  JZ 0x004bd47b
004bd45c  FSTP ST0
004bd45e  FLD float ptr [ESP + 0x20]
004bd462  FSUB float ptr [0x00895074]
004bd468  FLD float ptr [ESP + 0x20]
004bd46c  FCOMP
004bd46e  FNSTSW AX
004bd470  TEST AH,0x5
004bd473  JNP 0x004bd47b
004bd475  FSTP ST0
004bd477  FLD float ptr [ESP + 0x20]
004bd47b  FSTP float ptr [ESI + 0xc4]
004bd481  FLD float ptr [ESP + 0x24]
004bd485  FADD float ptr [0x00895074]
004bd48b  FLD float ptr [ESP + 0x24]
004bd48f  FCOMP
004bd491  FNSTSW AX
004bd493  TEST AH,0x41
004bd496  JZ 0x004bd4b7
004bd498  FSTP ST0
004bd49a  FLD float ptr [ESP + 0x24]
004bd49e  FSUB float ptr [0x00895074]
004bd4a4  FLD float ptr [ESP + 0x24]
004bd4a8  FCOMP
004bd4aa  FNSTSW AX
004bd4ac  TEST AH,0x5
004bd4af  JNP 0x004bd4b7
004bd4b1  FSTP ST0
004bd4b3  FLD float ptr [ESP + 0x24]
004bd4b7  LEA EAX,[ECX + 0x1770]
004bd4bd  FSTP float ptr [ESI + 0xc8]
004bd4c3  CMP ECX,EAX
004bd4c5  JG 0x004bd4d1
004bd4c7  LEA EAX,[ECX + 0xffffe890]
004bd4cd  CMP ECX,EAX
004bd4cf  JGE 0x004bd4d3
004bd4d1  MOV ECX,EAX
004bd4d3  MOV dword ptr [ESI + 0xcc],ECX
004bd4d9  JMP 0x004bd4fa
004bd4db  MOV EAX,dword ptr [ESP + 0x1c]
004bd4df  LEA EBX,[ESI + 0xc0]
004bd4e5  MOV EDX,EBX
004bd4e7  MOV dword ptr [EDX],EAX
004bd4e9  MOV EAX,dword ptr [ESP + 0x20]
004bd4ed  MOV dword ptr [EDX + 0x4],EAX
004bd4f0  MOV EAX,dword ptr [ESP + 0x24]
004bd4f4  MOV dword ptr [EDX + 0x8],EAX
004bd4f7  MOV dword ptr [EDX + 0xc],ECX
004bd4fa  FILD dword ptr [ESI + 0xcc]
004bd500  PUSH 0x1
004bd502  FMUL float ptr [0x008970d8]
004bd508  FMUL float ptr [0x008969bc]
004bd50e  CALL 0x007c4b80
004bd513  PUSH EAX
004bd514  PUSH 0x7
004bd516  CALL 0x004e42a0
004bd51b  MOV EDX,dword ptr [ESI + 0x28]
004bd51e  MOV ECX,0x61a8
004bd523  SUB ECX,EAX
004bd525  MOV EAX,dword ptr [ESI + 0x18]
004bd528  MOV dword ptr [ESP + 0x24],ECX
004bd52c  FILD dword ptr [ESP + 0x24]
004bd530  ADD ESP,0xc
004bd533  FSTP float ptr [ESI + 0x7c]
004bd536  MOV EDI,dword ptr [EAX + 0xd8]
004bd53c  FILD dword ptr [EDX + 0xd0]
004bd542  MOV EAX,dword ptr [EDI + 0x84]
004bd548  TEST EAX,EAX
004bd54a  FMUL float ptr [0x00896ab8]
004bd550  FILD dword ptr [EDI + 0x84]
004bd556  JGE 0x004bd55e
004bd558  FADD float ptr [0x00891214]
004bd55e  FMUL ST1
004bd560  FMUL float ptr [EBX]
004bd562  CALL 0x007c4b80
004bd567  FILD dword ptr [EDI + 0x74]
004bd56a  MOV ECX,dword ptr [EDI + 0x74]
004bd56d  TEST ECX,ECX
004bd56f  MOV EBP,EAX
004bd571  JGE 0x004bd579
004bd573  FADD float ptr [0x00891214]
004bd579  FMUL float ptr [ESI + 0xc4]
004bd57f  FMUL ST1
004bd581  CALL 0x007c4b80
004bd586  FILD dword ptr [EDI + 0x5c]
004bd589  MOV EDX,dword ptr [EDI + 0x5c]
004bd58c  TEST EDX,EDX
004bd58e  MOV EBX,EAX
004bd590  JGE 0x004bd598
004bd592  FADD float ptr [0x00891214]
004bd598  FMUL float ptr [ESI + 0xc8]
004bd59e  FMUL ST1
004bd5a0  CALL 0x007c4b80
004bd5a5  MOV CL,byte ptr [ESP + 0x13]
004bd5a9  TEST CL,CL
004bd5ab  JZ 0x004bd608
004bd5ad  MOV ECX,dword ptr [ESI + 0x38]
004bd5b0  LEA EDX,[ECX + 0x1b58]
004bd5b6  CMP EBP,EDX
004bd5b8  JLE 0x004bd5be
004bd5ba  MOV EBP,EDX
004bd5bc  JMP 0x004bd5ca
004bd5be  ADD ECX,0xffffe4a8
004bd5c4  CMP EBP,ECX
004bd5c6  JGE 0x004bd5ca
004bd5c8  MOV EBP,ECX
004bd5ca  MOV ECX,dword ptr [ESI + 0x3c]
004bd5cd  LEA EDX,[ECX + 0x1b58]
004bd5d3  CMP EBX,EDX
004bd5d5  MOV dword ptr [ESI + 0x38],EBP
004bd5d8  JG 0x004bd5e6
004bd5da  LEA EDX,[ECX + 0xffffe4a8]
004bd5e0  CMP EBX,EDX
004bd5e2  JL 0x004bd5e6
004bd5e4  MOV EDX,EBX
004bd5e6  MOV ECX,dword ptr [ESI + 0x40]
004bd5e9  MOV dword ptr [ESI + 0x3c],EDX
004bd5ec  LEA EDX,[ECX + 0x1b58]
004bd5f2  CMP EAX,EDX
004bd5f4  JLE 0x004bd5fa
004bd5f6  MOV EAX,EDX
004bd5f8  JMP 0x004bd60e
004bd5fa  ADD ECX,0xffffe4a8
004bd600  CMP EAX,ECX
004bd602  JGE 0x004bd60e
004bd604  MOV EAX,ECX
004bd606  JMP 0x004bd60e
004bd608  MOV dword ptr [ESI + 0x38],EBP
004bd60b  MOV dword ptr [ESI + 0x3c],EBX
004bd60e  MOV dword ptr [ESI + 0x40],EAX
004bd611  MOV EAX,dword ptr [ESI + 0x18]
004bd614  MOV EAX,dword ptr [EAX + 0xd8]
004bd61a  MOV ECX,dword ptr [EAX + 0x84]
004bd620  FILD dword ptr [EAX + 0x84]
004bd626  TEST ECX,ECX
004bd628  JGE 0x004bd630
004bd62a  FADD float ptr [0x00891214]
004bd630  FMUL ST1
004bd632  CALL 0x007c4b80
004bd637  FSTP ST0
004bd639  POP EDI
004bd63a  MOV dword ptr [ESI + 0x74],EAX
004bd63d  POP ESI
004bd63e  POP EBP
004bd63f  POP EBX
004bd640  ADD ESP,0x58
004bd643  RET 0x4
