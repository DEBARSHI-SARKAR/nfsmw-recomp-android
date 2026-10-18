006de300  PUSH EBP
006de301  MOV EBP,ESP
006de303  AND ESP,0xfffffff0
006de306  SUB ESP,0xaa4
006de30c  MOV EAX,[0x009017d0]
006de311  PUSH EBX
006de312  XOR EBX,EBX
006de314  CMP EAX,EBX
006de316  PUSH ESI
006de317  PUSH EDI
006de318  JNZ 0x006de324
006de31a  MOV dword ptr [0x00982ba0],0x1
006de324  CMP dword ptr [0x00982b34],EBX
006de32a  MOV dword ptr [0x00982b9c],EBX
006de330  JZ 0x006de33c
006de332  MOV dword ptr [0x00982b9c],0x800
006de33c  PUSH 0x1
006de33e  PUSH 0x919650
006de343  CALL 0x0073cfe0
006de348  ADD ESP,0x8
006de34b  CMP EAX,EBX
006de34d  MOV [0x00982ba4],EAX
006de352  JZ 0x006de385
006de354  FLD float ptr [0x008f9340]
006de35a  FMUL float ptr [0x00925970]
006de360  FADD float ptr [0x00982ba8]
006de366  FST float ptr [0x00982ba8]
006de36c  FCOMP float ptr [0x0089096c]
006de372  FNSTSW AX
006de374  TEST AH,0x41
006de377  JNZ 0x006de3b4
006de379  MOV dword ptr [0x00982ba8],0x3f800000
006de383  JMP 0x006de3b4
006de385  FLD float ptr [0x008f9344]
006de38b  FMUL float ptr [0x00925970]
006de391  FSUBR float ptr [0x00982ba8]
006de397  FST float ptr [0x00982ba8]
006de39d  FCOMP float ptr [0x00890968]
006de3a3  FNSTSW AX
006de3a5  TEST AH,0x5
006de3a8  JP 0x006de3b4
006de3aa  MOV dword ptr [0x00982ba8],0x0
006de3b4  MOV ESI,dword ptr [0x00901830]
006de3ba  XOR EAX,EAX
006de3bc  CMP ESI,EBX
006de3be  SETZ AL
006de3c1  MOV [0x008ec2b8],EAX
006de3c6  CALL 0x006d6cf0
006de3cb  MOV dword ptr [0x00982c80],EBX
006de3d1  CALL 0x00504c50
006de3d6  MOV ECX,dword ptr [0x009b392c]
006de3dc  CALL 0x00769360
006de3e1  CALL 0x006c83d0
006de3e6  LEA ECX,[ESP + 0xe0]
006de3ed  PUSH ECX
006de3ee  MOV dword ptr [ESP + 0xaa4],EBX
006de3f5  CALL 0x006bfdd0
006de3fa  MOV EAX,[0x009017d4]
006de3ff  ADD ESP,0x4
006de402  CMP EAX,EBX
006de404  MOV EDI,0x6
006de409  JZ 0x006de64c
006de40f  CMP byte ptr [0x009197a8],BL
006de415  MOV EAX,[0x00919800]
006de41a  MOV dword ptr [0x008fae6c],0x3
006de424  JZ 0x006df8cb
006de42a  CMP dword ptr [EAX + 0x10],EBX
006de42d  JZ 0x006df8cb
006de433  PUSH 0x1
006de435  PUSH EAX
006de436  CALL 0x006bd3b0
006de43b  MOV EDX,dword ptr [0x00919808]
006de441  MOV EAX,dword ptr [EDX + 0x290]
006de447  MOV ECX,dword ptr [0x009b392c]
006de44d  ADD ESP,0x8
006de450  PUSH EAX
006de451  CALL 0x00769580
006de456  MOV ECX,dword ptr [0x008fadf8]
006de45c  MOV EDX,dword ptr [0x008fadfc]
006de462  MOV EAX,[0x008fade0]
006de467  MOV ESI,dword ptr [0x008fadf0]
006de46d  MOV EDI,dword ptr [0x008fadf4]
006de473  MOV dword ptr [ESP + 0x24],ECX
006de477  MOV ECX,dword ptr [0x008f92e0]
006de47d  MOV dword ptr [ESP + 0x28],EDX
006de481  MOV EDX,dword ptr [0x0093dec4]
006de487  MOV dword ptr [ESP + 0xc],EAX
006de48b  MOV dword ptr [0x008fade0],ECX
006de491  CMP byte ptr [EDX + 0x40],BL
006de494  JZ 0x006de49b
006de496  MOV EAX,ECX
006de498  PUSH EAX
006de499  JMP 0x006de4a2
006de49b  MOV ECX,dword ptr [0x008f92e0]
006de4a1  PUSH ECX
006de4a2  PUSH 0x4
006de4a4  PUSH 0x9197a0
006de4a9  CALL 0x006db310
006de4ae  ADD ESP,0xc
006de4b1  CALL 0x006e2f50
006de4b6  MOV EDX,dword ptr [ESP + 0x24]
006de4ba  MOV EAX,dword ptr [ESP + 0x28]
006de4be  MOV ECX,dword ptr [ESP + 0xc]
006de4c2  MOV dword ptr [0x008fadf0],ESI
006de4c8  MOV dword ptr [0x008fadf4],EDI
006de4ce  MOV dword ptr [0x008fadf8],EDX
006de4d4  MOV [0x008fadfc],EAX
006de4d9  MOV dword ptr [0x008fade0],ECX
006de4df  CALL 0x006e2f50
006de4e4  CMP dword ptr [0x009017d4],0x1
006de4eb  JLE 0x006de582
006de4f1  MOV EDX,dword ptr [0x009196b8]
006de4f7  FLD float ptr [EDX + 0x36a0]
006de4fd  FCOMP float ptr [0x00890dc4]
006de503  FNSTSW AX
006de505  TEST AH,0x41
006de508  JNZ 0x006de582
006de50a  PUSH 0x8
006de50c  PUSH 0x9197a0
006de511  LEA ECX,[ESP + 0xe8]
006de518  CALL 0x00723fa0
006de51d  MOV ECX,dword ptr [0x0093debc]
006de523  MOV dword ptr [0x00982c80],ECX
006de529  MOV EAX,dword ptr [ECX]
006de52b  MOV ESI,ECX
006de52d  CALL dword ptr [EAX + 0x4]
006de530  MOV EDX,dword ptr [ESI + 0x4c]
006de533  MOV EAX,[0x00982bdc]
006de538  MOV ECX,dword ptr [EAX]
006de53a  PUSH EDX
006de53b  PUSH EAX
006de53c  CALL dword ptr [ECX + 0x15c]
006de542  MOV ESI,dword ptr [ESI + 0x48]
006de545  MOV EAX,dword ptr [ESI]
006de547  PUSH EBX
006de548  LEA ECX,[ESP + 0x10]
006de54c  PUSH ECX
006de54d  PUSH ESI
006de54e  CALL dword ptr [EAX + 0xfc]
006de554  PUSH 0x1
006de556  PUSH 0x9197a0
006de55b  CALL 0x00750b10
006de560  MOV ECX,dword ptr [0x0093debc]
006de566  MOV EDX,dword ptr [ECX]
006de568  ADD ESP,0x8
006de56b  MOV ESI,ECX
006de56d  CALL dword ptr [EDX + 0x8]
006de570  MOV EAX,dword ptr [ESI + 0x48]
006de573  MOV ECX,dword ptr [EAX]
006de575  PUSH EAX
006de576  CALL dword ptr [ECX + 0x10c]
006de57c  MOV dword ptr [0x00982c80],EBX
006de582  CALL 0x006e2f50
006de587  CMP dword ptr [0x00925e90],0x6
006de58e  JNZ 0x006de5b7
006de590  CMP dword ptr [0x009017d4],0x3
006de597  JNZ 0x006de5b7
006de599  MOV EDX,dword ptr [0x009196b8]
006de59f  FLD float ptr [EDX + 0x36a0]
006de5a5  FCOMP float ptr [0x00890dc4]
006de5ab  FNSTSW AX
006de5ad  TEST AH,0x41
006de5b0  JNZ 0x006de5b7
006de5b2  CALL 0x006d4960
006de5b7  MOV ECX,dword ptr [0x0093debc]
006de5bd  MOV dword ptr [0x00982c80],ECX
006de5c3  MOV EAX,dword ptr [ECX]
006de5c5  MOV ESI,ECX
006de5c7  CALL dword ptr [EAX + 0x4]
006de5ca  MOV EDX,dword ptr [ESI + 0x4c]
006de5cd  MOV EAX,[0x00982bdc]
006de5d2  MOV ECX,dword ptr [EAX]
006de5d4  PUSH EDX
006de5d5  PUSH EAX
006de5d6  CALL dword ptr [ECX + 0x15c]
006de5dc  MOV ESI,dword ptr [ESI + 0x48]
006de5df  MOV EAX,dword ptr [ESI]
006de5e1  PUSH EBX
006de5e2  LEA ECX,[ESP + 0x10]
006de5e6  PUSH ECX
006de5e7  PUSH ESI
006de5e8  CALL dword ptr [EAX + 0xfc]
006de5ee  CMP dword ptr [0x009017e4],EBX
006de5f4  JZ 0x006de628
006de5f6  PUSH 0x2
006de5f8  PUSH 0x9197a0
006de5fd  CALL 0x00505e80
006de602  PUSH EBX
006de603  PUSH 0x1
006de605  PUSH 0x9197a0
006de60a  CALL 0x00750b00
006de60f  PUSH 0x1
006de611  PUSH 0x9197a0
006de616  CALL 0x00744840
006de61b  PUSH 0x9197a0
006de620  CALL 0x00507770
006de625  ADD ESP,0x20
006de628  MOV ECX,dword ptr [0x0093debc]
006de62e  MOV EDX,dword ptr [ECX]
006de630  MOV ESI,ECX
006de632  CALL dword ptr [EDX + 0x8]
006de635  MOV EAX,dword ptr [ESI + 0x48]
006de638  MOV ECX,dword ptr [EAX]
006de63a  PUSH EAX
006de63b  CALL dword ptr [ECX + 0x10c]
006de641  MOV dword ptr [0x00982c80],EBX
006de647  MOV EDI,0x6
006de64c  CMP dword ptr [0x009017b8],EBX
006de652  JZ 0x006de85d
006de658  CMP dword ptr [0x00925e90],EDI
006de65e  MOV byte ptr [0x00982bac],0x1
006de665  MOV dword ptr [0x008fae6c],0x3
006de66f  JNZ 0x006de88e
006de675  MOV ESI,0x919dc0
006de67a  LEA EBX,[EBX]
006de680  CMP byte ptr [ESI + 0x8],BL
006de683  JZ 0x006de84c
006de689  MOV EAX,dword ptr [ESI + 0x60]
006de68c  CMP dword ptr [EAX + 0x10],EBX
006de68f  JZ 0x006de84c
006de695  PUSH 0x1
006de697  PUSH EAX
006de698  CALL 0x006bd3b0
006de69d  MOV EDX,dword ptr [ESI + 0x68]
006de6a0  MOV EAX,dword ptr [EDX + 0x290]
006de6a6  MOV ECX,dword ptr [0x009b392c]
006de6ac  ADD ESP,0x8
006de6af  PUSH EAX
006de6b0  CALL 0x00769580
006de6b5  MOV EAX,[0x00982bdc]
006de6ba  MOV ECX,dword ptr [EAX]
006de6bc  PUSH EBX
006de6bd  PUSH 0x7
006de6bf  PUSH EAX
006de6c0  CALL dword ptr [ECX + 0xe4]
006de6c6  MOV EAX,[0x00982bdc]
006de6cb  MOV EDX,dword ptr [EAX]
006de6cd  PUSH EBX
006de6ce  PUSH 0xe
006de6d0  PUSH EAX
006de6d1  CALL dword ptr [EDX + 0xe4]
006de6d7  CALL 0x006c00b0
006de6dc  CMP dword ptr [0x00925e90],EDI
006de6e2  JNZ 0x006de77b
006de6e8  MOV EAX,[0x009b392c]
006de6ed  FLD float ptr [EAX + 0x64]
006de6f0  MOV ECX,dword ptr [0x008fadf4]
006de6f6  MOV EDX,dword ptr [0x008fadf8]
006de6fc  FST float ptr [ESP + 0xc]
006de700  MOV EAX,[0x008fadfc]
006de705  MOV EDI,dword ptr [0x008fadf0]
006de70b  MOV dword ptr [ESP + 0x20],ECX
006de70f  MOV ECX,dword ptr [0x008fade0]
006de715  FSTP float ptr [0x008fade0]
006de71b  MOV dword ptr [ESP + 0x24],EDX
006de71f  MOV EDX,dword ptr [0x0093dec4]
006de725  MOV dword ptr [ESP + 0x28],EAX
006de729  CMP byte ptr [EDX + 0x40],BL
006de72c  MOV dword ptr [ESP + 0x18],ECX
006de730  JZ 0x006de739
006de732  MOV EAX,dword ptr [ESP + 0xc]
006de736  PUSH EAX
006de737  JMP 0x006de73e
006de739  PUSH 0x3f000000
006de73e  PUSH 0x3
006de740  PUSH ESI
006de741  CALL 0x006db310
006de746  ADD ESP,0xc
006de749  CALL 0x006e2f50
006de74e  MOV ECX,dword ptr [ESP + 0x20]
006de752  MOV EDX,dword ptr [ESP + 0x24]
006de756  MOV EAX,dword ptr [ESP + 0x28]
006de75a  MOV dword ptr [0x008fadf4],ECX
006de760  MOV ECX,dword ptr [ESP + 0x18]
006de764  MOV dword ptr [0x008fadf0],EDI
006de76a  MOV dword ptr [0x008fadf8],EDX
006de770  MOV [0x008fadfc],EAX
006de775  MOV dword ptr [0x008fade0],ECX
006de77b  MOV EAX,[0x00982bdc]
006de780  MOV EDX,dword ptr [EAX]
006de782  PUSH 0x1
006de784  PUSH 0xe
006de786  PUSH EAX
006de787  CALL dword ptr [EDX + 0xe4]
006de78d  MOV EAX,[0x00982bdc]
006de792  MOV ECX,dword ptr [EAX]
006de794  PUSH 0x1
006de796  PUSH 0x7
006de798  PUSH EAX
006de799  CALL dword ptr [ECX + 0xe4]
006de79f  CALL 0x006e2f50
006de7a4  CMP dword ptr [0x009017bc],EBX
006de7aa  JZ 0x006de7af
006de7ac  PUSH EBX
006de7ad  JMP 0x006de7bd
006de7af  CMP dword ptr [0x00901830],0x2
006de7b6  JGE 0x006de7ca
006de7b8  PUSH 0x1000
006de7bd  LEA ECX,[ESP + 0xe4]
006de7c4  PUSH ESI
006de7c5  CALL 0x00723fa0
006de7ca  CALL 0x006e2f50
006de7cf  MOV ECX,dword ptr [0x0093debc]
006de7d5  MOV dword ptr [0x00982c80],ECX
006de7db  MOV EDX,dword ptr [ECX]
006de7dd  MOV EDI,ECX
006de7df  CALL dword ptr [EDX + 0x4]
006de7e2  MOV EDX,dword ptr [EDI + 0x4c]
006de7e5  MOV EAX,[0x00982bdc]
006de7ea  MOV ECX,dword ptr [EAX]
006de7ec  PUSH EDX
006de7ed  PUSH EAX
006de7ee  CALL dword ptr [ECX + 0x15c]
006de7f4  MOV EDI,dword ptr [EDI + 0x48]
006de7f7  MOV EAX,dword ptr [EDI]
006de7f9  PUSH EBX
006de7fa  LEA ECX,[ESP + 0x38]
006de7fe  PUSH ECX
006de7ff  PUSH EDI
006de800  CALL dword ptr [EAX + 0xfc]
006de806  CMP dword ptr [0x009017e4],EBX
006de80c  JZ 0x006de828
006de80e  PUSH 0x1
006de810  PUSH ESI
006de811  CALL 0x00505e80
006de816  PUSH ESI
006de817  CALL 0x00507770
006de81c  PUSH 0x1
006de81e  PUSH EBX
006de81f  PUSH ESI
006de820  CALL 0x00750b00
006de825  ADD ESP,0x18
006de828  MOV ECX,dword ptr [0x0093debc]
006de82e  MOV EDX,dword ptr [ECX]
006de830  MOV EDI,ECX
006de832  CALL dword ptr [EDX + 0x8]
006de835  MOV EAX,dword ptr [EDI + 0x48]
006de838  MOV ECX,dword ptr [EAX]
006de83a  PUSH EAX
006de83b  CALL dword ptr [ECX + 0x10c]
006de841  MOV dword ptr [0x00982c80],EBX
006de847  MOV EDI,0x6
006de84c  ADD ESI,0x70
006de84f  CMP ESI,0x919ff0
006de855  JLE 0x006de680
006de85b  JMP 0x006de88e
006de85d  CMP byte ptr [0x00982bac],BL
006de863  JZ 0x006de88e
006de865  MOV ESI,0x919e20
006de86a  LEA EBX,[EBX]
006de870  MOV EDX,dword ptr [ESI]
006de872  PUSH 0x2
006de874  PUSH EDX
006de875  CALL 0x006bd3b0
006de87a  ADD ESI,0x70
006de87d  ADD ESP,0x8
006de880  CMP ESI,0x91a050
006de886  JLE 0x006de870
006de888  MOV byte ptr [0x00982bac],BL
006de88e  CALL 0x006e2f50
006de893  MOV EAX,[0x00982bdc]
006de898  MOV ECX,dword ptr [EAX]
006de89a  PUSH 0x1
006de89c  PUSH 0xe
006de89e  PUSH EAX
006de89f  MOV dword ptr [0x008fae6c],0x2
006de8a9  CALL dword ptr [ECX + 0xe4]
006de8af  MOV EAX,[0x00982bdc]
006de8b4  MOV EDX,dword ptr [EAX]
006de8b6  PUSH 0x1
006de8b8  PUSH 0x7
006de8ba  PUSH EAX
006de8bb  CALL dword ptr [EDX + 0xe4]
006de8c1  CMP byte ptr [0x00919738],BL
006de8c7  JZ 0x006deb01
006de8cd  PUSH 0x1
006de8cf  PUSH 0x93db0c
006de8d4  CALL 0x006bd3b0
006de8d9  MOV EAX,[0x009b392c]
006de8de  FLD float ptr [EAX + 0x64]
006de8e1  MOV ECX,dword ptr [0x008fadf8]
006de8e7  MOV EAX,[0x008fade0]
006de8ec  FST float ptr [ESP + 0x14]
006de8f0  MOV EDX,dword ptr [0x008fadfc]
006de8f6  FSTP float ptr [0x008fade0]
006de8fc  MOV ESI,dword ptr [0x008fadf0]
006de902  MOV EDI,dword ptr [0x008fadf4]
006de908  MOV dword ptr [ESP + 0x2c],ECX
006de90c  MOV ECX,dword ptr [0x0093dec4]
006de912  MOV dword ptr [ESP + 0x20],EAX
006de916  MOV AL,byte ptr [ECX + 0x40]
006de919  ADD ESP,0x8
006de91c  CMP AL,BL
006de91e  MOV dword ptr [ESP + 0x28],EDX
006de922  JZ 0x006de92b
006de924  MOV EDX,dword ptr [ESP + 0xc]
006de928  PUSH EDX
006de929  JMP 0x006de930
006de92b  PUSH 0x3f000000
006de930  PUSH 0x3
006de932  PUSH 0x919730
006de937  CALL 0x006db310
006de93c  ADD ESP,0xc
006de93f  CALL 0x006e2f50
006de944  MOV EAX,dword ptr [ESP + 0x24]
006de948  MOV ECX,dword ptr [ESP + 0x28]
006de94c  MOV EDX,dword ptr [ESP + 0x18]
006de950  MOV dword ptr [0x008fadf0],ESI
006de956  MOV dword ptr [0x008fadf4],EDI
006de95c  MOV [0x008fadf8],EAX
006de961  MOV dword ptr [0x008fadfc],ECX
006de967  MOV dword ptr [0x008fade0],EDX
006de96d  CALL 0x006e2f50
006de972  PUSH 0x1
006de974  PUSH 0x919730
006de979  LEA ECX,[ESP + 0xe8]
006de980  CALL 0x00723fa0
006de985  PUSH EBX
006de986  PUSH 0x919730
006de98b  CALL 0x00750b10
006de990  MOV ECX,dword ptr [0x0093debc]
006de996  MOV dword ptr [0x00982c80],ECX
006de99c  MOV EAX,dword ptr [ECX]
006de99e  ADD ESP,0x8
006de9a1  MOV ESI,ECX
006de9a3  CALL dword ptr [EAX + 0x4]
006de9a6  MOV EDX,dword ptr [ESI + 0x4c]
006de9a9  MOV EAX,[0x00982bdc]
006de9ae  MOV ECX,dword ptr [EAX]
006de9b0  PUSH EDX
006de9b1  PUSH EAX
006de9b2  CALL dword ptr [ECX + 0x15c]
006de9b8  MOV ESI,dword ptr [ESI + 0x48]
006de9bb  MOV EAX,dword ptr [ESI]
006de9bd  PUSH EBX
006de9be  LEA ECX,[ESP + 0x10]
006de9c2  PUSH ECX
006de9c3  PUSH ESI
006de9c4  CALL dword ptr [EAX + 0xfc]
006de9ca  CMP dword ptr [0x009017e4],EBX
006de9d0  JZ 0x006de9f8
006de9d2  PUSH EBX
006de9d3  PUSH EBX
006de9d4  PUSH 0x919730
006de9d9  CALL 0x00750b00
006de9de  MOV EAX,[0x009017e4]
006de9e3  ADD ESP,0xc
006de9e6  CMP EAX,EBX
006de9e8  JZ 0x006de9f8
006de9ea  PUSH EBX
006de9eb  PUSH 0x919730
006de9f0  CALL 0x00505e80
006de9f5  ADD ESP,0x8
006de9f8  MOV ECX,dword ptr [0x0093debc]
006de9fe  MOV EDX,dword ptr [ECX]
006dea00  MOV ESI,ECX
006dea02  CALL dword ptr [EDX + 0x8]
006dea05  MOV EAX,dword ptr [ESI + 0x48]
006dea08  MOV ECX,dword ptr [EAX]
006dea0a  PUSH EAX
006dea0b  CALL dword ptr [ECX + 0x10c]
006dea11  MOV ECX,dword ptr [0x0093de9c]
006dea17  MOV dword ptr [0x00982c80],ECX
006dea1d  MOV EDX,dword ptr [ECX]
006dea1f  MOV ESI,ECX
006dea21  CALL dword ptr [EDX + 0x4]
006dea24  MOV EDX,dword ptr [ESI + 0x4c]
006dea27  MOV EAX,[0x00982bdc]
006dea2c  MOV ECX,dword ptr [EAX]
006dea2e  PUSH EDX
006dea2f  PUSH EAX
006dea30  CALL dword ptr [ECX + 0x15c]
006dea36  MOV ESI,dword ptr [ESI + 0x48]
006dea39  MOV EAX,dword ptr [ESI]
006dea3b  PUSH EBX
006dea3c  LEA ECX,[ESP + 0x10]
006dea40  PUSH ECX
006dea41  PUSH ESI
006dea42  CALL dword ptr [EAX + 0xfc]
006dea48  CMP dword ptr [0x00982b48],EBX
006dea4e  JZ 0x006dea85
006dea50  MOV ECX,dword ptr [0x0093de9c]
006dea56  MOV EAX,dword ptr [ECX + 0x48]
006dea59  MOV ECX,dword ptr [ECX + 0x44]
006dea5c  MOV ECX,dword ptr [ECX + 0x484]
006dea62  MOV EDX,dword ptr [EAX]
006dea64  PUSH 0xf
006dea66  PUSH ECX
006dea67  PUSH EAX
006dea68  CALL dword ptr [EDX + 0x68]
006dea6b  MOV EDX,dword ptr [0x00982b48]
006dea71  MOV EAX,dword ptr [EDX]
006dea73  MOV ECX,dword ptr [EAX + 0x18]
006dea76  PUSH 0x6
006dea78  PUSH 0x5
006dea7a  PUSH -0x1
006dea7c  PUSH ECX
006dea7d  CALL 0x006cff40
006dea82  ADD ESP,0x10
006dea85  MOV ECX,dword ptr [0x0093de9c]
006dea8b  MOV EAX,dword ptr [ECX + 0x48]
006dea8e  MOV ECX,dword ptr [ECX + 0x44]
006dea91  MOV ECX,dword ptr [ECX + 0x484]
006dea97  MOV EDX,dword ptr [EAX]
006dea99  PUSH 0x8
006dea9b  PUSH ECX
006dea9c  PUSH EAX
006dea9d  CALL dword ptr [EDX + 0x68]
006deaa0  MOV EAX,[0x00982b4c]
006deaa5  CMP EAX,EBX
006deaa7  JZ 0x006deabd
006deaa9  MOV EDX,dword ptr [EAX]
006deaab  MOV EAX,dword ptr [EDX + 0x18]
006deaae  PUSH 0x1
006deab0  PUSH 0x2
006deab2  PUSH -0x1
006deab4  PUSH EAX
006deab5  CALL 0x006cff40
006deaba  ADD ESP,0x10
006deabd  MOV ECX,dword ptr [0x0093de9c]
006deac3  MOV EDX,dword ptr [ECX]
006deac5  MOV ESI,ECX
006deac7  CALL dword ptr [EDX + 0x8]
006deaca  MOV EAX,dword ptr [ESI + 0x48]
006deacd  MOV ECX,dword ptr [EAX]
006deacf  PUSH EAX
006dead0  CALL dword ptr [ECX + 0x10c]
006dead6  MOV ECX,dword ptr [0x0093de9c]
006deadc  MOV dword ptr [0x00982c80],EBX
006deae2  MOV EAX,dword ptr [ECX + 0x48]
006deae5  MOV ECX,dword ptr [ECX + 0x44]
006deae8  MOV ECX,dword ptr [ECX + 0x484]
006deaee  MOV EDX,dword ptr [EAX]
006deaf0  PUSH 0xf
006deaf2  PUSH ECX
006deaf3  PUSH EAX
006deaf4  CALL dword ptr [EDX + 0x68]
006deaf7  CALL 0x006cfce0
006deafc  MOV EDI,0x6
006deb01  CALL 0x006e2f50
006deb06  XOR EAX,EAX
006deb08  MOV [0x0093de38],EAX
006deb0d  XOR EDX,EDX
006deb0f  MOV [0x0093de3c],EAX
006deb14  MOV dword ptr [0x009828a0],EDX
006deb1a  MOV [0x0093de40],EAX
006deb1f  MOV dword ptr [0x009828a4],EDX
006deb25  MOV [0x0093de44],EAX
006deb2a  MOV dword ptr [0x009828a8],EDX
006deb30  MOV [0x0093de48],EAX
006deb35  MOV dword ptr [0x009828ac],EDX
006deb3b  MOV [0x0093de4c],EAX
006deb40  MOV dword ptr [0x009828b0],EDX
006deb46  MOV [0x0093de50],EAX
006deb4b  MOV dword ptr [0x009828b4],EDX
006deb51  MOV [0x0093de54],EAX
006deb56  CMP byte ptr [0x00919658],BL
006deb5c  MOV dword ptr [0x009828b8],EDX
006deb62  MOV dword ptr [0x00982b90],EBX
006deb68  MOV dword ptr [0x00982b94],EBX
006deb6e  MOV dword ptr [0x00982b98],EBX
006deb74  MOV dword ptr [0x009828bc],EDX
006deb7a  JZ 0x006df59e
006deb80  MOV ECX,dword ptr [0x009196b0]
006deb86  CMP dword ptr [ECX + 0x10],EBX
006deb89  JZ 0x006df59e
006deb8f  MOV EDX,dword ptr [0x009196b8]
006deb95  MOV EAX,dword ptr [EDX + 0x290]
006deb9b  MOV ECX,dword ptr [0x009b392c]
006deba1  PUSH EAX
006deba2  CALL 0x00769580
006deba7  PUSH EBX
006deba8  PUSH 0x919650
006debad  MOV ECX,0x9ae364
006debb2  CALL 0x00753d90
006debb7  MOV ESI,dword ptr [0x009196b0]
006debbd  CALL 0x006e2f50
006debc2  MOV EDX,dword ptr [ESI + 0x8]
006debc5  MOV EAX,[0x00982bdc]
006debca  MOV ECX,dword ptr [EAX]
006debcc  PUSH EDX
006debcd  PUSH EBX
006debce  PUSH EAX
006debcf  CALL dword ptr [ECX + 0x94]
006debd5  MOV EDX,dword ptr [ESI + 0xc]
006debd8  MOV EAX,[0x00982bdc]
006debdd  MOV ECX,dword ptr [EAX]
006debdf  PUSH EDX
006debe0  PUSH EAX
006debe1  CALL dword ptr [ECX + 0x9c]
006debe7  MOV ECX,dword ptr [ESI + 0x18]
006debea  MOV EAX,dword ptr [ESI + 0x14]
006debed  MOV dword ptr [ESP + 0x28],ECX
006debf1  MOV dword ptr [ESP + 0x24],EAX
006debf5  MOV EAX,[0x00982bdc]
006debfa  LEA ECX,[ESP + 0x1c]
006debfe  PUSH ECX
006debff  MOV dword ptr [ESP + 0x20],EBX
006dec03  MOV dword ptr [ESP + 0x24],EBX
006dec07  MOV dword ptr [ESP + 0x30],0x0
006dec0f  MOV dword ptr [ESP + 0x34],0x3f800000
006dec17  MOV EDX,dword ptr [EAX]
006dec19  PUSH EAX
006dec1a  CALL dword ptr [EDX + 0xbc]
006dec20  CMP dword ptr [0x009017c4],EBX
006dec26  MOV dword ptr [0x00982a20],ESI
006dec2c  MOV dword ptr [0x00982c80],EBX
006dec32  JZ 0x006dec4a
006dec34  PUSH 0x4faee0
006dec39  PUSH 0x919960
006dec3e  LEA ECX,[ESP + 0xe8]
006dec45  CALL 0x00724230
006dec4a  CMP dword ptr [0x00901830],EBX
006dec50  JLE 0x006dec7a
006dec52  FLD float ptr [0x008fae68]
006dec58  FCOMP float ptr [0x008fae50]
006dec5e  FNSTSW AX
006dec60  TEST AH,0x1
006dec63  JNZ 0x006dec7a
006dec65  LEA EDX,[ESP + 0xe0]
006dec6c  PUSH EDX
006dec6d  PUSH 0x919650
006dec72  CALL 0x006e54e0
006dec77  ADD ESP,0x8
006dec7a  MOV ESI,dword ptr [0x009196b0]
006dec80  CALL 0x006e2f50
006dec85  MOV EDX,dword ptr [ESI + 0x8]
006dec88  MOV EAX,[0x00982bdc]
006dec8d  MOV ECX,dword ptr [EAX]
006dec8f  PUSH EDX
006dec90  PUSH EBX
006dec91  PUSH EAX
006dec92  CALL dword ptr [ECX + 0x94]
006dec98  MOV EDX,dword ptr [ESI + 0xc]
006dec9b  MOV EAX,[0x00982bdc]
006deca0  MOV ECX,dword ptr [EAX]
006deca2  PUSH EDX
006deca3  PUSH EAX
006deca4  CALL dword ptr [ECX + 0x9c]
006decaa  MOV ECX,dword ptr [ESI + 0x18]
006decad  MOV EAX,dword ptr [ESI + 0x14]
006decb0  MOV dword ptr [ESP + 0x28],ECX
006decb4  MOV dword ptr [ESP + 0x24],EAX
006decb8  MOV EAX,[0x00982bdc]
006decbd  LEA ECX,[ESP + 0x1c]
006decc1  PUSH ECX
006decc2  MOV dword ptr [ESP + 0x20],EBX
006decc6  MOV dword ptr [ESP + 0x24],EBX
006decca  MOV dword ptr [ESP + 0x30],0x0
006decd2  MOV dword ptr [ESP + 0x34],0x3f800000
006decda  MOV EDX,dword ptr [EAX]
006decdc  PUSH EAX
006decdd  CALL dword ptr [EDX + 0xbc]
006dece3  MOV dword ptr [0x00982a20],ESI
006dece9  MOV dword ptr [0x00982c80],EBX
006decef  CALL 0x006cfce0
006decf4  MOV ECX,dword ptr [0x0093dec4]
006decfa  MOV EAX,dword ptr [ECX + 0x48]
006decfd  MOV ECX,dword ptr [ECX + 0x44]
006ded00  MOV ECX,dword ptr [ECX + 0x18c]
006ded06  MOV EDX,dword ptr [EAX]
006ded08  PUSH 0x7
006ded0a  PUSH ECX
006ded0b  PUSH EAX
006ded0c  CALL dword ptr [EDX + 0x68]
006ded0f  MOV EDX,dword ptr [0x008f92e4]
006ded15  PUSH EBX
006ded16  PUSH EDX
006ded17  PUSH 0x919650
006ded1c  CALL 0x006de210
006ded21  ADD ESP,0xc
006ded24  PUSH 0x20
006ded26  PUSH 0x919650
006ded2b  LEA ECX,[ESP + 0xe8]
006ded32  CALL 0x00723fa0
006ded37  CALL 0x006e2f50
006ded3c  MOV ECX,dword ptr [0x0093de78]
006ded42  MOV dword ptr [0x00982c80],ECX
006ded48  MOV EAX,dword ptr [ECX]
006ded4a  MOV ESI,ECX
006ded4c  CALL dword ptr [EAX + 0x4]
006ded4f  MOV EDX,dword ptr [ESI + 0x4c]
006ded52  MOV EAX,[0x00982bdc]
006ded57  MOV ECX,dword ptr [EAX]
006ded59  PUSH EDX
006ded5a  PUSH EAX
006ded5b  CALL dword ptr [ECX + 0x15c]
006ded61  MOV ESI,dword ptr [ESI + 0x48]
006ded64  MOV EAX,dword ptr [ESI]
006ded66  PUSH EBX
006ded67  LEA ECX,[ESP + 0x10]
006ded6b  PUSH ECX
006ded6c  PUSH ESI
006ded6d  CALL dword ptr [EAX + 0xfc]
006ded73  PUSH EBX
006ded74  PUSH 0x919650
006ded79  CALL 0x007538d0
006ded7e  MOV ECX,dword ptr [0x0093de78]
006ded84  MOV EDX,dword ptr [ECX]
006ded86  ADD ESP,0x8
006ded89  MOV ESI,ECX
006ded8b  CALL dword ptr [EDX + 0x8]
006ded8e  MOV EAX,dword ptr [ESI + 0x48]
006ded91  MOV ECX,dword ptr [EAX]
006ded93  PUSH EAX
006ded94  CALL dword ptr [ECX + 0x10c]
006ded9a  MOV dword ptr [0x00982c80],EBX
006deda0  CALL 0x006e2f50
006deda5  MOV ECX,dword ptr [0x0093debc]
006dedab  MOV dword ptr [0x00982c80],ECX
006dedb1  MOV EDX,dword ptr [ECX]
006dedb3  MOV ESI,ECX
006dedb5  CALL dword ptr [EDX + 0x4]
006dedb8  MOV EDX,dword ptr [ESI + 0x4c]
006dedbb  MOV EAX,[0x00982bdc]
006dedc0  MOV ECX,dword ptr [EAX]
006dedc2  PUSH EDX
006dedc3  PUSH EAX
006dedc4  CALL dword ptr [ECX + 0x15c]
006dedca  MOV ESI,dword ptr [ESI + 0x48]
006dedcd  MOV EAX,dword ptr [ESI]
006dedcf  PUSH EBX
006dedd0  LEA ECX,[ESP + 0x10]
006dedd4  PUSH ECX
006dedd5  PUSH ESI
006dedd6  CALL dword ptr [EAX + 0xfc]
006deddc  PUSH 0x919650
006dede1  CALL 0x007268c0
006dede6  MOV ECX,dword ptr [0x0093debc]
006dedec  MOV EDX,dword ptr [ECX]
006dedee  ADD ESP,0x4
006dedf1  MOV ESI,ECX
006dedf3  CALL dword ptr [EDX + 0x8]
006dedf6  MOV EAX,dword ptr [ESI + 0x48]
006dedf9  MOV ECX,dword ptr [EAX]
006dedfb  PUSH EAX
006dedfc  CALL dword ptr [ECX + 0x10c]
006dee02  MOV ECX,dword ptr [0x0093debc]
006dee08  MOV dword ptr [0x00982c80],ECX
006dee0e  MOV EDX,dword ptr [ECX]
006dee10  MOV ESI,ECX
006dee12  CALL dword ptr [EDX + 0x4]
006dee15  MOV EDX,dword ptr [ESI + 0x4c]
006dee18  MOV EAX,[0x00982bdc]
006dee1d  MOV ECX,dword ptr [EAX]
006dee1f  PUSH EDX
006dee20  PUSH EAX
006dee21  CALL dword ptr [ECX + 0x15c]
006dee27  MOV ESI,dword ptr [ESI + 0x48]
006dee2a  MOV EAX,dword ptr [ESI]
006dee2c  PUSH EBX
006dee2d  LEA ECX,[ESP + 0x10]
006dee31  PUSH ECX
006dee32  PUSH ESI
006dee33  CALL dword ptr [EAX + 0xfc]
006dee39  PUSH EBX
006dee3a  PUSH 0x919650
006dee3f  CALL 0x00750b10
006dee44  MOV ECX,dword ptr [0x0093debc]
006dee4a  MOV EDX,dword ptr [ECX]
006dee4c  ADD ESP,0x8
006dee4f  MOV ESI,ECX
006dee51  CALL dword ptr [EDX + 0x8]
006dee54  MOV EAX,dword ptr [ESI + 0x48]
006dee57  MOV ECX,dword ptr [EAX]
006dee59  PUSH EAX
006dee5a  CALL dword ptr [ECX + 0x10c]
006dee60  MOV dword ptr [0x00982c80],EBX
006dee66  CALL 0x006e2f50
006dee6b  MOV ECX,dword ptr [0x0093debc]
006dee71  MOV dword ptr [0x00982c80],ECX
006dee77  MOV EDX,dword ptr [ECX]
006dee79  MOV ESI,ECX
006dee7b  CALL dword ptr [EDX + 0x4]
006dee7e  MOV EDX,dword ptr [ESI + 0x4c]
006dee81  MOV EAX,[0x00982bdc]
006dee86  MOV ECX,dword ptr [EAX]
006dee88  PUSH EDX
006dee89  PUSH EAX
006dee8a  CALL dword ptr [ECX + 0x15c]
006dee90  MOV ESI,dword ptr [ESI + 0x48]
006dee93  MOV EAX,dword ptr [ESI]
006dee95  PUSH EBX
006dee96  LEA ECX,[ESP + 0x10]
006dee9a  PUSH ECX
006dee9b  PUSH ESI
006dee9c  CALL dword ptr [EAX + 0xfc]
006deea2  CALL 0x00667660
006deea7  MOV ECX,dword ptr [0x0093debc]
006deead  MOV EDX,dword ptr [ECX]
006deeaf  MOV ESI,ECX
006deeb1  CALL dword ptr [EDX + 0x8]
006deeb4  MOV EAX,dword ptr [ESI + 0x48]
006deeb7  MOV ECX,dword ptr [EAX]
006deeb9  PUSH EAX
006deeba  CALL dword ptr [ECX + 0x10c]
006deec0  MOV dword ptr [0x00982c80],EBX
006deec6  CALL 0x006e2f50
006deecb  CMP dword ptr [0x00925e90],0x3
006deed2  JNZ 0x006defc2
006deed8  MOV ECX,dword ptr [0x0093debc]
006deede  MOV dword ptr [0x00982c80],ECX
006deee4  MOV EDX,dword ptr [ECX]
006deee6  MOV ESI,ECX
006deee8  CALL dword ptr [EDX + 0x4]
006deeeb  MOV EDX,dword ptr [ESI + 0x4c]
006deeee  MOV EAX,[0x00982bdc]
006deef3  MOV ECX,dword ptr [EAX]
006deef5  PUSH EDX
006deef6  PUSH EAX
006deef7  CALL dword ptr [ECX + 0x15c]
006deefd  MOV ESI,dword ptr [ESI + 0x48]
006def00  MOV EAX,dword ptr [ESI]
006def02  PUSH EBX
006def03  LEA ECX,[ESP + 0x10]
006def07  PUSH ECX
006def08  PUSH ESI
006def09  CALL dword ptr [EAX + 0xfc]
006def0f  PUSH 0x1
006def11  PUSH 0x919650
006def16  CALL 0x00750980
006def1b  MOV ECX,dword ptr [0x0093debc]
006def21  MOV EDX,dword ptr [ECX]
006def23  ADD ESP,0x8
006def26  MOV ESI,ECX
006def28  CALL dword ptr [EDX + 0x8]
006def2b  MOV EAX,dword ptr [ESI + 0x48]
006def2e  MOV ECX,dword ptr [EAX]
006def30  PUSH EAX
006def31  CALL dword ptr [ECX + 0x10c]
006def37  MOV dword ptr [0x00982c80],EBX
006def3d  CALL 0x006e2f50
006def42  CALL 0x007a1fa0
006def47  CMP EAX,EBX
006def49  JZ 0x006def54
006def4b  PUSH 0x1
006def4d  MOV ECX,EAX
006def4f  CALL 0x007a2200
006def54  CALL 0x006e2f50
006def59  MOV ECX,dword ptr [0x0093debc]
006def5f  MOV dword ptr [0x00982c80],ECX
006def65  MOV EDX,dword ptr [ECX]
006def67  MOV ESI,ECX
006def69  CALL dword ptr [EDX + 0x4]
006def6c  MOV EDX,dword ptr [ESI + 0x4c]
006def6f  MOV EAX,[0x00982bdc]
006def74  MOV ECX,dword ptr [EAX]
006def76  PUSH EDX
006def77  PUSH EAX
006def78  CALL dword ptr [ECX + 0x15c]
006def7e  MOV ESI,dword ptr [ESI + 0x48]
006def81  MOV EAX,dword ptr [ESI]
006def83  PUSH EBX
006def84  LEA ECX,[ESP + 0x10]
006def88  PUSH ECX
006def89  PUSH ESI
006def8a  CALL dword ptr [EAX + 0xfc]
006def90  PUSH EBX
006def91  PUSH 0x919650
006def96  CALL 0x00750980
006def9b  MOV ECX,dword ptr [0x0093debc]
006defa1  MOV EDX,dword ptr [ECX]
006defa3  ADD ESP,0x8
006defa6  MOV ESI,ECX
006defa8  CALL dword ptr [EDX + 0x8]
006defab  MOV EAX,dword ptr [ESI + 0x48]
006defae  MOV ECX,dword ptr [EAX]
006defb0  PUSH EAX
006defb1  CALL dword ptr [ECX + 0x10c]
006defb7  MOV dword ptr [0x00982c80],EBX
006defbd  CALL 0x006e2f50
006defc2  CMP dword ptr [0x00925e90],EDI
006defc8  JNZ 0x006df1cc
006defce  MOV EAX,[0x009196b4]
006defd3  CMP dword ptr [EAX + 0x30],EBX
006defd6  JZ 0x006df1cc
006defdc  MOV dword ptr [ESP + 0x40],0x0
006defe4  MOV dword ptr [ESP + 0x44],0x0
006defec  MOV dword ptr [ESP + 0x48],0x0
006deff4  MOV dword ptr [ESP + 0x50],0x42800000
006deffc  MOV dword ptr [ESP + 0x54],0x0
006df004  MOV dword ptr [ESP + 0x58],0x0
006df00c  MOV dword ptr [ESP + 0x60],0x42800000
006df014  MOV dword ptr [ESP + 0x64],0x42800000
006df01c  MOV dword ptr [ESP + 0x68],0x0
006df024  MOV dword ptr [ESP + 0x70],0x0
006df02c  MOV dword ptr [ESP + 0x74],0x42800000
006df034  MOV dword ptr [ESP + 0x78],0x0
006df03c  MOV dword ptr [ESP + 0x80],0x0
006df047  MOV dword ptr [ESP + 0x84],0x0
006df052  MOV dword ptr [ESP + 0x88],0x3f800000
006df05d  MOV dword ptr [ESP + 0x8c],0x0
006df068  MOV dword ptr [ESP + 0x90],0x3f800000
006df073  MOV dword ptr [ESP + 0x94],0x3f800000
006df07e  MOV dword ptr [ESP + 0x98],0x0
006df089  MOV dword ptr [ESP + 0x9c],0x3f800000
006df094  MOV byte ptr [ESP + 0xd0],BL
006df09b  MOV ECX,0x80808080
006df0a0  MOV dword ptr [ESP + 0xc0],ECX
006df0a7  MOV dword ptr [ESP + 0xc4],ECX
006df0ae  MOV dword ptr [ESP + 0xc8],ECX
006df0b5  MOV dword ptr [ESP + 0xcc],ECX
006df0bc  MOV EDX,dword ptr [EAX + 0x14c]
006df0c2  MOV dword ptr [ESP + 0x40],EDX
006df0c6  MOV ECX,dword ptr [EAX + 0x158]
006df0cc  MOV dword ptr [ESP + 0x50],ECX
006df0d0  MOV EDX,dword ptr [EAX + 0x164]
006df0d6  MOV dword ptr [ESP + 0x70],EDX
006df0da  MOV ECX,dword ptr [EAX + 0x170]
006df0e0  MOV dword ptr [ESP + 0x60],ECX
006df0e4  MOV EDX,dword ptr [EAX + 0x150]
006df0ea  MOV dword ptr [ESP + 0x44],EDX
006df0ee  MOV ECX,dword ptr [EAX + 0x15c]
006df0f4  MOV dword ptr [ESP + 0x54],ECX
006df0f8  MOV EDX,dword ptr [EAX + 0x168]
006df0fe  MOV dword ptr [ESP + 0x74],EDX
006df102  MOV ECX,dword ptr [EAX + 0x174]
006df108  MOV dword ptr [ESP + 0x64],ECX
006df10c  MOV EDX,dword ptr [EAX + 0x154]
006df112  MOV dword ptr [ESP + 0x48],EDX
006df116  MOV ECX,dword ptr [EAX + 0x160]
006df11c  MOV dword ptr [ESP + 0x58],ECX
006df120  MOV EDX,dword ptr [EAX + 0x16c]
006df126  MOV dword ptr [ESP + 0x78],EDX
006df12a  MOV EAX,dword ptr [EAX + 0x178]
006df130  MOV dword ptr [ESP + 0x68],EAX
006df134  XOR EAX,EAX
006df136  MOV CL,0xff
006df138  JMP 0x006df140
006df140  MOV byte ptr [ESP + EAX*0x4 + 0xc0],CL
006df147  MOV byte ptr [ESP + EAX*0x4 + 0xc1],CL
006df14e  MOV byte ptr [ESP + EAX*0x4 + 0xc2],CL
006df155  MOV byte ptr [ESP + EAX*0x4 + 0xc3],CL
006df15c  INC EAX
006df15d  CMP EAX,0x4
006df160  JL 0x006df140
006df162  MOV ECX,dword ptr [0x0093de94]
006df168  MOV dword ptr [0x00982c80],ECX
006df16e  MOV EDX,dword ptr [ECX]
006df170  MOV ESI,ECX
006df172  CALL dword ptr [EDX + 0x4]
006df175  MOV EDX,dword ptr [ESI + 0x4c]
006df178  MOV EAX,[0x00982bdc]
006df17d  MOV ECX,dword ptr [EAX]
006df17f  PUSH EDX
006df180  PUSH EAX
006df181  CALL dword ptr [ECX + 0x15c]
006df187  MOV ESI,dword ptr [ESI + 0x48]
006df18a  MOV EAX,dword ptr [ESI]
006df18c  PUSH EBX
006df18d  LEA ECX,[ESP + 0x10]
006df191  PUSH ECX
006df192  PUSH ESI
006df193  CALL dword ptr [EAX + 0xfc]
006df199  PUSH EBX
006df19a  PUSH 0x987ab0
006df19f  LEA EDX,[ESP + 0x48]
006df1a3  PUSH EBX
006df1a4  PUSH EDX
006df1a5  CALL 0x006d1a40
006df1aa  MOV ECX,dword ptr [0x0093de94]
006df1b0  MOV EAX,dword ptr [ECX]
006df1b2  ADD ESP,0x10
006df1b5  MOV ESI,ECX
006df1b7  CALL dword ptr [EAX + 0x8]
006df1ba  MOV EAX,dword ptr [ESI + 0x48]
006df1bd  MOV ECX,dword ptr [EAX]
006df1bf  PUSH EAX
006df1c0  CALL dword ptr [ECX + 0x10c]
006df1c6  MOV dword ptr [0x00982c80],EBX
006df1cc  CMP dword ptr [0x009017dc],EBX
006df1d2  JZ 0x006df1e1
006df1d4  CMP dword ptr [0x008f9218],EBX
006df1da  JZ 0x006df1e1
006df1dc  CALL 0x006dbb20
006df1e1  CALL 0x006cfce0
006df1e6  PUSH 0x919650
006df1eb  CALL 0x0041ad20
006df1f0  MOV ECX,dword ptr [0x0093debc]
006df1f6  MOV dword ptr [0x00982c80],ECX
006df1fc  MOV EDX,dword ptr [ECX]
006df1fe  ADD ESP,0x4
006df201  MOV ESI,ECX
006df203  CALL dword ptr [EDX + 0x4]
006df206  MOV EDX,dword ptr [ESI + 0x4c]
006df209  MOV EAX,[0x00982bdc]
006df20e  MOV ECX,dword ptr [EAX]
006df210  PUSH EDX
006df211  PUSH EAX
006df212  CALL dword ptr [ECX + 0x15c]
006df218  MOV ESI,dword ptr [ESI + 0x48]
006df21b  MOV EAX,dword ptr [ESI]
006df21d  PUSH EBX
006df21e  LEA ECX,[ESP + 0x10]
006df222  PUSH ECX
006df223  PUSH ESI
006df224  CALL dword ptr [EAX + 0xfc]
006df22a  CALL 0x00667660
006df22f  MOV ECX,dword ptr [0x0093debc]
006df235  MOV EDX,dword ptr [ECX]
006df237  MOV ESI,ECX
006df239  CALL dword ptr [EDX + 0x8]
006df23c  MOV EAX,dword ptr [ESI + 0x48]
006df23f  MOV ECX,dword ptr [EAX]
006df241  PUSH EAX
006df242  CALL dword ptr [ECX + 0x10c]
006df248  MOV dword ptr [0x00982c80],EBX
006df24e  CALL 0x006e2f50
006df253  MOV ECX,dword ptr [0x0093de98]
006df259  MOV dword ptr [0x00982c80],ECX
006df25f  MOV EDX,dword ptr [ECX]
006df261  MOV ESI,ECX
006df263  CALL dword ptr [EDX + 0x4]
006df266  MOV EDX,dword ptr [ESI + 0x4c]
006df269  MOV EAX,[0x00982bdc]
006df26e  MOV ECX,dword ptr [EAX]
006df270  PUSH EDX
006df271  PUSH EAX
006df272  CALL dword ptr [ECX + 0x15c]
006df278  MOV ESI,dword ptr [ESI + 0x48]
006df27b  MOV EAX,dword ptr [ESI]
006df27d  PUSH EBX
006df27e  LEA ECX,[ESP + 0x10]
006df282  PUSH ECX
006df283  PUSH ESI
006df284  CALL dword ptr [EAX + 0xfc]
006df28a  MOV ECX,dword ptr [0x0093de98]
006df290  MOV EDX,dword ptr [ECX]
006df292  MOV ESI,ECX
006df294  CALL dword ptr [EDX + 0x8]
006df297  MOV EAX,dword ptr [ESI + 0x48]
006df29a  MOV ECX,dword ptr [EAX]
006df29c  PUSH EAX
006df29d  CALL dword ptr [ECX + 0x10c]
006df2a3  CMP dword ptr [0x009017e4],EBX
006df2a9  MOV dword ptr [0x00982c80],EBX
006df2af  JZ 0x006df39d
006df2b5  CMP dword ptr [0x009017e0],EBX
006df2bb  JZ 0x006df2ea
006df2bd  MOV EAX,[0x00982bdc]
006df2c2  MOV EDX,dword ptr [EAX]
006df2c4  PUSH EBX
006df2c5  PUSH 0xe
006df2c7  PUSH EAX
006df2c8  CALL dword ptr [EDX + 0xe4]
006df2ce  CALL 0x006dae20
006df2d3  MOV EAX,[0x00982bdc]
006df2d8  MOV ECX,dword ptr [EAX]
006df2da  PUSH 0x1
006df2dc  PUSH 0xe
006df2de  PUSH EAX
006df2df  CALL dword ptr [ECX + 0xe4]
006df2e5  JMP 0x006df39d
006df2ea  MOV ECX,dword ptr [0x0093debc]
006df2f0  MOV dword ptr [0x00982c80],ECX
006df2f6  MOV EDX,dword ptr [ECX]
006df2f8  MOV ESI,ECX
006df2fa  CALL dword ptr [EDX + 0x4]
006df2fd  MOV EDX,dword ptr [ESI + 0x4c]
006df300  MOV EAX,[0x00982bdc]
006df305  MOV ECX,dword ptr [EAX]
006df307  PUSH EDX
006df308  PUSH EAX
006df309  CALL dword ptr [ECX + 0x15c]
006df30f  MOV ESI,dword ptr [ESI + 0x48]
006df312  MOV EAX,dword ptr [ESI]
006df314  PUSH EBX
006df315  LEA ECX,[ESP + 0x10]
006df319  PUSH ECX
006df31a  PUSH ESI
006df31b  CALL dword ptr [EAX + 0xfc]
006df321  MOV EAX,[0x00982bdc]
006df326  MOV EDX,dword ptr [EAX]
006df328  PUSH EBX
006df329  PUSH 0xe
006df32b  PUSH EAX
006df32c  CALL dword ptr [EDX + 0xe4]
006df332  PUSH EBX
006df333  PUSH 0x919650
006df338  CALL 0x00505e80
006df33d  PUSH EBX
006df33e  PUSH EBX
006df33f  PUSH 0x919650
006df344  CALL 0x00750b00
006df349  PUSH EBX
006df34a  PUSH 0x919650
006df34f  CALL 0x00744840
006df354  PUSH 0x919650
006df359  CALL 0x00507770
006df35e  PUSH EBX
006df35f  PUSH 0x919650
006df364  CALL 0x00738860
006df369  MOV EAX,[0x00982bdc]
006df36e  MOV ECX,dword ptr [EAX]
006df370  ADD ESP,0x28
006df373  PUSH 0x1
006df375  PUSH 0xe
006df377  PUSH EAX
006df378  CALL dword ptr [ECX + 0xe4]
006df37e  MOV ECX,dword ptr [0x0093debc]
006df384  MOV EDX,dword ptr [ECX]
006df386  MOV ESI,ECX
006df388  CALL dword ptr [EDX + 0x8]
006df38b  MOV EAX,dword ptr [ESI + 0x48]
006df38e  MOV ECX,dword ptr [EAX]
006df390  PUSH EAX
006df391  CALL dword ptr [ECX + 0x10c]
006df397  MOV dword ptr [0x00982c80],EBX
006df39d  CMP dword ptr [0x009017d0],EBX
006df3a3  JZ 0x006df409
006df3a5  MOV ECX,dword ptr [0x0093de78]
006df3ab  MOV dword ptr [0x00982c80],ECX
006df3b1  MOV EDX,dword ptr [ECX]
006df3b3  MOV ESI,ECX
006df3b5  CALL dword ptr [EDX + 0x4]
006df3b8  MOV EDX,dword ptr [ESI + 0x4c]
006df3bb  MOV EAX,[0x00982bdc]
006df3c0  MOV ECX,dword ptr [EAX]
006df3c2  PUSH EDX
006df3c3  PUSH EAX
006df3c4  CALL dword ptr [ECX + 0x15c]
006df3ca  MOV ESI,dword ptr [ESI + 0x48]
006df3cd  MOV EAX,dword ptr [ESI]
006df3cf  PUSH EBX
006df3d0  LEA ECX,[ESP + 0x10]
006df3d4  PUSH ECX
006df3d5  PUSH ESI
006df3d6  CALL dword ptr [EAX + 0xfc]
006df3dc  PUSH EBX
006df3dd  PUSH 0x919650
006df3e2  CALL 0x0044b190
006df3e7  MOV ECX,dword ptr [0x0093de78]
006df3ed  MOV EDX,dword ptr [ECX]
006df3ef  ADD ESP,0x8
006df3f2  MOV ESI,ECX
006df3f4  CALL dword ptr [EDX + 0x8]
006df3f7  MOV EAX,dword ptr [ESI + 0x48]
006df3fa  MOV ECX,dword ptr [EAX]
006df3fc  PUSH EAX
006df3fd  CALL dword ptr [ECX + 0x10c]
006df403  MOV dword ptr [0x00982c80],EBX
006df409  MOV ECX,dword ptr [0x0093dec4]
006df40f  MOV EAX,dword ptr [ECX + 0x48]
006df412  MOV ECX,dword ptr [ECX + 0x44]
006df415  MOV ECX,dword ptr [ECX + 0x18c]
006df41b  MOV EDX,dword ptr [EAX]
006df41d  PUSH 0x8
006df41f  PUSH ECX
006df420  PUSH EAX
006df421  CALL dword ptr [EDX + 0x68]
006df424  MOV EAX,[0x00982bdc]
006df429  PUSH 0x4
006df42b  PUSH 0x17
006df42d  MOV byte ptr [0x00982bad],0x1
006df434  MOV EDX,dword ptr [EAX]
006df436  PUSH EAX
006df437  CALL dword ptr [EDX + 0xe4]
006df43d  MOV EAX,[0x008f92e4]
006df442  PUSH EBX
006df443  PUSH EAX
006df444  PUSH 0x919650
006df449  CALL 0x006de210
006df44e  MOV ECX,dword ptr [0x0093dec4]
006df454  MOV byte ptr [0x00982bad],BL
006df45a  MOV EAX,dword ptr [ECX + 0x48]
006df45d  MOV ECX,dword ptr [ECX + 0x44]
006df460  MOV ECX,dword ptr [ECX + 0x18c]
006df466  MOV EDX,dword ptr [EAX]
006df468  ADD ESP,0xc
006df46b  PUSH 0x7
006df46d  PUSH ECX
006df46e  PUSH EAX
006df46f  CALL dword ptr [EDX + 0x68]
006df472  CMP dword ptr [0x009017ec],EBX
006df478  JZ 0x006df4df
006df47a  MOV ECX,dword ptr [0x0093dec0]
006df480  MOV dword ptr [0x00982c80],ECX
006df486  MOV EDX,dword ptr [ECX]
006df488  MOV ESI,ECX
006df48a  CALL dword ptr [EDX + 0x4]
006df48d  MOV EDX,dword ptr [ESI + 0x4c]
006df490  MOV EAX,[0x00982bdc]
006df495  MOV ECX,dword ptr [EAX]
006df497  PUSH EDX
006df498  PUSH EAX
006df499  CALL dword ptr [ECX + 0x15c]
006df49f  MOV ESI,dword ptr [ESI + 0x48]
006df4a2  MOV EAX,dword ptr [ESI]
006df4a4  PUSH EBX
006df4a5  LEA ECX,[ESP + 0x10]
006df4a9  PUSH ECX
006df4aa  PUSH ESI
006df4ab  CALL dword ptr [EAX + 0xfc]
006df4b1  PUSH 0x919650
006df4b6  MOV ECX,0x9166c0
006df4bb  CALL 0x00503d00
006df4c0  MOV ECX,dword ptr [0x0093dec0]
006df4c6  MOV EDX,dword ptr [ECX]
006df4c8  MOV ESI,ECX
006df4ca  CALL dword ptr [EDX + 0x8]
006df4cd  MOV EAX,dword ptr [ESI + 0x48]
006df4d0  MOV ECX,dword ptr [EAX]
006df4d2  PUSH EAX
006df4d3  CALL dword ptr [ECX + 0x10c]
006df4d9  MOV dword ptr [0x00982c80],EBX
006df4df  CMP dword ptr [0x00925e90],EDI
006df4e5  JNZ 0x006df57b
006df4eb  CMP dword ptr [0x009017ec],EBX
006df4f1  JZ 0x006df57b
006df4f7  MOV ECX,dword ptr [0x0093dec0]
006df4fd  MOV dword ptr [0x00982c80],ECX
006df503  MOV EDX,dword ptr [ECX]
006df505  MOV ESI,ECX
006df507  CALL dword ptr [EDX + 0x4]
006df50a  MOV EDX,dword ptr [ESI + 0x4c]
006df50d  MOV EAX,[0x00982bdc]
006df512  MOV ECX,dword ptr [EAX]
006df514  PUSH EDX
006df515  PUSH EAX
006df516  CALL dword ptr [ECX + 0x15c]
006df51c  MOV ESI,dword ptr [ESI + 0x48]
006df51f  MOV EAX,dword ptr [ESI]
006df521  PUSH EBX
006df522  LEA ECX,[ESP + 0x10]
006df526  PUSH ECX
006df527  PUSH ESI
006df528  CALL dword ptr [EAX + 0xfc]
006df52e  MOV EAX,[0x00982bdc]
006df533  MOV EDX,dword ptr [EAX]
006df535  PUSH EBX
006df536  PUSH 0xe
006df538  PUSH EAX
006df539  CALL dword ptr [EDX + 0xe4]
006df53f  MOV ECX,dword ptr [0x009196b8]
006df545  CALL 0x00758100
006df54a  MOV EAX,[0x00982bdc]
006df54f  MOV ECX,dword ptr [EAX]
006df551  PUSH 0x1
006df553  PUSH 0xe
006df555  PUSH EAX
006df556  CALL dword ptr [ECX + 0xe4]
006df55c  MOV ECX,dword ptr [0x0093dec0]
006df562  MOV EDX,dword ptr [ECX]
006df564  MOV ESI,ECX
006df566  CALL dword ptr [EDX + 0x8]
006df569  MOV EAX,dword ptr [ESI + 0x48]
006df56c  MOV ECX,dword ptr [EAX]
006df56e  PUSH EAX
006df56f  CALL dword ptr [ECX + 0x10c]
006df575  MOV dword ptr [0x00982c80],EBX
006df57b  PUSH 0x919650
006df580  MOV ECX,0x93e018
006df585  CALL 0x006d04e0
006df58a  MOV ECX,dword ptr [0x00982af0]
006df590  CMP ECX,EBX
006df592  JZ 0x006df59e
006df594  PUSH 0x919650
006df599  CALL 0x0074c000
006df59e  MOV ECX,dword ptr [0x009885b8]
006df5a4  MOV AL,[0x00982c38]
006df5a9  INC ECX
006df5aa  CMP AL,BL
006df5ac  MOV dword ptr [0x009885b8],ECX
006df5b2  MOV byte ptr [0x00982b8c],BL
006df5b8  JZ 0x006df5e7
006df5ba  MOV EAX,[0x00982bdc]
006df5bf  MOV EDX,dword ptr [EAX]
006df5c1  PUSH 0x7
006df5c3  PUSH 0xa8
006df5c8  PUSH EAX
006df5c9  CALL dword ptr [EDX + 0xe4]
006df5cf  MOV EAX,[0x00982a28]
006df5d4  PUSH EBX
006df5d5  PUSH 0x1
006df5d7  PUSH 0x7
006df5d9  PUSH 0x1
006df5db  PUSH -0x1
006df5dd  PUSH EBX
006df5de  PUSH EAX
006df5df  CALL 0x006d4100
006df5e4  ADD ESP,0x1c
006df5e7  MOV EDX,dword ptr [0x009017fc]
006df5ed  MOV EAX,[0x00925e90]
006df5f2  CMP EDX,EBX
006df5f4  SETNZ DL
006df5f7  CMP EAX,EDI
006df5f9  MOV byte ptr [0x00982b26],DL
006df5ff  JNZ 0x006df610
006df601  CMP dword ptr [0x0090180c],EBX
006df607  MOV byte ptr [0x00982b27],0x1
006df60e  JNZ 0x006df616
006df610  MOV byte ptr [0x00982b27],BL
006df616  MOV ESI,dword ptr [0x009196b4]
006df61c  CMP dword ptr [ESI + 0xc],EBX
006df61f  JZ 0x006df630
006df621  CMP dword ptr [0x00901804],EBX
006df627  MOV byte ptr [0x00982b29],0x1
006df62e  JNZ 0x006df636
006df630  MOV byte ptr [0x00982b29],BL
006df636  CMP EAX,EDI
006df638  JNZ 0x006df64e
006df63a  CMP dword ptr [0x00901810],EBX
006df640  JZ 0x006df64e
006df642  CMP dword ptr [0x009017ec],EBX
006df648  JZ 0x006df64e
006df64a  MOV CL,0x1
006df64c  JMP 0x006df650
006df64e  XOR CL,CL
006df650  MOV EAX,[0x009017d0]
006df655  CMP EAX,EBX
006df657  MOV byte ptr [0x00982b2a],CL
006df65d  JZ 0x006df66c
006df65f  CMP byte ptr [0x009b0a74],BL
006df665  MOV byte ptr [ESP + 0x13],0x1
006df66a  JNZ 0x006df670
006df66c  MOV byte ptr [ESP + 0x13],BL
006df670  CMP DL,BL
006df672  JNZ 0x006df684
006df674  CMP CL,BL
006df676  JNZ 0x006df684
006df678  CMP dword ptr [0x00901828],EBX
006df67e  JNZ 0x006df684
006df680  CMP EAX,EBX
006df682  JZ 0x006df696
006df684  CALL 0x006dbec0
006df689  CMP dword ptr [0x00901828],EBX
006df68f  JZ 0x006df696
006df691  CALL 0x006dbfe0
006df696  CMP byte ptr [0x00982b26],BL
006df69c  MOV byte ptr [ESP + 0xc],BL
006df6a0  MOV byte ptr [ESP + 0x34],BL
006df6a4  MOV byte ptr [ESP + 0x3c],BL
006df6a8  MOV byte ptr [ESP + 0x18],BL
006df6ac  MOV byte ptr [ESP + 0x38],BL
006df6b0  JZ 0x006df6b9
006df6b2  MOV byte ptr [ESP + 0xc],0x1
006df6b7  JMP 0x006df6f1
006df6b9  CMP dword ptr [0x00901800],EBX
006df6bf  JZ 0x006df6c8
006df6c1  MOV byte ptr [ESP + 0x34],0x1
006df6c6  JMP 0x006df6f1
006df6c8  CMP dword ptr [0x00901828],EBX
006df6ce  JZ 0x006df6d7
006df6d0  MOV byte ptr [ESP + 0x18],0x1
006df6d5  JMP 0x006df6f1
006df6d7  CMP byte ptr [0x00982b24],BL
006df6dd  JNZ 0x006df6f1
006df6df  CMP byte ptr [ESP + 0x13],BL
006df6e3  JZ 0x006df6ec
006df6e5  MOV byte ptr [ESP + 0x38],0x1
006df6ea  JMP 0x006df6f1
006df6ec  MOV byte ptr [ESP + 0x3c],0x1
006df6f1  CMP byte ptr [0x00982b30],BL
006df6f7  MOV dword ptr [ESP + 0x14],0x0
006df6ff  JZ 0x006df710
006df701  MOV ECX,dword ptr [0x00982b2c]
006df707  MOV dword ptr [ESP + 0x14],ECX
006df70b  JMP 0x006df7df
006df710  CMP dword ptr [0x00925e90],EDI
006df716  MOV ECX,dword ptr [0x0093deac]
006df71c  JZ 0x006df764
006df71e  MOV EDX,0x3f000000
006df723  MOV dword ptr [0x008f94c0],EDX
006df729  MOV dword ptr [0x008f94c4],EDX
006df72f  MOV dword ptr [0x008f94ec],0x3e4ccccd
006df739  MOV dword ptr [0x008f94c8],EDX
006df73f  CMP dword ptr [ECX + 0xc],EBX
006df742  MOV dword ptr [ESP + 0x14],0x3f4ccccd
006df74a  JBE 0x006df7df
006df750  MOV dword ptr [ESP + 0x14],0x3ecccccd
006df758  MOV dword ptr [0x008f94ec],0x3e0f5c29
006df762  JMP 0x006df7ba
006df764  CMP dword ptr [ESI + 0x24],EBX
006df767  JZ 0x006df7ba
006df769  MOV EAX,dword ptr [ESI + 0xf0]
006df76f  MOV dword ptr [0x008f94ec],0x0
006df779  MOV EDX,dword ptr [ESI + 0xe0]
006df77f  MOV dword ptr [ESP + 0x14],EAX
006df783  MOV dword ptr [0x008f94c0],EDX
006df789  MOV EAX,dword ptr [ESI + 0xe4]
006df78f  MOV [0x008f94c4],EAX
006df794  MOV EDX,dword ptr [ESI + 0xe8]
006df79a  MOV dword ptr [0x008f94c8],EDX
006df7a0  MOV EAX,0x8f94c0
006df7a5  FLD float ptr [EAX]
006df7a7  ADD EAX,0x4
006df7aa  CMP EAX,0x8f94cc
006df7af  FMUL float ptr [0x00899dd0]
006df7b5  FSTP float ptr [EAX + -0x4]
006df7b8  JL 0x006df7a5
006df7ba  CMP dword ptr [ECX + 0xc],EBX
006df7bd  JBE 0x006df7df
006df7bf  FLD float ptr [ESP + 0x14]
006df7c3  FMUL float ptr [0x008933d4]
006df7c9  FSTP float ptr [ESP + 0x14]
006df7cd  FLD float ptr [0x008f94ec]
006df7d3  FMUL float ptr [0x0089107c]
006df7d9  FSTP float ptr [0x008f94ec]
006df7df  CMP byte ptr [0x00982b2a],BL
006df7e5  JZ 0x006df7f4
006df7e7  MOV EAX,dword ptr [ESP + 0x3c]
006df7eb  PUSH EAX
006df7ec  CALL 0x006d4620
006df7f1  ADD ESP,0x4
006df7f4  CMP byte ptr [ESP + 0x13],BL
006df7f8  JZ 0x006df817
006df7fa  MOV ECX,dword ptr [0x009196bc]
006df800  CALL 0x0073d0c0
006df805  MOV ECX,dword ptr [ESP + 0x38]
006df809  PUSH ECX
006df80a  PUSH 0x919650
006df80f  CALL 0x006d49a0
006df814  ADD ESP,0x8
006df817  CMP dword ptr [0x00901800],EBX
006df81d  JZ 0x006df846
006df81f  FLD float ptr [0x008f94e8]
006df825  MOV EDX,dword ptr [ESP + 0x34]
006df829  FSUB float ptr [0x008f94e4]
006df82f  PUSH EDX
006df830  PUSH ECX
006df831  FMUL float ptr [ESP + 0x1c]
006df835  FADD float ptr [0x008f94e4]
006df83b  FSTP float ptr [ESP]
006df83e  CALL 0x006d3850
006df843  ADD ESP,0x8
006df846  XOR ESI,ESI
006df848  MOV EAX,[0x00982bdc]
006df84d  MOV ECX,dword ptr [EAX]
006df84f  PUSH EBX
006df850  PUSH ESI
006df851  PUSH EAX
006df852  CALL dword ptr [ECX + 0x104]
006df858  INC ESI
006df859  CMP ESI,0x8
006df85c  JL 0x006df848
006df85e  CMP dword ptr [0x00901828],EBX
006df864  JZ 0x006df882
006df866  MOV ECX,dword ptr [0x00982af0]
006df86c  CMP ECX,EBX
006df86e  JZ 0x006df882
006df870  CMP byte ptr [0x008f9b5c],BL
006df876  JZ 0x006df882
006df878  MOV EDX,dword ptr [ESP + 0x18]
006df87c  PUSH EDX
006df87d  CALL 0x006d53d0
006df882  CMP byte ptr [0x00982b26],BL
006df888  JZ 0x006df8cb
006df88a  XOR ESI,ESI
006df88c  LEA ESP,[ESP]
006df890  MOV EAX,[0x00982bdc]
006df895  MOV ECX,dword ptr [EAX]
006df897  PUSH EBX
006df898  PUSH ESI
006df899  PUSH EAX
006df89a  CALL dword ptr [ECX + 0x104]
006df8a0  INC ESI
006df8a1  CMP ESI,0x8
006df8a4  JL 0x006df890
006df8a6  MOV EDX,dword ptr [ESP + 0xc]
006df8aa  PUSH EDX
006df8ab  CALL 0x006dc040
006df8b0  ADD ESP,0x4
006df8b3  XOR ESI,ESI
006df8b5  MOV EAX,[0x00982bdc]
006df8ba  MOV ECX,dword ptr [EAX]
006df8bc  PUSH EBX
006df8bd  PUSH ESI
006df8be  PUSH EAX
006df8bf  CALL dword ptr [ECX + 0x104]
006df8c5  INC ESI
006df8c6  CMP ESI,0x8
006df8c9  JL 0x006df8b5
006df8cb  POP EDI
006df8cc  POP ESI
006df8cd  POP EBX
006df8ce  MOV ESP,EBP
006df8d0  POP EBP
006df8d1  RET
