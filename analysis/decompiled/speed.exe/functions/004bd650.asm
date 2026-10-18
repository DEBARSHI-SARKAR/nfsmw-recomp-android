004bd650  SUB ESP,0x58
004bd653  FLD double ptr [0x008970e0]
004bd659  PUSH EBX
004bd65a  FABS
004bd65c  PUSH EBP
004bd65d  FCOMP float ptr [0x00896abc]
004bd663  PUSH ESI
004bd664  PUSH EDI
004bd665  MOV ESI,ECX
004bd667  FNSTSW AX
004bd669  MOV dword ptr [ESP + 0x4c],0x0
004bd671  MOV dword ptr [ESP + 0x50],0x3f800000
004bd679  TEST AH,0x5
004bd67c  MOV dword ptr [ESP + 0x54],0x0
004bd684  MOV dword ptr [ESP + 0x58],0x420c0000
004bd68c  JP 0x004bd696
004bd68e  MOV dword ptr [ESP + 0x58],0x420c0000
004bd696  MOV ECX,dword ptr [ESI + 0x28]
004bd699  MOV EAX,dword ptr [ECX]
004bd69b  MOV dword ptr [ESP + 0x60],0x0
004bd6a3  CALL dword ptr [EAX + 0x4c]
004bd6a6  FSTP float ptr [ESP + 0x5c]
004bd6aa  LEA ECX,[ESP + 0x4c]
004bd6ae  CALL 0x004b0720
004bd6b3  FLD float ptr [ESI + 0x90]
004bd6b9  FADD float ptr [0x00890bf8]
004bd6bf  MOV ECX,dword ptr [ESI + 0x18]
004bd6c2  MOV EDX,dword ptr [ECX + 0xd8]
004bd6c8  MOV EAX,dword ptr [EDX + 0x78]
004bd6cb  FABS
004bd6cd  MOV dword ptr [ESP + 0x14],EAX
004bd6d1  FSTP float ptr [ESP + 0x18]
004bd6d5  MOV byte ptr [ESP + 0x13],0x1
004bd6da  FLD float ptr [ESP + 0x14]
004bd6de  FSUB float ptr [ESP + 0x18]
004bd6e2  FDIV float ptr [ESP + 0x14]
004bd6e6  FSUBR float ptr [0x0089096c]
004bd6ec  FST float ptr [ESI + 0xd0]
004bd6f2  FST float ptr [ESP + 0x14]
004bd6f6  FCOMP float ptr [0x00890968]
004bd6fc  FNSTSW AX
004bd6fe  TEST AH,0x41
004bd701  JNZ 0x004bda38
004bd707  FLD float ptr [ESP + 0x14]
004bd70b  FLD float ptr [0x0089096c]
004bd711  FCOMP float ptr [ESP + 0x14]
004bd715  FNSTSW AX
004bd717  TEST AH,0x5
004bd71a  JP 0x004bd724
004bd71c  FSTP ST0
004bd71e  FLD float ptr [0x0089096c]
004bd724  FST float ptr [ESI + 0xd0]
004bd72a  MOV EAX,dword ptr [ECX + 0xd8]
004bd730  FLD float ptr [EAX + 0x64]
004bd733  FSUB float ptr [ESP + 0x18]
004bd737  FDIV float ptr [EAX + 0x64]
004bd73a  FSUBR float ptr [0x0089096c]
004bd740  FST float ptr [ESI + 0xd4]
004bd746  FST float ptr [ESP + 0x14]
004bd74a  FCOMP float ptr [0x00890968]
004bd750  FNSTSW AX
004bd752  TEST AH,0x41
004bd755  JNZ 0x004bda43
004bd75b  FLD float ptr [ESP + 0x14]
004bd75f  FLD float ptr [0x0089096c]
004bd765  FCOMP float ptr [ESP + 0x14]
004bd769  FNSTSW AX
004bd76b  TEST AH,0x5
004bd76e  JP 0x004bd778
004bd770  FSTP ST0
004bd772  FLD float ptr [0x0089096c]
004bd778  FST float ptr [ESI + 0xd4]
004bd77e  MOV EDX,dword ptr [ECX + 0x5c]
004bd781  MOV AL,byte ptr [EDX + 0xb4]
004bd787  TEST AL,AL
004bd789  JNZ 0x004bd7d1
004bd78b  MOV EAX,dword ptr [ESI + 0x14]
004bd78e  MOV EDX,dword ptr [EAX + 0x34]
004bd791  MOV EAX,dword ptr [EDX + 0x1ec]
004bd797  TEST EAX,EAX
004bd799  JNZ 0x004bda58
004bd79f  MOV EAX,dword ptr [ESI + 0x2c]
004bd7a2  MOV EAX,dword ptr [EAX + 0x38]
004bd7a5  CMP EAX,0x3
004bd7a8  JZ 0x004bda58
004bd7ae  TEST EAX,EAX
004bd7b0  JNZ 0x004bda58
004bd7b6  MOV EAX,dword ptr [ESI + 0x30]
004bd7b9  MOV EAX,dword ptr [EAX + 0x84]
004bd7bf  TEST EAX,EAX
004bd7c1  JZ 0x004bda4e
004bd7c7  CMP EAX,0x1
004bd7ca  JNZ 0x004bd7d1
004bd7cc  MOV byte ptr [ESP + 0x13],0x0
004bd7d1  MOV EAX,dword ptr [ECX + 0xd8]
004bd7d7  FLD float ptr [EAX + 0x70]
004bd7da  MOV ECX,dword ptr [ESI + 0xb8]
004bd7e0  FSUB float ptr [EAX + 0x68]
004bd7e3  LEA EDI,[ESI + 0x44]
004bd7e6  PUSH ECX
004bd7e7  MOV ECX,EDI
004bd7e9  FMUL ST2
004bd7eb  FADD float ptr [EAX + 0x68]
004bd7ee  FSTP float ptr [ESP + 0x40]
004bd7f2  FLD float ptr [EAX + 0x90]
004bd7f8  FSUB float ptr [EAX + 0x7c]
004bd7fb  FMUL ST2
004bd7fd  FADD float ptr [EAX + 0x7c]
004bd800  FSTP float ptr [ESP + 0x44]
004bd804  FLD float ptr [EAX + 0x88]
004bd80a  FSUB float ptr [EAX + 0x8c]
004bd810  FMUL ST1
004bd812  FADD float ptr [EAX + 0x8c]
004bd818  FSTP float ptr [ESP + 0x20]
004bd81c  FLD float ptr [EAX + 0x80]
004bd822  FSUB float ptr [EAX + 0x48]
004bd825  FMUL ST1
004bd827  FADD float ptr [EAX + 0x48]
004bd82a  FSTP float ptr [ESP + 0x28]
004bd82e  FSTP ST0
004bd830  FSTP ST0
004bd832  CALL 0x00653790
004bd837  FSUBR float ptr [0x0089096c]
004bd83d  MOV EDX,dword ptr [ESI + 0xb8]
004bd843  PUSH EDX
004bd844  MOV ECX,EDI
004bd846  FSTP float ptr [ESP + 0x1c]
004bd84a  CALL 0x00653790
004bd84f  FMUL float ptr [ESP + 0x1c]
004bd853  MOV EAX,dword ptr [ESI + 0xb8]
004bd859  PUSH EAX
004bd85a  FADD float ptr [ESP + 0x1c]
004bd85e  MOV ECX,EDI
004bd860  FSTP float ptr [ESP + 0x20]
004bd864  CALL 0x00653790
004bd869  MOV EAX,dword ptr [ESI + 0x18]
004bd86c  FMUL float ptr [ESP + 0x24]
004bd870  MOV EDI,dword ptr [EAX + 0xd8]
004bd876  PUSH 0x0
004bd878  LEA ECX,[EAX + 0xd0]
004bd87e  FSTP float ptr [ESP + 0x28]
004bd882  PUSH 0x38afe02e
004bd887  CALL 0x00454810
004bd88c  TEST EAX,EAX
004bd88e  JNZ 0x004bd89a
004bd890  PUSH 0x4
004bd892  CALL 0x006269b0
004bd897  ADD ESP,0x4
004bd89a  FLD float ptr [EDI + 0x6c]
004bd89d  MOV ECX,dword ptr [ESI + 0x18]
004bd8a0  FSUB float ptr [EDI + 0x6c]
004bd8a3  PUSH 0x0
004bd8a5  ADD ECX,0xd0
004bd8ab  PUSH 0xe3836473
004bd8b0  FMUL float ptr [ESI + 0xd4]
004bd8b6  FADD float ptr [EAX]
004bd8b8  FSTP float ptr [ESP + 0x28]
004bd8bc  CALL 0x00454810
004bd8c1  TEST EAX,EAX
004bd8c3  JNZ 0x004bd8cf
004bd8c5  PUSH 0x4
004bd8c7  CALL 0x006269b0
004bd8cc  ADD ESP,0x4
004bd8cf  MOV ECX,dword ptr [ESI + 0x28]
004bd8d2  MOV EAX,dword ptr [EAX]
004bd8d4  MOV ECX,dword ptr [ECX + 0x134]
004bd8da  CMP EAX,ECX
004bd8dc  MOV dword ptr [ESP + 0x28],EAX
004bd8e0  JL 0x004bd8e6
004bd8e2  MOV dword ptr [ESP + 0x28],ECX
004bd8e6  FLD float ptr [ESP + 0x3c]
004bd8ea  FSUB float ptr [ESP + 0x1c]
004bd8ee  FMUL float ptr [ESP + 0x60]
004bd8f2  FADD float ptr [ESP + 0x1c]
004bd8f6  FSTP float ptr [ESP + 0x2c]
004bd8fa  FLD float ptr [ESP + 0x24]
004bd8fe  FCHS
004bd900  FMUL float ptr [ESP + 0x60]
004bd904  FADD float ptr [ESP + 0x24]
004bd908  FSTP float ptr [ESP + 0x34]
004bd90c  FLD float ptr [ESP + 0x40]
004bd910  FSUB float ptr [ESP + 0x20]
004bd914  FMUL float ptr [ESP + 0x60]
004bd918  FADD float ptr [ESP + 0x20]
004bd91c  FSTP float ptr [ESP + 0x30]
004bd920  FILD dword ptr [ESP + 0x28]
004bd924  FLD float ptr [0x008970e8]
004bd92a  FSUB ST0,ST1
004bd92c  FMUL float ptr [ESP + 0x60]
004bd930  FADD ST0,ST1
004bd932  CALL 0x007c4b80
004bd937  FSTP ST0
004bd939  MOV ECX,EAX
004bd93b  MOV AL,byte ptr [ESP + 0x13]
004bd93f  TEST AL,AL
004bd941  MOV byte ptr [ESI + 0x80],0x0
004bd948  LEA EBX,[ESI + 0xc0]
004bd94e  JZ 0x004bda89
004bd954  MOV EDX,dword ptr [EBX]
004bd956  MOV dword ptr [ESP + 0x18],EDX
004bd95a  FLD float ptr [ESP + 0x18]
004bd95e  FADD float ptr [0x00895074]
004bd964  FLD float ptr [ESP + 0x2c]
004bd968  FCOMP
004bd96a  FNSTSW AX
004bd96c  TEST AH,0x41
004bd96f  JZ 0x004bd990
004bd971  FSTP ST0
004bd973  FLD float ptr [ESP + 0x18]
004bd977  FSUB float ptr [0x00895074]
004bd97d  FLD float ptr [ESP + 0x2c]
004bd981  FCOMP
004bd983  FNSTSW AX
004bd985  TEST AH,0x5
004bd988  JNP 0x004bd990
004bd98a  FSTP ST0
004bd98c  FLD float ptr [ESP + 0x2c]
004bd990  MOV EAX,dword ptr [ESI + 0xc4]
004bd996  FSTP float ptr [EBX]
004bd998  MOV dword ptr [ESP + 0x18],EAX
004bd99c  FLD float ptr [ESP + 0x18]
004bd9a0  FADD float ptr [0x00895074]
004bd9a6  FLD float ptr [ESP + 0x30]
004bd9aa  FCOMP
004bd9ac  FNSTSW AX
004bd9ae  TEST AH,0x41
004bd9b1  JZ 0x004bd9d2
004bd9b3  FSTP ST0
004bd9b5  FLD float ptr [ESP + 0x18]
004bd9b9  FSUB float ptr [0x00895074]
004bd9bf  FLD float ptr [ESP + 0x30]
004bd9c3  FCOMP
004bd9c5  FNSTSW AX
004bd9c7  TEST AH,0x5
004bd9ca  JNP 0x004bd9d2
004bd9cc  FSTP ST0
004bd9ce  FLD float ptr [ESP + 0x30]
004bd9d2  MOV EDX,dword ptr [ESI + 0xc8]
004bd9d8  FSTP float ptr [ESI + 0xc4]
004bd9de  MOV dword ptr [ESP + 0x18],EDX
004bd9e2  FLD float ptr [ESP + 0x18]
004bd9e6  FADD float ptr [0x00895074]
004bd9ec  FLD float ptr [ESP + 0x34]
004bd9f0  FCOMP
004bd9f2  FNSTSW AX
004bd9f4  TEST AH,0x41
004bd9f7  JZ 0x004bda18
004bd9f9  FSTP ST0
004bd9fb  FLD float ptr [ESP + 0x18]
004bd9ff  FSUB float ptr [0x00895074]
004bda05  FLD float ptr [ESP + 0x34]
004bda09  FCOMP
004bda0b  FNSTSW AX
004bda0d  TEST AH,0x5
004bda10  JNP 0x004bda18
004bda12  FSTP ST0
004bda14  FLD float ptr [ESP + 0x34]
004bda18  MOV EAX,dword ptr [ESI + 0xcc]
004bda1e  FSTP float ptr [ESI + 0xc8]
004bda24  LEA EDX,[EAX + 0x1770]
004bda2a  CMP ECX,EDX
004bda2c  JLE 0x004bda76
004bda2e  MOV ECX,EDX
004bda30  MOV dword ptr [ESI + 0xcc],ECX
004bda36  JMP 0x004bdaa2
004bda38  FLD float ptr [0x00890968]
004bda3e  JMP 0x004bd724
004bda43  FLD float ptr [0x00890968]
004bda49  JMP 0x004bd778
004bda4e  MOV byte ptr [ESP + 0x13],0x1
004bda53  JMP 0x004bd7d1
004bda58  MOV EDX,dword ptr [ESI + 0x2c]
004bda5b  MOV EAX,dword ptr [EDX + 0x38]
004bda5e  DEC EAX
004bda5f  CMP EAX,0x6
004bda62  JA 0x004bd7d1
004bda68  MOVZX EAX,byte ptr [EAX + 0x4bdc24]
004bda6f  JMP dword ptr [EAX*0x4 + 0x4bdc1c]
004bda76  ADD EAX,0xffffe890
004bda7b  CMP ECX,EAX
004bda7d  JGE 0x004bda81
004bda7f  MOV ECX,EAX
004bda81  MOV dword ptr [ESI + 0xcc],ECX
004bda87  JMP 0x004bdaa2
004bda89  MOV EDX,dword ptr [ESP + 0x2c]
004bda8d  MOV EAX,EBX
004bda8f  MOV dword ptr [EAX],EDX
004bda91  MOV EDX,dword ptr [ESP + 0x30]
004bda95  MOV dword ptr [EAX + 0x4],EDX
004bda98  MOV EDX,dword ptr [ESP + 0x34]
004bda9c  MOV dword ptr [EAX + 0x8],EDX
004bda9f  MOV dword ptr [EAX + 0xc],ECX
004bdaa2  MOV EAX,dword ptr [ESI + 0xcc]
004bdaa8  PUSH 0x1
004bdaaa  PUSH EAX
004bdaab  PUSH 0x7
004bdaad  CALL 0x004e42a0
004bdab2  MOV EDX,dword ptr [ESI + 0xcc]
004bdab8  MOV dword ptr [ESP + 0x24],EAX
004bdabc  FILD dword ptr [ESP + 0x24]
004bdac0  MOV EAX,dword ptr [ESI + 0x28]
004bdac3  ADD ESP,0xc
004bdac6  MOV dword ptr [ESP + 0x18],EDX
004bdaca  FSTP float ptr [ESI + 0x7c]
004bdacd  MOV ECX,dword ptr [EAX + 0x134]
004bdad3  CMP EDX,ECX
004bdad5  JL 0x004bdadb
004bdad7  MOV dword ptr [ESP + 0x18],ECX
004bdadb  FILD dword ptr [ESP + 0x18]
004bdadf  FSTP float ptr [ESI + 0x7c]
004bdae2  FILD dword ptr [EAX + 0xd0]
004bdae8  MOV EAX,dword ptr [ESI + 0x18]
004bdaeb  MOV EDI,dword ptr [EAX + 0xd8]
004bdaf1  MOV ECX,dword ptr [EDI + 0x44]
004bdaf4  TEST ECX,ECX
004bdaf6  FMUL float ptr [0x00896ab8]
004bdafc  FILD dword ptr [EDI + 0x44]
004bdaff  JGE 0x004bdb07
004bdb01  FADD float ptr [0x00891214]
004bdb07  MOV EDX,dword ptr [EDI + 0x84]
004bdb0d  FILD dword ptr [EDI + 0x84]
004bdb13  TEST EDX,EDX
004bdb15  JGE 0x004bdb1d
004bdb17  FADD float ptr [0x00891214]
004bdb1d  FSUB ST0,ST1
004bdb1f  FMUL float ptr [ESP + 0x60]
004bdb23  FADD ST0,ST1
004bdb25  CALL 0x007c4b80
004bdb2a  FSTP ST0
004bdb2c  MOV dword ptr [ESP + 0x18],EAX
004bdb30  FILD dword ptr [ESP + 0x18]
004bdb34  FMUL ST1
004bdb36  FMUL float ptr [EBX]
004bdb38  CALL 0x007c4b80
004bdb3d  FILD dword ptr [EDI + 0x74]
004bdb40  MOV EBP,EAX
004bdb42  MOV EAX,dword ptr [EDI + 0x74]
004bdb45  TEST EAX,EAX
004bdb47  JGE 0x004bdb4f
004bdb49  FADD float ptr [0x00891214]
004bdb4f  FMUL float ptr [ESI + 0xc4]
004bdb55  FMUL ST1
004bdb57  CALL 0x007c4b80
004bdb5c  FILD dword ptr [EDI + 0x5c]
004bdb5f  MOV ECX,dword ptr [EDI + 0x5c]
004bdb62  TEST ECX,ECX
004bdb64  MOV EBX,EAX
004bdb66  JGE 0x004bdb6e
004bdb68  FADD float ptr [0x00891214]
004bdb6e  FMUL float ptr [ESI + 0xc8]
004bdb74  FMUL ST1
004bdb76  CALL 0x007c4b80
004bdb7b  MOV CL,byte ptr [ESP + 0x13]
004bdb7f  TEST CL,CL
004bdb81  JZ 0x004bdbde
004bdb83  MOV ECX,dword ptr [ESI + 0x38]
004bdb86  LEA EDX,[ECX + 0x1b58]
004bdb8c  CMP EBP,EDX
004bdb8e  JLE 0x004bdb94
004bdb90  MOV EBP,EDX
004bdb92  JMP 0x004bdba0
004bdb94  ADD ECX,0xffffe4a8
004bdb9a  CMP EBP,ECX
004bdb9c  JGE 0x004bdba0
004bdb9e  MOV EBP,ECX
004bdba0  MOV ECX,dword ptr [ESI + 0x3c]
004bdba3  LEA EDX,[ECX + 0x1b58]
004bdba9  CMP EBX,EDX
004bdbab  MOV dword ptr [ESI + 0x38],EBP
004bdbae  JG 0x004bdbbc
004bdbb0  LEA EDX,[ECX + 0xffffe4a8]
004bdbb6  CMP EBX,EDX
004bdbb8  JL 0x004bdbbc
004bdbba  MOV EDX,EBX
004bdbbc  MOV ECX,dword ptr [ESI + 0x40]
004bdbbf  MOV dword ptr [ESI + 0x3c],EDX
004bdbc2  LEA EDX,[ECX + 0x1b58]
004bdbc8  CMP EAX,EDX
004bdbca  JLE 0x004bdbd0
004bdbcc  MOV EAX,EDX
004bdbce  JMP 0x004bdbe4
004bdbd0  ADD ECX,0xffffe4a8
004bdbd6  CMP EAX,ECX
004bdbd8  JGE 0x004bdbe4
004bdbda  MOV EAX,ECX
004bdbdc  JMP 0x004bdbe4
004bdbde  MOV dword ptr [ESI + 0x38],EBP
004bdbe1  MOV dword ptr [ESI + 0x3c],EBX
004bdbe4  MOV dword ptr [ESI + 0x40],EAX
004bdbe7  MOV EAX,dword ptr [ESI + 0x18]
004bdbea  MOV EDX,dword ptr [EAX + 0xd8]
004bdbf0  MOV EAX,dword ptr [EDX + 0x84]
004bdbf6  FILD dword ptr [EDX + 0x84]
004bdbfc  TEST EAX,EAX
004bdbfe  JGE 0x004bdc06
004bdc00  FADD float ptr [0x00891214]
004bdc06  FMUL ST1
004bdc08  CALL 0x007c4b80
004bdc0d  FSTP ST0
004bdc0f  POP EDI
004bdc10  MOV dword ptr [ESI + 0x74],EAX
004bdc13  POP ESI
004bdc14  POP EBP
004bdc15  POP EBX
004bdc16  ADD ESP,0x58
004bdc19  RET 0x4
