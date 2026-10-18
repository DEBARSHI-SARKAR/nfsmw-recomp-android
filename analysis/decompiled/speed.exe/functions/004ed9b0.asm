004ed9b0  PUSH EBX
004ed9b1  PUSH ESI
004ed9b2  MOV ESI,ECX
004ed9b4  MOV AL,byte ptr [ESI + 0x8]
004ed9b7  XOR EBX,EBX
004ed9b9  CMP AL,BL
004ed9bb  JZ 0x004edd84
004ed9c1  MOV ECX,dword ptr [ESI + 0x28]
004ed9c4  CMP ECX,EBX
004ed9c6  JZ 0x004edd84
004ed9cc  MOV EAX,dword ptr [ESI + 0x10]
004ed9cf  CMP EAX,EBX
004ed9d1  JZ 0x004ed9e0
004ed9d3  MOV EAX,dword ptr [EAX + 0x8]
004ed9d6  SAR EAX,0x10
004ed9d9  AND EAX,0x7fff
004ed9de  JMP 0x004ed9e2
004ed9e0  XOR EAX,EAX
004ed9e2  CMP EAX,EBX
004ed9e4  JGE 0x004ed9ea
004ed9e6  XOR EAX,EAX
004ed9e8  JMP 0x004ed9f6
004ed9ea  CMP EAX,0x7fff
004ed9ef  JLE 0x004ed9f6
004ed9f1  MOV EAX,0x7fff
004ed9f6  MOV dword ptr [ECX + 0x4],EAX
004ed9f9  MOV EAX,dword ptr [ESI + 0x10]
004ed9fc  CMP EAX,EBX
004ed9fe  JZ 0x004eda0d
004eda00  MOV EAX,dword ptr [EAX + 0xc]
004eda03  SAR EAX,0x10
004eda06  AND EAX,0x7fff
004eda0b  JMP 0x004eda0f
004eda0d  XOR EAX,EAX
004eda0f  CMP EAX,EBX
004eda11  MOV ECX,dword ptr [ESI + 0x28]
004eda14  JGE 0x004eda1a
004eda16  XOR EAX,EAX
004eda18  JMP 0x004eda26
004eda1a  CMP EAX,0x7fff
004eda1f  JLE 0x004eda26
004eda21  MOV EAX,0x7fff
004eda26  MOV dword ptr [ECX + 0x8],EAX
004eda29  MOV EAX,dword ptr [ESI + 0x10]
004eda2c  CMP EAX,EBX
004eda2e  JZ 0x004eda3a
004eda30  MOV EAX,dword ptr [EAX + 0xc]
004eda33  AND EAX,0x7fff
004eda38  JMP 0x004eda3c
004eda3a  XOR EAX,EAX
004eda3c  CMP EAX,EBX
004eda3e  MOV ECX,dword ptr [ESI + 0x28]
004eda41  JGE 0x004eda47
004eda43  XOR EAX,EAX
004eda45  JMP 0x004eda53
004eda47  CMP EAX,0x7fff
004eda4c  JLE 0x004eda53
004eda4e  MOV EAX,0x7fff
004eda53  MOV dword ptr [ECX + 0xc],EAX
004eda56  MOV EAX,dword ptr [ESI + 0x10]
004eda59  CMP EAX,EBX
004eda5b  JZ 0x004eda6a
004eda5d  MOV EAX,dword ptr [EAX + 0x10]
004eda60  SAR EAX,0x10
004eda63  AND EAX,0x7fff
004eda68  JMP 0x004eda6c
004eda6a  XOR EAX,EAX
004eda6c  CMP EAX,EBX
004eda6e  MOV ECX,dword ptr [ESI + 0x28]
004eda71  JGE 0x004eda77
004eda73  XOR EAX,EAX
004eda75  JMP 0x004eda83
004eda77  CMP EAX,0x7fff
004eda7c  JLE 0x004eda83
004eda7e  MOV EAX,0x7fff
004eda83  MOV dword ptr [ECX + 0x58],EAX
004eda86  MOV EAX,dword ptr [ESI + 0x10]
004eda89  CMP EAX,EBX
004eda8b  JZ 0x004edaa0
004eda8d  MOV EAX,dword ptr [EAX + 0x10]
004eda90  AND EAX,0xffff
004eda95  PUSH EAX
004eda96  CALL 0x004ea620
004eda9b  ADD ESP,0x4
004eda9e  JMP 0x004edaa2
004edaa0  XOR EAX,EAX
004edaa2  CMP EAX,0xffffc000
004edaa7  MOV ECX,dword ptr [ESI + 0x28]
004edaaa  JGE 0x004edab3
004edaac  MOV EAX,0xffffc000
004edab1  JMP 0x004edabf
004edab3  CMP EAX,0x4000
004edab8  JLE 0x004edabf
004edaba  MOV EAX,0x4000
004edabf  MOV dword ptr [ECX + 0x18],EAX
004edac2  MOV EAX,dword ptr [ESI + 0x10]
004edac5  CMP EAX,EBX
004edac7  JZ 0x004edae3
004edac9  MOV ECX,dword ptr [0x00911fa8]
004edacf  MOV EDX,dword ptr [ECX + 0x24]
004edad2  CMP dword ptr [EDX + 0x24],EBX
004edad5  MOV EAX,dword ptr [EAX]
004edad7  JZ 0x004edae3
004edad9  SAR EAX,0x10
004edadc  AND EAX,0xffff
004edae1  JMP 0x004edae5
004edae3  XOR EAX,EAX
004edae5  CMP EAX,EBX
004edae7  MOV ECX,dword ptr [ESI + 0x28]
004edaea  JGE 0x004edaf0
004edaec  XOR EAX,EAX
004edaee  JMP 0x004edafc
004edaf0  CMP EAX,0xffff
004edaf5  JLE 0x004edafc
004edaf7  MOV EAX,0xffff
004edafc  PUSH EDI
004edafd  MOV dword ptr [ECX + 0x10],EAX
004edb00  MOV ECX,dword ptr [ESI + 0x38]
004edb03  PUSH EBX
004edb04  ADD ECX,0x8c
004edb0a  PUSH 0xd377b339
004edb0f  CALL 0x00454810
004edb14  CMP EAX,EBX
004edb16  JNZ 0x004edb22
004edb18  PUSH 0x4
004edb1a  CALL 0x006269b0
004edb1f  ADD ESP,0x4
004edb22  MOV ECX,dword ptr [ESI + 0x38]
004edb25  PUSH EBX
004edb26  ADD ECX,0x78
004edb29  PUSH 0xd377b339
004edb2e  MOV EDI,EAX
004edb30  CALL 0x00454810
004edb35  CMP EAX,EBX
004edb37  JNZ 0x004edb43
004edb39  PUSH 0x4
004edb3b  CALL 0x006269b0
004edb40  ADD ESP,0x4
004edb43  MOV ECX,dword ptr [EDI]
004edb45  MOV EAX,dword ptr [EAX]
004edb47  CMP EAX,ECX
004edb49  POP EDI
004edb4a  JA 0x004edb4e
004edb4c  MOV EAX,ECX
004edb4e  CMP EAX,EBX
004edb50  MOV ECX,dword ptr [ESI + 0x28]
004edb53  JGE 0x004edb59
004edb55  XOR EAX,EAX
004edb57  JMP 0x004edb63
004edb59  CMP EAX,0x5
004edb5c  JLE 0x004edb63
004edb5e  MOV EAX,0x5
004edb63  MOV dword ptr [ECX + 0x30],EAX
004edb66  MOV EAX,dword ptr [ESI + 0x14]
004edb69  MOV EAX,dword ptr [EAX + 0x34]
004edb6c  FLD float ptr [EAX + 0x58]
004edb6f  ADD EAX,0x50
004edb72  FLD float ptr [EAX + 0x4]
004edb75  FLD float ptr [EAX]
004edb77  FLD ST0
004edb79  FMUL ST1
004edb7b  FLD ST2
004edb7d  FMUL ST3
004edb7f  FADDP
004edb81  FLD ST3
004edb83  FMUL ST4
004edb85  FADDP
004edb87  FSQRT
004edb89  FSTP ST3
004edb8b  FSTP ST0
004edb8d  FSTP ST0
004edb8f  FMUL float ptr [0x008967e0]
004edb95  CALL 0x007c4b80
004edb9a  CMP EAX,EBX
004edb9c  MOV ECX,dword ptr [ESI + 0x28]
004edb9f  JGE 0x004edba5
004edba1  XOR EAX,EAX
004edba3  JMP 0x004edbb1
004edba5  CMP EAX,0x3e8
004edbaa  JLE 0x004edbb1
004edbac  MOV EAX,0x3e8
004edbb1  MOV dword ptr [ECX + 0x20],EAX
004edbb4  MOV ECX,dword ptr [ESI + 0x14]
004edbb7  MOV EDX,dword ptr [ECX + 0x34]
004edbba  FLD float ptr [EDX + 0x240]
004edbc0  CALL 0x007c4b80
004edbc5  CMP EAX,EBX
004edbc7  MOV ECX,dword ptr [ESI + 0x28]
004edbca  JGE 0x004edbd0
004edbcc  XOR EAX,EAX
004edbce  JMP 0x004edbdc
004edbd0  CMP EAX,0x3ff
004edbd5  JLE 0x004edbdc
004edbd7  MOV EAX,0x3ff
004edbdc  MOV dword ptr [ECX + 0x28],EAX
004edbdf  MOV EAX,dword ptr [ESI + 0x14]
004edbe2  MOV ECX,dword ptr [EAX + 0x34]
004edbe5  FLD float ptr [ECX + 0x23c]
004edbeb  CALL 0x007c4b80
004edbf0  CMP EAX,EBX
004edbf2  MOV ECX,dword ptr [ESI + 0x28]
004edbf5  JGE 0x004edbfb
004edbf7  XOR EAX,EAX
004edbf9  JMP 0x004edc07
004edbfb  CMP EAX,0x3ff
004edc00  JLE 0x004edc07
004edc02  MOV EAX,0x3ff
004edc07  MOV dword ptr [ECX + 0x2c],EAX
004edc0a  MOV EAX,dword ptr [ESI + 0x38]
004edc0d  CMP byte ptr [EAX + 0xf1],BL
004edc13  JNZ 0x004edc46
004edc15  CMP byte ptr [EAX + 0xf0],BL
004edc1b  JNZ 0x004edc46
004edc1d  MOV EAX,dword ptr [ESI + 0x28]
004edc20  MOV dword ptr [EAX + 0x34],EBX
004edc23  MOV EAX,dword ptr [ESI + 0x28]
004edc26  MOV dword ptr [EAX + 0x38],EBX
004edc29  MOV EAX,dword ptr [ESI + 0x28]
004edc2c  MOV dword ptr [EAX + 0x3c],EBX
004edc2f  MOV EAX,dword ptr [ESI + 0x28]
004edc32  MOV dword ptr [EAX + 0x40],EBX
004edc35  MOV EAX,dword ptr [ESI + 0x28]
004edc38  MOV dword ptr [EAX + 0x44],EBX
004edc3b  MOV EAX,dword ptr [ESI + 0x28]
004edc3e  MOV dword ptr [EAX + 0x48],EBX
004edc41  JMP 0x004edd72
004edc46  MOV EAX,dword ptr [ESI + 0x38]
004edc49  FLD float ptr [EAX + 0x30]
004edc4c  FADD float ptr [EAX + 0x28]
004edc4f  FMUL float ptr [0x008933d4]
004edc55  CALL 0x007c4b80
004edc5a  CMP EAX,0xfffffc01
004edc5f  MOV ECX,dword ptr [ESI + 0x28]
004edc62  JGE 0x004edc6b
004edc64  MOV EAX,0xfffffc01
004edc69  JMP 0x004edc77
004edc6b  CMP EAX,0x3ff
004edc70  JLE 0x004edc77
004edc72  MOV EAX,0x3ff
004edc77  MOV dword ptr [ECX + 0x34],EAX
004edc7a  MOV EAX,dword ptr [ESI + 0x38]
004edc7d  FLD float ptr [EAX + 0x34]
004edc80  FADD float ptr [EAX + 0x2c]
004edc83  FMUL float ptr [0x008933d4]
004edc89  CALL 0x007c4b80
004edc8e  CMP EAX,0xfffffc01
004edc93  MOV ECX,dword ptr [ESI + 0x28]
004edc96  JGE 0x004edc9f
004edc98  MOV EAX,0xfffffc01
004edc9d  JMP 0x004edcab
004edc9f  CMP EAX,0x3ff
004edca4  JLE 0x004edcab
004edca6  MOV EAX,0x3ff
004edcab  MOV dword ptr [ECX + 0x38],EAX
004edcae  MOV EAX,dword ptr [ESI + 0x38]
004edcb1  FLD float ptr [EAX + 0x6c]
004edcb4  FADD float ptr [EAX + 0x68]
004edcb7  FMUL float ptr [0x008933d4]
004edcbd  CALL 0x007c4b80
004edcc2  CMP EAX,EBX
004edcc4  MOV ECX,dword ptr [ESI + 0x28]
004edcc7  JGE 0x004edccd
004edcc9  XOR EAX,EAX
004edccb  JMP 0x004edcd9
004edccd  CMP EAX,0x3ff
004edcd2  JLE 0x004edcd9
004edcd4  MOV EAX,0x3ff
004edcd9  MOV dword ptr [ECX + 0x3c],EAX
004edcdc  MOV EAX,dword ptr [ESI + 0x38]
004edcdf  FLD float ptr [EAX + 0x40]
004edce2  FADD float ptr [EAX + 0x38]
004edce5  FMUL float ptr [0x008933d4]
004edceb  CALL 0x007c4b80
004edcf0  CMP EAX,0xfffffc01
004edcf5  MOV ECX,dword ptr [ESI + 0x28]
004edcf8  JGE 0x004edd01
004edcfa  MOV EAX,0xfffffc01
004edcff  JMP 0x004edd0d
004edd01  CMP EAX,0x3ff
004edd06  JLE 0x004edd0d
004edd08  MOV EAX,0x3ff
004edd0d  MOV dword ptr [ECX + 0x40],EAX
004edd10  MOV EAX,dword ptr [ESI + 0x38]
004edd13  FLD float ptr [EAX + 0x44]
004edd16  FADD float ptr [EAX + 0x3c]
004edd19  FMUL float ptr [0x008933d4]
004edd1f  CALL 0x007c4b80
004edd24  CMP EAX,0xfffffc01
004edd29  MOV ECX,dword ptr [ESI + 0x28]
004edd2c  JGE 0x004edd35
004edd2e  MOV EAX,0xfffffc01
004edd33  JMP 0x004edd41
004edd35  CMP EAX,0x3ff
004edd3a  JLE 0x004edd41
004edd3c  MOV EAX,0x3ff
004edd41  MOV dword ptr [ECX + 0x44],EAX
004edd44  MOV EAX,dword ptr [ESI + 0x38]
004edd47  FLD float ptr [EAX + 0x74]
004edd4a  FADD float ptr [EAX + 0x70]
004edd4d  FMUL float ptr [0x008933d4]
004edd53  CALL 0x007c4b80
004edd58  CMP EAX,EBX
004edd5a  MOV ECX,dword ptr [ESI + 0x28]
004edd5d  JGE 0x004edd63
004edd5f  XOR EAX,EAX
004edd61  JMP 0x004edd6f
004edd63  CMP EAX,0x3ff
004edd68  JLE 0x004edd6f
004edd6a  MOV EAX,0x3ff
004edd6f  MOV dword ptr [ECX + 0x48],EAX
004edd72  MOV ESI,dword ptr [ESI + 0x28]
004edd75  MOV ECX,dword ptr [ESI]
004edd77  CMP ECX,EBX
004edd79  JZ 0x004edd84
004edd7b  ADD ESI,0x4
004edd7e  PUSH ESI
004edd7f  CALL 0x0083179c
004edd84  POP ESI
004edd85  POP EBX
004edd86  RET
