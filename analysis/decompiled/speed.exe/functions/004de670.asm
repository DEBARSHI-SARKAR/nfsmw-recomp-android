004de670  PUSH EBP
004de671  MOV EBP,ESP
004de673  AND ESP,0xfffffff0
004de676  SUB ESP,0x14
004de679  PUSH EBX
004de67a  PUSH ESI
004de67b  MOV ESI,ECX
004de67d  MOV EAX,dword ptr [ESI + 0x14]
004de680  MOV EAX,dword ptr [EAX + 0x34]
004de683  XOR EBX,EBX
004de685  CMP EAX,EBX
004de687  PUSH EDI
004de688  JZ 0x004de9de
004de68e  MOV ECX,dword ptr [EAX + 0xcc]
004de694  CMP ECX,EBX
004de696  MOV byte ptr [ESP + 0x12],BL
004de69a  MOV byte ptr [ESP + 0x11],BL
004de69e  MOV byte ptr [ESP + 0x10],BL
004de6a2  MOV byte ptr [ESP + 0xf],BL
004de6a6  JZ 0x004de6b5
004de6a8  CMP dword ptr [EAX + 0x110],EBX
004de6ae  JZ 0x004de6ca
004de6b0  MOV byte ptr [ESP + 0xf],0x1
004de6b5  CMP dword ptr [EAX + 0x110],EBX
004de6bb  JZ 0x004de6ca
004de6bd  CMP dword ptr [EAX + 0x154],EBX
004de6c3  JZ 0x004de6df
004de6c5  MOV byte ptr [ESP + 0x11],0x1
004de6ca  CMP dword ptr [EAX + 0x154],EBX
004de6d0  JZ 0x004de6df
004de6d2  CMP dword ptr [EAX + 0x198],EBX
004de6d8  JZ 0x004de6f0
004de6da  MOV byte ptr [ESP + 0x10],0x1
004de6df  CMP dword ptr [EAX + 0x198],EBX
004de6e5  JZ 0x004de6f0
004de6e7  CMP ECX,EBX
004de6e9  JZ 0x004de6f0
004de6eb  MOV byte ptr [ESP + 0x12],0x1
004de6f0  CMP dword ptr [EAX + 0x228],EBX
004de6f6  JNZ 0x004de717
004de6f8  MOV EAX,dword ptr [ESI + 0x18]
004de6fb  CMP byte ptr [EAX + 0x128],BL
004de701  JZ 0x004de717
004de703  MOV ECX,dword ptr [EAX + 0x12c]
004de709  PUSH ECX
004de70a  MOV ECX,ESI
004de70c  MOV byte ptr [EAX + 0x128],BL
004de712  CALL 0x004de4f0
004de717  CMP byte ptr [ESI + 0x68],BL
004de71a  JNZ 0x004de75c
004de71c  MOV EDX,dword ptr [ESI + 0x14]
004de71f  MOV ECX,dword ptr [EDX + 0x34]
004de722  FLD float ptr [ECX + 0x34]
004de725  FADD float ptr [ECX + 0x30]
004de728  FMUL float ptr [0x00890968]
004de72e  FADD float ptr [ECX + 0x38]
004de731  FCOMP float ptr [0x008efc5c]
004de737  FNSTSW AX
004de739  TEST AH,0x5
004de73c  JP 0x004de75c
004de73e  CALL 0x004abaa0
004de743  MOV dword ptr [ESP + 0x1c],EAX
004de747  FILD dword ptr [ESP + 0x1c]
004de74b  FCOMP float ptr [0x0089096c]
004de751  FNSTSW AX
004de753  TEST AH,0x5
004de756  JP 0x004de75c
004de758  MOV byte ptr [ESI + 0x68],0x1
004de75c  MOV EAX,dword ptr [ESI + 0x14]
004de75f  MOV EDI,dword ptr [EAX + 0x34]
004de762  CMP dword ptr [EDI + 0xcc],EBX
004de768  MOV byte ptr [ESP + 0x13],BL
004de76c  MOV byte ptr [ESP + 0x14],BL
004de770  JZ 0x004de797
004de772  CMP dword ptr [EDI + 0x110],EBX
004de778  JZ 0x004de797
004de77a  FLD float ptr [ESI + 0x4c]
004de77d  FCOMP float ptr [0x00897e1c]
004de783  FNSTSW AX
004de785  TEST AH,0x41
004de788  JNZ 0x004de797
004de78a  CMP byte ptr [ESI + 0x48],BL
004de78d  JNZ 0x004de797
004de78f  MOV DL,0x1
004de791  MOV byte ptr [ESP + 0xe],DL
004de795  JMP 0x004de79d
004de797  MOV byte ptr [ESP + 0xe],BL
004de79b  MOV DL,BL
004de79d  CMP dword ptr [EDI + 0x154],EBX
004de7a3  JZ 0x004de7c6
004de7a5  CMP dword ptr [EDI + 0x198],EBX
004de7ab  JZ 0x004de7c6
004de7ad  FLD float ptr [ESI + 0x54]
004de7b0  FCOMP float ptr [0x00897e1c]
004de7b6  FNSTSW AX
004de7b8  TEST AH,0x41
004de7bb  JNZ 0x004de7c6
004de7bd  CMP byte ptr [ESI + 0x50],BL
004de7c0  JNZ 0x004de7c6
004de7c2  MOV CL,0x1
004de7c4  JMP 0x004de7c8
004de7c6  XOR CL,CL
004de7c8  CMP DL,BL
004de7ca  JNZ 0x004de7d5
004de7cc  CMP CL,BL
004de7ce  JZ 0x004de80d
004de7d0  CMP byte ptr [ESI + 0x68],BL
004de7d3  JNZ 0x004de812
004de7d5  CMP DL,BL
004de7d7  MOV byte ptr [ESP + 0x13],0x1
004de7dc  JZ 0x004de7ee
004de7de  FLD float ptr [ESI + 0x4c]
004de7e1  FCOMP float ptr [0x00897e20]
004de7e7  FNSTSW AX
004de7e9  TEST AH,0x41
004de7ec  JZ 0x004de802
004de7ee  CMP CL,BL
004de7f0  JZ 0x004de809
004de7f2  FLD float ptr [ESI + 0x54]
004de7f5  FCOMP float ptr [0x00897e20]
004de7fb  FNSTSW AX
004de7fd  TEST AH,0x41
004de800  JNZ 0x004de809
004de802  MOV byte ptr [ESP + 0x14],0x1
004de807  JMP 0x004de80d
004de809  MOV byte ptr [ESP + 0x14],BL
004de80d  CMP byte ptr [ESI + 0x68],BL
004de810  JZ 0x004de845
004de812  CMP byte ptr [ESP + 0xf],BL
004de816  JZ 0x004de81d
004de818  CMP byte ptr [ESI + 0x48],BL
004de81b  JZ 0x004de83e
004de81d  CMP byte ptr [ESP + 0x10],BL
004de821  JZ 0x004de828
004de823  CMP byte ptr [ESI + 0x50],BL
004de826  JZ 0x004de83e
004de828  CMP byte ptr [ESP + 0x11],BL
004de82c  JZ 0x004de833
004de82e  CMP byte ptr [ESI + 0x58],BL
004de831  JZ 0x004de83e
004de833  CMP byte ptr [ESP + 0x12],BL
004de837  JZ 0x004de845
004de839  CMP byte ptr [ESI + 0x60],BL
004de83c  JNZ 0x004de845
004de83e  MOV byte ptr [ESP + 0x14],0x1
004de843  JMP 0x004de84f
004de845  CMP byte ptr [ESP + 0x13],BL
004de849  JZ 0x004de8de
004de84f  CMP dword ptr [EDI + 0x228],EBX
004de855  MOV dword ptr [ESP + 0x18],0x0
004de85d  JNZ 0x004de8cd
004de85f  MOV EDI,0x4
004de864  JMP 0x004de870
004de866  MOV DL,byte ptr [ESP + 0xe]
004de86a  LEA EBX,[EBX]
004de870  CMP DL,BL
004de872  JZ 0x004de888
004de874  MOV ECX,dword ptr [ESI + 0x14]
004de877  MOV EAX,dword ptr [ECX + 0x34]
004de87a  FLD float ptr [EAX + 0x108]
004de880  FADD float ptr [EAX + 0xc4]
004de886  JMP 0x004de89a
004de888  MOV EDX,dword ptr [ESI + 0x14]
004de88b  MOV EAX,dword ptr [EDX + 0x34]
004de88e  FLD float ptr [EAX + 0x190]
004de894  FADD float ptr [EAX + 0x14c]
004de89a  FSTP float ptr [ESP + 0x1c]
004de89e  MOV ECX,0x914730
004de8a3  MOV EAX,dword ptr [ESP + 0x1c]
004de8a7  PUSH EAX
004de8a8  CALL 0x004ba590
004de8ad  FADD float ptr [ESP + 0x18]
004de8b1  DEC EDI
004de8b2  FSTP float ptr [ESP + 0x18]
004de8b6  JNZ 0x004de866
004de8b8  MOV ECX,dword ptr [ESP + 0x14]
004de8bc  FLD float ptr [ESP + 0x18]
004de8c0  FMUL float ptr [0x00898858]
004de8c6  PUSH ECX
004de8c7  PUSH ECX
004de8c8  FSTP float ptr [ESP]
004de8cb  JMP 0x004de8d7
004de8cd  MOV EDX,dword ptr [ESP + 0x14]
004de8d1  PUSH EDX
004de8d2  PUSH 0x42fe0000
004de8d7  MOV ECX,ESI
004de8d9  CALL 0x004de370
004de8de  MOV ECX,dword ptr [ESI + 0x14]
004de8e1  MOV EAX,dword ptr [ECX + 0x34]
004de8e4  CMP dword ptr [EAX + 0xcc],EBX
004de8ea  MOV dword ptr [ESP + 0x14],EBX
004de8ee  JZ 0x004de8f8
004de8f0  MOV dword ptr [ESP + 0x14],0x1
004de8f8  CMP dword ptr [EAX + 0x110],EBX
004de8fe  JZ 0x004de904
004de900  INC dword ptr [ESP + 0x14]
004de904  CMP dword ptr [EAX + 0x154],EBX
004de90a  JZ 0x004de910
004de90c  INC dword ptr [ESP + 0x14]
004de910  CMP dword ptr [EAX + 0x198],EBX
004de916  JZ 0x004de91c
004de918  INC dword ptr [ESP + 0x14]
004de91c  FILD dword ptr [ESP + 0x14]
004de920  FLD float ptr [0x0089096c]
004de926  FUCOMPP
004de928  FNSTSW AX
004de92a  TEST AH,0x44
004de92d  JP 0x004de937
004de92f  CMP byte ptr [ESI + 0x68],BL
004de932  JZ 0x004de937
004de934  MOV byte ptr [ESI + 0x68],BL
004de937  MOV EAX,dword ptr [ECX + 0x34]
004de93a  CMP dword ptr [EAX + 0xcc],EBX
004de940  JZ 0x004de953
004de942  CMP dword ptr [EAX + 0x110],EBX
004de948  JZ 0x004de953
004de94a  MOV byte ptr [ESI + 0x48],0x1
004de94e  MOV dword ptr [ESI + 0x4c],EBX
004de951  JMP 0x004de95f
004de953  FLD float ptr [EBP + 0x8]
004de956  MOV byte ptr [ESI + 0x48],BL
004de959  FADD float ptr [ESI + 0x4c]
004de95c  FSTP float ptr [ESI + 0x4c]
004de95f  MOV EAX,dword ptr [ECX + 0x34]
004de962  CMP dword ptr [EAX + 0x154],EBX
004de968  JZ 0x004de97b
004de96a  CMP dword ptr [EAX + 0x198],EBX
004de970  JZ 0x004de97b
004de972  MOV byte ptr [ESI + 0x50],0x1
004de976  MOV dword ptr [ESI + 0x54],EBX
004de979  JMP 0x004de987
004de97b  FLD float ptr [EBP + 0x8]
004de97e  MOV byte ptr [ESI + 0x50],BL
004de981  FADD float ptr [ESI + 0x54]
004de984  FSTP float ptr [ESI + 0x54]
004de987  MOV EAX,dword ptr [ECX + 0x34]
004de98a  CMP dword ptr [EAX + 0x110],EBX
004de990  JZ 0x004de9a3
004de992  CMP dword ptr [EAX + 0x154],EBX
004de998  JZ 0x004de9a3
004de99a  MOV byte ptr [ESI + 0x58],0x1
004de99e  MOV dword ptr [ESI + 0x5c],EBX
004de9a1  JMP 0x004de9af
004de9a3  FLD float ptr [EBP + 0x8]
004de9a6  MOV byte ptr [ESI + 0x58],BL
004de9a9  FADD float ptr [ESI + 0x5c]
004de9ac  FSTP float ptr [ESI + 0x5c]
004de9af  MOV EAX,dword ptr [ECX + 0x34]
004de9b2  CMP dword ptr [EAX + 0xcc],EBX
004de9b8  JZ 0x004de9d2
004de9ba  CMP dword ptr [EAX + 0x198],EBX
004de9c0  JZ 0x004de9d2
004de9c2  MOV byte ptr [ESI + 0x60],0x1
004de9c6  MOV dword ptr [ESI + 0x64],EBX
004de9c9  POP EDI
004de9ca  POP ESI
004de9cb  POP EBX
004de9cc  MOV ESP,EBP
004de9ce  POP EBP
004de9cf  RET 0x4
004de9d2  FLD float ptr [EBP + 0x8]
004de9d5  MOV byte ptr [ESI + 0x60],BL
004de9d8  FADD float ptr [ESI + 0x64]
004de9db  FSTP float ptr [ESI + 0x64]
004de9de  POP EDI
004de9df  POP ESI
004de9e0  POP EBX
004de9e1  MOV ESP,EBP
004de9e3  POP EBP
004de9e4  RET 0x4
