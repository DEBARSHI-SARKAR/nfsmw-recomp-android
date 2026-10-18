004be4a0  PUSH EBP
004be4a1  MOV EBP,ESP
004be4a3  AND ESP,0xfffffff0
004be4a6  SUB ESP,0x64
004be4a9  PUSH EBX
004be4aa  PUSH ESI
004be4ab  MOV ESI,ECX
004be4ad  FLD float ptr [ESI + 0x54]
004be4b0  XOR EBX,EBX
004be4b2  FSUB float ptr [EBP + 0x8]
004be4b5  PUSH EDI
004be4b6  MOV byte ptr [ESI + 0x3c],BL
004be4b9  MOV byte ptr [ESI + 0x5c],BL
004be4bc  FST float ptr [ESI + 0x54]
004be4bf  FCOMP float ptr [0x00890968]
004be4c5  FNSTSW AX
004be4c7  TEST AH,0x5
004be4ca  JP 0x004be4cf
004be4cc  MOV dword ptr [ESI + 0x54],EBX
004be4cf  FLD float ptr [ESI + 0x64]
004be4d2  FSUB float ptr [EBP + 0x8]
004be4d5  FST float ptr [ESI + 0x64]
004be4d8  FCOMP float ptr [0x00890968]
004be4de  FNSTSW AX
004be4e0  TEST AH,0x5
004be4e3  JP 0x004be4e8
004be4e5  MOV dword ptr [ESI + 0x64],EBX
004be4e8  MOV EAX,dword ptr [ESI + 0x18]
004be4eb  MOV dword ptr [ESI + 0x34],EBX
004be4ee  MOV EDI,dword ptr [EAX + 0x34]
004be4f1  FLD float ptr [EDI + 0x14]
004be4f4  MOV ECX,dword ptr [EDI + 0x10]
004be4f7  LEA EDX,[ESP + 0x28]
004be4fb  FSTP float ptr [ESP + 0x2c]
004be4ff  PUSH EDX
004be500  LEA EAX,[ESP + 0x24]
004be504  PUSH EAX
004be505  MOV dword ptr [ESP + 0x30],ECX
004be509  CALL 0x0045f3c0
004be50e  MOV ECX,dword ptr [ESP + 0x28]
004be512  MOV EAX,dword ptr [ESI + 0x18]
004be515  MOV EDX,dword ptr [ESP + 0x2c]
004be519  MOV dword ptr [ESP + 0x20],ECX
004be51d  MOV ECX,dword ptr [EAX + 0x34]
004be520  FLD float ptr [ECX + 0xa4]
004be526  MOV dword ptr [ESP + 0x24],EDX
004be52a  FMUL float ptr [0x0089655c]
004be530  ADD ESP,0x8
004be533  FLD float ptr [ESP + 0x18]
004be537  PUSH 0x3
004be539  FMUL ST1
004be53b  FSTP float ptr [ESP + 0x24]
004be53f  MOV EDX,dword ptr [ESP + 0x24]
004be543  FLD float ptr [ESP + 0x20]
004be547  MOV dword ptr [ESP + 0x1c],EDX
004be54b  FMUL ST1
004be54d  FSTP float ptr [ESP + 0x28]
004be551  MOV EAX,dword ptr [ESP + 0x28]
004be555  MOV dword ptr [ESP + 0x20],EAX
004be559  MOV EAX,dword ptr [ESI + 0x14]
004be55c  FSTP ST0
004be55e  FLD float ptr [ESP + 0x1c]
004be562  FADD float ptr [EDI + 0x40]
004be565  FSTP float ptr [ESP + 0x24]
004be569  MOV ECX,dword ptr [ESP + 0x24]
004be56d  FLD float ptr [ESP + 0x20]
004be571  MOV dword ptr [ESP + 0x1c],ECX
004be575  FADD float ptr [EDI + 0x44]
004be578  MOV ECX,dword ptr [EAX + 0x34]
004be57b  FSTP float ptr [ESP + 0x28]
004be57f  MOV EDX,dword ptr [ESP + 0x28]
004be583  FLD float ptr [ECX + 0x48]
004be586  MOV dword ptr [ESP + 0x20],EDX
004be58a  MOV EDX,dword ptr [ESP + 0x1c]
004be58e  FSTP float ptr [ESP + 0x3c]
004be592  MOV EAX,dword ptr [ESP + 0x20]
004be596  LEA ECX,[ESP + 0x34]
004be59a  PUSH ECX
004be59b  MOV ECX,ESI
004be59d  MOV dword ptr [ESP + 0x38],EDX
004be5a1  MOV dword ptr [ESP + 0x3c],EAX
004be5a5  MOV dword ptr [ESI + 0x34],0x3
004be5ac  CALL 0x004b5620
004be5b1  MOV EDI,EAX
004be5b3  CMP EDI,EBX
004be5b5  JNZ 0x004be5f0
004be5b7  PUSH 0x4
004be5b9  LEA EDX,[ESP + 0x34]
004be5bd  PUSH EDX
004be5be  MOV ECX,ESI
004be5c0  MOV dword ptr [ESI + 0x34],0x4
004be5c7  CALL 0x004b5620
004be5cc  MOV EDI,EAX
004be5ce  CMP EDI,EBX
004be5d0  JNZ 0x004be5f0
004be5d2  PUSH 0x5
004be5d4  LEA EAX,[ESP + 0x34]
004be5d8  PUSH EAX
004be5d9  MOV ECX,ESI
004be5db  MOV dword ptr [ESI + 0x34],0x5
004be5e2  CALL 0x004b5620
004be5e7  MOV EDI,EAX
004be5e9  CMP EDI,EBX
004be5eb  JNZ 0x004be5f0
004be5ed  MOV dword ptr [ESI + 0x34],EBX
004be5f0  CMP byte ptr [ESI + 0x28],BL
004be5f3  JNZ 0x004be785
004be5f9  CMP dword ptr [ESI + 0x34],EBX
004be5fc  JZ 0x004be77c
004be602  FLD float ptr [ESI + 0x54]
004be605  FCOMP float ptr [0x00890dc4]
004be60b  FNSTSW AX
004be60d  TEST AH,0x5
004be610  JP 0x004be617
004be612  CMP dword ptr [ESI + 0x58],EDI
004be615  JZ 0x004be620
004be617  CMP dword ptr [ESI + 0x58],EDI
004be61a  JZ 0x004be77c
004be620  MOV ECX,dword ptr [ESI + 0x18]
004be623  MOV EAX,dword ptr [ECX + 0x34]
004be626  FLD float ptr [EAX + 0x58]
004be629  ADD EAX,0x50
004be62c  FLD float ptr [EAX + 0x4]
004be62f  MOV ECX,0x914900
004be634  FLD float ptr [EAX]
004be636  FLD ST0
004be638  FMUL ST1
004be63a  FLD ST2
004be63c  FMUL ST3
004be63e  FADDP
004be640  FLD ST3
004be642  FMUL ST4
004be644  FADDP
004be646  FSQRT
004be648  FSTP ST3
004be64a  FSTP ST0
004be64c  FSTP ST0
004be64e  FSTP float ptr [0x00914910]
004be654  CALL 0x004b0720
004be659  FLD float ptr [0x00914914]
004be65f  FCOMP float ptr [0x00890dc4]
004be665  FNSTSW AX
004be667  TEST AH,0x41
004be66a  JNZ 0x004be77c
004be670  MOV EDX,dword ptr [ESI + 0x18]
004be673  MOV ECX,dword ptr [ESP + 0x30]
004be677  MOV byte ptr [ESI + 0x3c],0x1
004be67b  MOV dword ptr [ESI + 0x58],EDI
004be67e  MOV dword ptr [ESI + 0x54],0x40400000
004be685  MOV EAX,dword ptr [EDX + 0x34]
004be688  FLD float ptr [EAX + 0x48]
004be68b  MOV EDX,dword ptr [ESP + 0x34]
004be68f  FADD float ptr [0x00890bf8]
004be695  MOV dword ptr [ESI + 0x40],ECX
004be698  MOV dword ptr [ESI + 0x44],EDX
004be69b  MOV ECX,0x914900
004be6a0  FSTP float ptr [ESI + 0x48]
004be6a3  MOV EAX,dword ptr [ESI + 0x18]
004be6a6  MOV EAX,dword ptr [EAX + 0x34]
004be6a9  FLD float ptr [EAX + 0x58]
004be6ac  ADD EAX,0x50
004be6af  FLD float ptr [EAX + 0x4]
004be6b2  FLD float ptr [EAX]
004be6b4  FLD ST0
004be6b6  FMUL ST1
004be6b8  FLD ST2
004be6ba  FMUL ST3
004be6bc  FADDP
004be6be  FLD ST3
004be6c0  FMUL ST4
004be6c2  FADDP
004be6c4  FSQRT
004be6c6  FSTP ST3
004be6c8  FSTP ST0
004be6ca  FSTP ST0
004be6cc  FSTP float ptr [0x00914910]
004be6d2  CALL 0x004b0720
004be6d7  MOV ECX,dword ptr [0x00914914]
004be6dd  MOV EDX,dword ptr [ESI + 0x18]
004be6e0  MOV EAX,dword ptr [ESI + 0x14]
004be6e3  MOV dword ptr [ESI + 0x50],ECX
004be6e6  MOV dword ptr [ESP + 0x48],0x0
004be6ee  MOV dword ptr [ESP + 0x50],0x0
004be6f6  MOV dword ptr [ESP + 0x54],0x0
004be6fe  MOV dword ptr [ESP + 0x58],0x0
004be706  MOV dword ptr [ESP + 0x60],EBX
004be70a  MOV dword ptr [ESP + 0x44],EDX
004be70e  MOV dword ptr [ESP + 0x40],0x4
004be716  MOV EAX,dword ptr [EAX + 0x34]
004be719  FLD float ptr [EAX + 0x58]
004be71c  ADD EAX,0x50
004be71f  FLD float ptr [EAX + 0x4]
004be722  MOV ECX,dword ptr [ESI + 0x58]
004be725  FLD float ptr [EAX]
004be727  MOV EAX,dword ptr [ESI + 0x44]
004be72a  FLD ST0
004be72c  MOV EDX,dword ptr [ESI + 0x40]
004be72f  FMUL ST1
004be731  MOV dword ptr [ESP + 0x60],ECX
004be735  FLD ST2
004be737  MOV ECX,dword ptr [ESI + 0x48]
004be73a  FMUL ST3
004be73c  MOV dword ptr [ESP + 0x54],EAX
004be740  MOV dword ptr [ESP + 0x58],ECX
004be744  MOV ECX,dword ptr [0x00911f80]
004be74a  FADDP
004be74c  LEA EAX,[ESP + 0x40]
004be750  FLD ST3
004be752  MOV dword ptr [ESP + 0x50],EDX
004be756  FMUL ST4
004be758  PUSH EAX
004be759  FADDP
004be75b  FSQRT
004be75d  FSTP ST3
004be75f  FSTP ST0
004be761  FSTP ST0
004be763  FSTP float ptr [ESP + 0x4c]
004be767  MOV EDX,dword ptr [ECX]
004be769  CALL dword ptr [EDX + 0xc]
004be76c  CMP EAX,EBX
004be76e  JZ 0x004be77c
004be770  MOV EDX,dword ptr [EAX]
004be772  LEA ECX,[ESP + 0x40]
004be776  PUSH ECX
004be777  MOV ECX,EAX
004be779  CALL dword ptr [EDX + 0xc]
004be77c  CMP byte ptr [ESI + 0x28],BL
004be77f  JZ 0x004be8d3
004be785  CMP dword ptr [ESI + 0x34],EBX
004be788  JNZ 0x004be8d3
004be78e  CMP dword ptr [ESI + 0x38],0x3
004be792  JNZ 0x004be8d3
004be798  FLD float ptr [ESI + 0x64]
004be79b  FCOMP float ptr [0x00890dc4]
004be7a1  FNSTSW AX
004be7a3  TEST AH,0x5
004be7a6  JP 0x004be7ad
004be7a8  CMP dword ptr [ESI + 0x68],EDI
004be7ab  JZ 0x004be7b6
004be7ad  CMP dword ptr [ESI + 0x68],EDI
004be7b0  JZ 0x004be8d3
004be7b6  MOV EDX,dword ptr [ESI + 0x18]
004be7b9  MOV EAX,dword ptr [EDX + 0x34]
004be7bc  FLD float ptr [EAX + 0x58]
004be7bf  ADD EAX,0x50
004be7c2  FLD float ptr [EAX + 0x4]
004be7c5  MOV ECX,0x914900
004be7ca  FLD float ptr [EAX]
004be7cc  FLD ST0
004be7ce  FMUL ST1
004be7d0  FLD ST2
004be7d2  FMUL ST3
004be7d4  FADDP
004be7d6  FLD ST3
004be7d8  FMUL ST4
004be7da  FADDP
004be7dc  FSQRT
004be7de  FSTP ST3
004be7e0  FSTP ST0
004be7e2  FSTP ST0
004be7e4  FSTP float ptr [0x00914910]
004be7ea  CALL 0x004b0720
004be7ef  FLD float ptr [0x00914914]
004be7f5  FCOMP float ptr [0x00890dc4]
004be7fb  FNSTSW AX
004be7fd  TEST AH,0x41
004be800  JNZ 0x004be8d3
004be806  MOV EAX,dword ptr [ESI + 0x18]
004be809  MOV EDX,dword ptr [ESP + 0x30]
004be80d  MOV byte ptr [ESI + 0x5c],0x1
004be811  MOV dword ptr [ESI + 0x64],0x40400000
004be818  MOV dword ptr [ESI + 0x68],EDI
004be81b  MOV ECX,dword ptr [EAX + 0x34]
004be81e  FLD float ptr [ECX + 0x48]
004be821  MOV EAX,dword ptr [ESP + 0x34]
004be825  FADD float ptr [0x00890bf8]
004be82b  MOV dword ptr [ESI + 0x40],EDX
004be82e  MOV dword ptr [ESI + 0x44],EAX
004be831  FSTP float ptr [ESI + 0x48]
004be834  MOV ECX,dword ptr [ESI + 0x18]
004be837  MOV ECX,dword ptr [ECX + 0x34]
004be83a  CALL 0x004ab890
004be83f  FSTP float ptr [0x00914910]
004be845  MOV ECX,0x914900
004be84a  CALL 0x004b0720
004be84f  MOV EDX,dword ptr [0x00914914]
004be855  MOV EAX,dword ptr [ESI + 0x18]
004be858  MOV ECX,dword ptr [ESI + 0x14]
004be85b  MOV dword ptr [ESI + 0x60],EDX
004be85e  MOV dword ptr [ESP + 0x48],0x0
004be866  MOV dword ptr [ESP + 0x50],0x0
004be86e  MOV dword ptr [ESP + 0x54],0x0
004be876  MOV dword ptr [ESP + 0x58],0x0
004be87e  MOV dword ptr [ESP + 0x60],EBX
004be882  MOV dword ptr [ESP + 0x40],0x5
004be88a  MOV dword ptr [ESP + 0x44],EAX
004be88e  MOV ECX,dword ptr [ECX + 0x34]
004be891  CALL 0x004ab890
004be896  FSTP float ptr [ESP + 0x48]
004be89a  MOV EAX,dword ptr [ESI + 0x44]
004be89d  MOV ECX,dword ptr [ESI + 0x48]
004be8a0  MOV EDX,dword ptr [ESI + 0x40]
004be8a3  MOV dword ptr [ESP + 0x54],EAX
004be8a7  MOV dword ptr [ESP + 0x58],ECX
004be8ab  MOV ECX,dword ptr [0x00911f80]
004be8b1  LEA EAX,[ESP + 0x40]
004be8b5  MOV dword ptr [ESP + 0x60],EBX
004be8b9  MOV dword ptr [ESP + 0x50],EDX
004be8bd  MOV EDX,dword ptr [ECX]
004be8bf  PUSH EAX
004be8c0  CALL dword ptr [EDX + 0xc]
004be8c3  CMP EAX,EBX
004be8c5  JZ 0x004be8d3
004be8c7  MOV EDX,dword ptr [EAX]
004be8c9  LEA ECX,[ESP + 0x40]
004be8cd  PUSH ECX
004be8ce  MOV ECX,EAX
004be8d0  CALL dword ptr [EDX + 0xc]
004be8d3  POP EDI
004be8d4  POP ESI
004be8d5  POP EBX
004be8d6  MOV ESP,EBP
004be8d8  POP EBP
004be8d9  RET 0x4
