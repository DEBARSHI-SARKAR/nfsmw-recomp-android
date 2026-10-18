004ecb20  PUSH -0x1
004ecb22  MOV EAX,FS:[0x0]
004ecb28  PUSH 0x86d20b
004ecb2d  PUSH EAX
004ecb2e  MOV dword ptr FS:[0x0],ESP
004ecb35  SUB ESP,0x8
004ecb38  PUSH EBX
004ecb39  PUSH EBP
004ecb3a  PUSH ESI
004ecb3b  MOV EBP,ECX
004ecb3d  MOV ESI,dword ptr [EBP + 0x48]
004ecb40  MOV EAX,dword ptr [ESI + 0x38]
004ecb43  CMP EAX,0x1
004ecb46  PUSH EDI
004ecb47  JZ 0x004ecb53
004ecb49  CMP EAX,0x2
004ecb4c  JZ 0x004ecb53
004ecb4e  CMP EAX,0x3
004ecb51  JNZ 0x004ecb5e
004ecb53  MOV EAX,dword ptr [EBP + 0x50]
004ecb56  MOV EAX,dword ptr [EAX + 0x8]
004ecb59  MOV EDI,dword ptr [EAX + 0x38]
004ecb5c  JMP 0x004ecb67
004ecb5e  MOV ECX,dword ptr [EBP + 0x50]
004ecb61  MOV EAX,dword ptr [ECX + 0x8]
004ecb64  MOV EDI,dword ptr [EAX + 0x48]
004ecb67  MOV EDX,dword ptr [EBP + 0x18]
004ecb6a  FLD float ptr [EDX + 0x64]
004ecb6d  CALL 0x007c4b80
004ecb72  MOV dword ptr [ESP + 0x10],EAX
004ecb76  FILD dword ptr [ESP + 0x10]
004ecb7a  FSUB float ptr [0x00897d90]
004ecb80  FMUL float ptr [0x00899128]
004ecb86  FST float ptr [ESP + 0x10]
004ecb8a  FCOMP float ptr [0x00890968]
004ecb90  FNSTSW AX
004ecb92  TEST AH,0x41
004ecb95  JNZ 0x004ecc0a
004ecb97  FLD float ptr [ESP + 0x10]
004ecb9b  FLD float ptr [0x0089096c]
004ecba1  FCOMP float ptr [ESP + 0x10]
004ecba5  FNSTSW AX
004ecba7  TEST AH,0x5
004ecbaa  JP 0x004ecbb4
004ecbac  FSTP ST0
004ecbae  FLD float ptr [0x0089096c]
004ecbb4  FMUL float ptr [0x00899124]
004ecbba  FADD float ptr [0x00897db8]
004ecbc0  FMUL float ptr [0x008970a8]
004ecbc6  FADD float ptr [0x008970ac]
004ecbcc  CALL 0x007c4b80
004ecbd1  NEG EAX
004ecbd3  SHL EAX,0x2
004ecbd6  MOV ECX,0x8f1550
004ecbdb  SUB ECX,EAX
004ecbdd  MOV ECX,dword ptr [ECX]
004ecbdf  MOV EAX,dword ptr [ESI + 0x38]
004ecbe2  IMUL ECX,EDI
004ecbe5  SAR ECX,0xf
004ecbe8  CMP EAX,0x1
004ecbeb  JZ 0x004ecbf7
004ecbed  CMP EAX,0x2
004ecbf0  JZ 0x004ecbf7
004ecbf2  CMP EAX,0x3
004ecbf5  JNZ 0x004ecc12
004ecbf7  MOV EAX,dword ptr [EBP + 0x10]
004ecbfa  TEST EAX,EAX
004ecbfc  JZ 0x004ecc23
004ecbfe  MOV EAX,dword ptr [EAX]
004ecc00  SAR EAX,0x10
004ecc03  AND EAX,0x7fff
004ecc08  JMP 0x004ecc25
004ecc0a  FLD float ptr [0x00890968]
004ecc10  JMP 0x004ecbb4
004ecc12  MOV EAX,dword ptr [EBP + 0x10]
004ecc15  TEST EAX,EAX
004ecc17  JZ 0x004ecc23
004ecc19  MOV EAX,dword ptr [EAX + 0x4]
004ecc1c  AND EAX,0x7fff
004ecc21  JMP 0x004ecc25
004ecc23  XOR EAX,EAX
004ecc25  MOV ESI,dword ptr [EBP + 0x28]
004ecc28  IMUL EAX,ECX
004ecc2b  SAR EAX,0xf
004ecc2e  TEST ESI,ESI
004ecc30  MOV dword ptr [ESP + 0x10],EAX
004ecc34  JZ 0x004ecc51
004ecc36  MOV ECX,dword ptr [ESI]
004ecc38  TEST ECX,ECX
004ecc3a  JZ 0x004ecc41
004ecc3c  CALL 0x00831782
004ecc41  PUSH ESI
004ecc42  CALL 0x00831682
004ecc47  ADD ESP,0x4
004ecc4a  MOV dword ptr [EBP + 0x28],0x0
004ecc51  MOV EAX,dword ptr [EBP + 0x48]
004ecc54  MOV EAX,dword ptr [EAX + 0x38]
004ecc57  CMP EAX,0x1
004ecc5a  JZ 0x004ecc6a
004ecc5c  CMP EAX,0x2
004ecc5f  JZ 0x004ecc6a
004ecc61  CMP EAX,0x3
004ecc64  JZ 0x004ecc6a
004ecc66  XOR EAX,EAX
004ecc68  JMP 0x004ecc6f
004ecc6a  MOV EAX,0x1
004ecc6f  MOV ECX,dword ptr [0x00911fa8]
004ecc75  XOR EDX,EDX
004ecc77  TEST AL,AL
004ecc79  MOV EAX,dword ptr [EBP + 0x18]
004ecc7c  MOV EAX,dword ptr [EAX + 0xc4]
004ecc82  SETNZ DL
004ecc85  XOR EBX,EBX
004ecc87  TEST EAX,EAX
004ecc89  PUSH 0x899118
004ecc8e  SETZ BL
004ecc91  MOV EDI,EDX
004ecc93  CALL 0x004ae980
004ecc98  PUSH 0x1c
004ecc9a  CALL 0x00831667
004ecc9f  MOV ESI,EAX
004ecca1  ADD ESP,0x4
004ecca4  MOV dword ptr [ESP + 0x14],ESI
004ecca8  TEST ESI,ESI
004eccaa  MOV dword ptr [ESP + 0x20],0x0
004eccb2  JZ 0x004ecd96
004eccb8  MOV EAX,dword ptr [EBP + 0x10]
004eccbb  TEST EAX,EAX
004eccbd  JZ 0x004eccda
004eccbf  MOV ECX,dword ptr [0x00911fa8]
004eccc5  MOV EDX,dword ptr [ECX + 0x24]
004eccc8  MOV ECX,dword ptr [EDX + 0x24]
004ecccb  TEST ECX,ECX
004ecccd  MOV EAX,dword ptr [EAX]
004ecccf  JZ 0x004eccda
004eccd1  AND EAX,0xffff
004eccd6  MOV ECX,EAX
004eccd8  JMP 0x004eccdc
004eccda  XOR ECX,ECX
004eccdc  TEST EDI,EDI
004eccde  MOV EAX,EDI
004ecce0  JGE 0x004ecce6
004ecce2  XOR EAX,EAX
004ecce4  JMP 0x004eccf0
004ecce6  CMP EDI,0x2
004ecce9  JLE 0x004eccf0
004ecceb  MOV EAX,0x2
004eccf0  LEA EDI,[ESI + 0x4]
004eccf3  MOV dword ptr [EDI],EAX
004eccf5  MOV EAX,dword ptr [ESP + 0x10]
004eccf9  TEST EAX,EAX
004eccfb  JGE 0x004ecd01
004eccfd  XOR EAX,EAX
004eccff  JMP 0x004ecd0d
004ecd01  CMP EAX,0x7fff
004ecd06  JLE 0x004ecd0d
004ecd08  MOV EAX,0x7fff
004ecd0d  TEST ECX,ECX
004ecd0f  MOV dword ptr [ESI + 0x8],EAX
004ecd12  MOV dword ptr [ESI + 0xc],0x1000
004ecd19  MOV EAX,ECX
004ecd1b  JGE 0x004ecd21
004ecd1d  XOR EAX,EAX
004ecd1f  JMP 0x004ecd2e
004ecd21  CMP ECX,0xffff
004ecd27  JLE 0x004ecd2e
004ecd29  MOV EAX,0xffff
004ecd2e  TEST EBX,EBX
004ecd30  MOV dword ptr [ESI + 0x10],EAX
004ecd33  MOV dword ptr [ESI + 0x14],0x0
004ecd3a  MOV EAX,EBX
004ecd3c  JGE 0x004ecd42
004ecd3e  XOR EAX,EAX
004ecd40  JMP 0x004ecd4c
004ecd42  CMP EBX,0x1
004ecd45  JLE 0x004ecd4c
004ecd47  MOV EAX,0x1
004ecd4c  PUSH ESI
004ecd4d  PUSH EDI
004ecd4e  PUSH 0x914874
004ecd53  MOV dword ptr [ESI + 0x18],EAX
004ecd56  CALL 0x00831a8a
004ecd5b  ADD ESP,0xc
004ecd5e  TEST EAX,EAX
004ecd60  JGE 0x004ecd80
004ecd62  PUSH 0x8f02e8
004ecd67  MOV ECX,0x914874
004ecd6c  CALL 0x0083198b
004ecd71  PUSH ESI
004ecd72  PUSH EDI
004ecd73  PUSH 0x914874
004ecd78  CALL 0x00831a8a
004ecd7d  ADD ESP,0xc
004ecd80  POP EDI
004ecd81  MOV dword ptr [EBP + 0x28],ESI
004ecd84  POP ESI
004ecd85  POP EBP
004ecd86  POP EBX
004ecd87  MOV ECX,dword ptr [ESP + 0x8]
004ecd8b  MOV dword ptr FS:[0x0],ECX
004ecd92  ADD ESP,0x14
004ecd95  RET
004ecd96  MOV ECX,dword ptr [ESP + 0x18]
004ecd9a  POP EDI
004ecd9b  XOR EAX,EAX
004ecd9d  POP ESI
004ecd9e  MOV dword ptr [EBP + 0x28],EAX
004ecda1  POP EBP
004ecda2  POP EBX
004ecda3  MOV dword ptr FS:[0x0],ECX
004ecdaa  ADD ESP,0x14
004ecdad  RET
