006d33b0  PUSH EBP
006d33b1  MOV EBP,ESP
006d33b3  AND ESP,0xfffffff0
006d33b6  SUB ESP,0xc4
006d33bc  MOV ECX,dword ptr [EBP + 0x8]
006d33bf  PUSH EBX
006d33c0  PUSH ESI
006d33c1  PUSH EDI
006d33c2  XOR EDI,EDI
006d33c4  CMP ECX,EDI
006d33c6  JZ 0x006d33e7
006d33c8  MOV EAX,[0x00982bdc]
006d33cd  MOV EDX,dword ptr [EAX]
006d33cf  PUSH ECX
006d33d0  PUSH EDI
006d33d1  PUSH EAX
006d33d2  CALL dword ptr [EDX + 0x94]
006d33d8  MOV EAX,[0x00982bdc]
006d33dd  MOV ECX,dword ptr [EAX]
006d33df  PUSH EDI
006d33e0  PUSH EAX
006d33e1  CALL dword ptr [ECX + 0x9c]
006d33e7  FILD dword ptr [0x00982be4]
006d33ed  MOV EBX,dword ptr [EBP + 0x10]
006d33f0  MOV ESI,dword ptr [EBX*0x4 + 0x93de78]
006d33f7  MOV EAX,0xff7f7f7f
006d33fc  FDIVR float ptr [0x00891068]
006d3402  MOV dword ptr [ESP + 0x70],0xbf800000
006d340a  MOV dword ptr [ESP + 0x74],0x3f800000
006d3412  MOV dword ptr [ESP + 0x78],0x0
006d341a  MOV dword ptr [ESP + 0x7c],EAX
006d341e  MOV dword ptr [ESP + 0x88],0x3f800000
006d3429  MOV dword ptr [ESP + 0x8c],0x3f800000
006d3434  MOV dword ptr [ESP + 0x90],0x0
006d343f  MOV dword ptr [ESP + 0x94],EAX
006d3446  MOV dword ptr [ESP + 0xa0],0x3f800000
006d3451  MOV dword ptr [ESP + 0xa4],0xbf800000
006d345c  MOV dword ptr [ESP + 0xa8],0x0
006d3467  MOV dword ptr [ESP + 0xac],EAX
006d346e  MOV dword ptr [ESP + 0xb8],0xbf800000
006d3479  MOV dword ptr [ESP + 0xbc],0xbf800000
006d3484  MOV dword ptr [ESP + 0xc0],0x0
006d348f  MOV dword ptr [ESP + 0xc4],EAX
006d3496  MOV dword ptr [0x00982c80],ESI
006d349c  MOV ECX,ESI
006d349e  FSTP float ptr [ESP + 0x14]
006d34a2  FILD dword ptr [0x00982be8]
006d34a8  FDIVR float ptr [0x00891068]
006d34ae  FSTP float ptr [ESP + 0x10]
006d34b2  FLD float ptr [ESP + 0x14]
006d34b6  FCHS
006d34b8  FST float ptr [ESP + 0x80]
006d34bf  FLD float ptr [ESP + 0x10]
006d34c3  FCHS
006d34c5  FST float ptr [ESP + 0x84]
006d34cc  FLD float ptr [0x0089096c]
006d34d2  FSUB float ptr [ESP + 0x14]
006d34d6  FST float ptr [ESP + 0x98]
006d34dd  FXCH
006d34df  FSTP float ptr [ESP + 0x9c]
006d34e6  FSTP float ptr [ESP + 0xb0]
006d34ed  FLD float ptr [0x0089096c]
006d34f3  FSUB float ptr [ESP + 0x10]
006d34f7  FST float ptr [ESP + 0xb4]
006d34fe  FXCH
006d3500  FSTP float ptr [ESP + 0xc8]
006d3507  FSTP float ptr [ESP + 0xcc]
006d350e  MOV EDX,dword ptr [ESI]
006d3510  CALL dword ptr [EDX + 0x4]
006d3513  MOV EDX,dword ptr [ESI + 0x4c]
006d3516  MOV EAX,[0x00982bdc]
006d351b  MOV ECX,dword ptr [EAX]
006d351d  PUSH EDX
006d351e  PUSH EAX
006d351f  CALL dword ptr [ECX + 0x15c]
006d3525  MOV EAX,dword ptr [ESI + 0x48]
006d3528  MOV ECX,dword ptr [EAX]
006d352a  PUSH EDI
006d352b  LEA EDX,[ESP + 0x14]
006d352f  PUSH EDX
006d3530  PUSH EAX
006d3531  CALL dword ptr [ECX + 0xfc]
006d3537  MOV EDX,dword ptr [EBP + 0xc]
006d353a  MOV EAX,dword ptr [ESI + 0x48]
006d353d  MOV ECX,dword ptr [EAX]
006d353f  PUSH EDX
006d3540  MOV EDX,dword ptr [ESI + 0x44]
006d3543  MOV EDX,dword ptr [EDX + 0x2a4]
006d3549  PUSH EDX
006d354a  PUSH EAX
006d354b  CALL dword ptr [ECX + 0xd0]
006d3551  CMP EBX,0xd
006d3554  JNZ 0x006d361f
006d355a  MOV EDX,dword ptr [0x0098298c]
006d3560  MOV EAX,dword ptr [ESI + 0x48]
006d3563  MOV ECX,dword ptr [EAX]
006d3565  PUSH EDX
006d3566  MOV EDX,dword ptr [ESI + 0x44]
006d3569  MOV EDX,dword ptr [EDX + 0x72c]
006d356f  PUSH EDX
006d3570  PUSH EAX
006d3571  CALL dword ptr [ECX + 0xd0]
006d3577  MOV EDX,dword ptr [0x0093e870]
006d357d  MOV EAX,dword ptr [ESI + 0x48]
006d3580  MOV ECX,dword ptr [EAX]
006d3582  PUSH EDX
006d3583  MOV EDX,dword ptr [ESI + 0x44]
006d3586  MOV EDX,dword ptr [EDX + 0xa9c]
006d358c  PUSH EDX
006d358d  PUSH EAX
006d358e  CALL dword ptr [ECX + 0xd0]
006d3594  FLD float ptr [0x008f94d0]
006d359a  FMUL float ptr [0x008f94c0]
006d35a0  MOV EDX,dword ptr [0x0093e00c]
006d35a6  MOV EAX,[0x008f94ec]
006d35ab  PUSH EDX
006d35ac  MOV EDX,dword ptr [ESI + 0x44]
006d35af  FSTP float ptr [ESP + 0x1c]
006d35b3  FLD float ptr [0x008f94c4]
006d35b9  MOV dword ptr [ESP + 0x28],EAX
006d35bd  FMUL float ptr [0x008f94d0]
006d35c3  MOV EAX,dword ptr [ESI + 0x48]
006d35c6  FSTP float ptr [ESP + 0x20]
006d35ca  FLD float ptr [0x008f94c8]
006d35d0  FMUL float ptr [0x008f94d0]
006d35d6  FSTP float ptr [ESP + 0x24]
006d35da  MOV EDX,dword ptr [EDX + 0x4d4]
006d35e0  MOV ECX,dword ptr [EAX]
006d35e2  PUSH EDX
006d35e3  PUSH EAX
006d35e4  CALL dword ptr [ECX + 0x78]
006d35e7  MOV EDX,dword ptr [ESI + 0x44]
006d35ea  MOV EDX,dword ptr [EDX + 0xb3c]
006d35f0  MOV EAX,dword ptr [ESI + 0x48]
006d35f3  MOV ECX,dword ptr [EAX]
006d35f5  PUSH 0x3ecccccd
006d35fa  PUSH EDX
006d35fb  PUSH EAX
006d35fc  CALL dword ptr [ECX + 0x78]
006d35ff  MOV EAX,dword ptr [ESI + 0x48]
006d3602  MOV ECX,dword ptr [EAX]
006d3604  LEA EDX,[ESP + 0x18]
006d3608  PUSH EDX
006d3609  MOV EDX,dword ptr [ESI + 0x44]
006d360c  MOV EDX,dword ptr [EDX + 0xf24]
006d3612  PUSH EDX
006d3613  PUSH EAX
006d3614  CALL dword ptr [ECX + 0x88]
006d361a  JMP 0x006d3748
006d361f  CMP EBX,EDI
006d3621  JNZ 0x006d3748
006d3627  MOV EAX,[0x00982a20]
006d362c  MOV dword ptr [ESP + 0x30],0x3f800000
006d3634  MOV dword ptr [ESP + 0x34],0x0
006d363c  MOV dword ptr [ESP + 0x38],0x0
006d3644  MOV dword ptr [ESP + 0x3c],0x0
006d364c  MOV dword ptr [ESP + 0x40],0x0
006d3654  MOV dword ptr [ESP + 0x44],0x3f800000
006d365c  MOV dword ptr [ESP + 0x48],0x0
006d3664  MOV dword ptr [ESP + 0x4c],0x0
006d366c  MOV dword ptr [ESP + 0x50],0x0
006d3674  MOV dword ptr [ESP + 0x54],0x0
006d367c  MOV dword ptr [ESP + 0x58],0x3f800000
006d3684  MOV dword ptr [ESP + 0x5c],0x0
006d368c  MOV dword ptr [ESP + 0x60],0x0
006d3694  MOV dword ptr [ESP + 0x64],0x0
006d369c  MOV dword ptr [ESP + 0x68],0x0
006d36a4  MOV dword ptr [ESP + 0x6c],0x3f800000
006d36ac  MOV EBX,dword ptr [EAX + 0x4]
006d36af  IMUL EBX,EBX,0x70
006d36b2  MOV EDX,0x3f800000
006d36b7  ADD EBX,0x9195e0
006d36bd  MOV EAX,dword ptr [EBX]
006d36bf  LEA ECX,[EAX + 0x40]
006d36c2  MOV dword ptr [EAX],EDX
006d36c4  MOV dword ptr [EAX + 0x4],EDI
006d36c7  MOV dword ptr [EAX + 0x8],EDI
006d36ca  MOV dword ptr [EAX + 0xc],EDI
006d36cd  MOV dword ptr [EAX + 0x10],EDI
006d36d0  MOV dword ptr [EAX + 0x14],EDX
006d36d3  MOV dword ptr [EAX + 0x18],EDI
006d36d6  MOV dword ptr [EAX + 0x1c],EDI
006d36d9  MOV dword ptr [EAX + 0x20],EDI
006d36dc  MOV dword ptr [EAX + 0x24],EDI
006d36df  MOV dword ptr [EAX + 0x28],EDX
006d36e2  MOV dword ptr [EAX + 0x2c],EDI
006d36e5  MOV dword ptr [EAX + 0x30],EDI
006d36e8  MOV dword ptr [EAX + 0x34],EDI
006d36eb  MOV dword ptr [EAX + 0x38],EDI
006d36ee  MOV dword ptr [EAX + 0x3c],EDX
006d36f1  PUSH ECX
006d36f2  PUSH EAX
006d36f3  ADD EAX,0x80
006d36f8  PUSH EAX
006d36f9  MOV dword ptr [ECX],EDX
006d36fb  MOV dword ptr [ECX + 0x4],EDI
006d36fe  MOV dword ptr [ECX + 0x8],EDI
006d3701  MOV dword ptr [ECX + 0xc],EDI
006d3704  MOV dword ptr [ECX + 0x10],EDI
006d3707  MOV dword ptr [ECX + 0x14],EDX
006d370a  MOV dword ptr [ECX + 0x18],EDI
006d370d  MOV dword ptr [ECX + 0x1c],EDI
006d3710  MOV dword ptr [ECX + 0x20],EDI
006d3713  MOV dword ptr [ECX + 0x24],EDI
006d3716  MOV dword ptr [ECX + 0x28],EDX
006d3719  MOV dword ptr [ECX + 0x2c],EDI
006d371c  MOV dword ptr [ECX + 0x30],EDI
006d371f  MOV dword ptr [ECX + 0x34],EDI
006d3722  MOV dword ptr [ECX + 0x38],EDI
006d3725  MOV dword ptr [ECX + 0x3c],EDX
006d3728  CALL 0x007e7d5e
006d372d  MOV ECX,dword ptr [EBX + 0x4]
006d3730  PUSH ECX
006d3731  LEA EDX,[ESP + 0x34]
006d3735  PUSH EDX
006d3736  MOV dword ptr [0x008fae9c],0xffffffff
006d3740  CALL 0x006c8000
006d3745  ADD ESP,0x8
006d3748  MOV EAX,dword ptr [EBP + 0x1c]
006d374b  MOV ECX,dword ptr [EBP + 0x18]
006d374e  MOV EDX,dword ptr [EBP + 0x14]
006d3751  PUSH EAX
006d3752  PUSH ECX
006d3753  PUSH EDX
006d3754  CALL 0x006c6810
006d3759  PUSH EDI
006d375a  PUSH EDI
006d375b  CALL 0x006c67c0
006d3760  ADD ESP,0x14
006d3763  CALL 0x006c83a0
006d3768  MOV EDX,dword ptr [EBP + 0x20]
006d376b  MOV dword ptr [0x00982ca0],EDI
006d3771  MOV EAX,dword ptr [ESI + 0x48]
006d3774  MOV ECX,dword ptr [EAX]
006d3776  PUSH EDX
006d3777  PUSH EAX
006d3778  CALL dword ptr [ECX + 0x100]
006d377e  MOV EAX,[0x00982c80]
006d3783  MOV EAX,dword ptr [EAX + 0x48]
006d3786  MOV ECX,dword ptr [EAX]
006d3788  PUSH EAX
006d3789  CALL dword ptr [ECX + 0x104]
006d378f  MOV EAX,[0x00982bdc]
006d3794  MOV EDX,dword ptr [EAX]
006d3796  PUSH 0x18
006d3798  LEA ECX,[ESP + 0x74]
006d379c  PUSH ECX
006d379d  PUSH 0x2
006d379f  PUSH 0x6
006d37a1  PUSH EAX
006d37a2  CALL dword ptr [EDX + 0x14c]
006d37a8  MOV EAX,dword ptr [ESI + 0x48]
006d37ab  MOV EDX,dword ptr [EAX]
006d37ad  PUSH EAX
006d37ae  CALL dword ptr [EDX + 0x108]
006d37b4  MOV EAX,dword ptr [ESI]
006d37b6  MOV ECX,ESI
006d37b8  CALL dword ptr [EAX + 0x8]
006d37bb  MOV ESI,dword ptr [ESI + 0x48]
006d37be  MOV ECX,dword ptr [ESI]
006d37c0  PUSH ESI
006d37c1  CALL dword ptr [ECX + 0x10c]
006d37c7  MOV ESI,dword ptr [0x00982a20]
006d37cd  MOV dword ptr [0x00982c80],EDI
006d37d3  CALL 0x006e2f50
006d37d8  MOV ECX,dword ptr [ESI + 0x8]
006d37db  MOV EAX,[0x00982bdc]
006d37e0  MOV EDX,dword ptr [EAX]
006d37e2  PUSH ECX
006d37e3  PUSH EDI
006d37e4  PUSH EAX
006d37e5  CALL dword ptr [EDX + 0x94]
006d37eb  MOV ECX,dword ptr [ESI + 0xc]
006d37ee  MOV EAX,[0x00982bdc]
006d37f3  MOV EDX,dword ptr [EAX]
006d37f5  PUSH ECX
006d37f6  PUSH EAX
006d37f7  CALL dword ptr [EDX + 0x9c]
006d37fd  MOV EDX,dword ptr [ESI + 0x14]
006d3800  MOV EAX,dword ptr [ESI + 0x18]
006d3803  MOV dword ptr [ESP + 0x20],EDX
006d3807  MOV dword ptr [ESP + 0x24],EAX
006d380b  MOV EAX,[0x00982bdc]
006d3810  LEA EDX,[ESP + 0x18]
006d3814  PUSH EDX
006d3815  MOV dword ptr [ESP + 0x1c],EDI
006d3819  MOV dword ptr [ESP + 0x20],EDI
006d381d  MOV dword ptr [ESP + 0x2c],0x0
006d3825  MOV dword ptr [ESP + 0x30],0x3f800000
006d382d  MOV ECX,dword ptr [EAX]
006d382f  PUSH EAX
006d3830  CALL dword ptr [ECX + 0xbc]
006d3836  MOV dword ptr [0x00982c80],EDI
006d383c  POP EDI
006d383d  MOV dword ptr [0x00982a20],ESI
006d3843  POP ESI
006d3844  POP EBX
006d3845  MOV ESP,EBP
006d3847  POP EBP
006d3848  RET
