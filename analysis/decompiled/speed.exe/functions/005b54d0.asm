005b54d0  SUB ESP,0x44
005b54d3  MOV ECX,dword ptr [ESP + 0x4c]
005b54d7  MOV EAX,ECX
005b54d9  MOV EDX,dword ptr [EAX]
005b54db  MOV dword ptr [ESP + 0x4],EDX
005b54df  FLD float ptr [ESP + 0x4]
005b54e3  MOV EDX,dword ptr [EAX + 0x4]
005b54e6  MOV dword ptr [ESP + 0x8],EDX
005b54ea  MOV EDX,dword ptr [EAX + 0x8]
005b54ed  MOV EAX,dword ptr [EAX + 0xc]
005b54f0  PUSH ESI
005b54f1  MOV ESI,dword ptr [ESP + 0x4c]
005b54f5  FMUL float ptr [ESI]
005b54f7  MOV dword ptr [ESP + 0x10],EDX
005b54fb  FLD float ptr [ESP + 0x10]
005b54ff  MOV dword ptr [ESP + 0x14],EAX
005b5503  FMUL float ptr [ESI + 0x8]
005b5506  FADDP
005b5508  FLD float ptr [ESP + 0x14]
005b550c  FMUL float ptr [ESI + 0xc]
005b550f  FADDP
005b5511  FLD float ptr [ESP + 0xc]
005b5515  FMUL float ptr [ESI + 0x4]
005b5518  FADDP
005b551a  FCOM float ptr [0x00890968]
005b5520  FST float ptr [ESP + 0x50]
005b5524  FNSTSW AX
005b5526  TEST AH,0x5
005b5529  JP 0x005b5559
005b552b  FCHS
005b552d  FST float ptr [ESP + 0x50]
005b5531  FLD float ptr [ESP + 0x8]
005b5535  FCHS
005b5537  FSTP float ptr [ESP + 0x8]
005b553b  FLD float ptr [ESP + 0xc]
005b553f  FCHS
005b5541  FSTP float ptr [ESP + 0xc]
005b5545  FLD float ptr [ESP + 0x10]
005b5549  FCHS
005b554b  FSTP float ptr [ESP + 0x10]
005b554f  FLD float ptr [ESP + 0x14]
005b5553  FCHS
005b5555  FSTP float ptr [ESP + 0x14]
005b5559  FCOMP float ptr [0x008a2d18]
005b555f  FNSTSW AX
005b5561  TEST AH,0x5
005b5564  JP 0x005b56f6
005b556a  MOV ECX,dword ptr [ESP + 0x50]
005b556e  PUSH ECX
005b556f  CALL 0x0045dd10
005b5574  MOV EDX,0x4000
005b5579  SUB EDX,EAX
005b557b  MOVZX EAX,DX
005b557e  MOV dword ptr [ESP + 0x54],EAX
005b5582  FILD dword ptr [ESP + 0x54]
005b5586  FMUL float ptr [0x008941f4]
005b558c  FSTP float ptr [ESP + 0x50]
005b5590  MOV ECX,dword ptr [ESP + 0x50]
005b5594  PUSH ECX
005b5595  CALL 0x0045dbd0
005b559a  FSTP float ptr [ESP + 0xc]
005b559e  FLD float ptr [ESP + 0x54]
005b55a2  ADD ESP,0x4
005b55a5  FMUL float ptr [ESP + 0x58]
005b55a9  FSTP float ptr [ESP]
005b55ac  CALL 0x0045dbd0
005b55b1  FSTP float ptr [ESP + 0x54]
005b55b5  FLD float ptr [0x0089096c]
005b55bb  FSUB float ptr [ESP + 0x58]
005b55bf  FMUL float ptr [ESP + 0x50]
005b55c3  FSTP float ptr [ESP]
005b55c6  CALL 0x0045dbd0
005b55cb  FSTP float ptr [ESP + 0x50]
005b55cf  FLD float ptr [ESP + 0x54]
005b55d3  FMUL float ptr [ESP + 0xc]
005b55d7  FSTP float ptr [ESP + 0x1c]
005b55db  MOV EDX,dword ptr [ESP + 0x1c]
005b55df  FLD float ptr [ESP + 0x54]
005b55e3  MOV dword ptr [ESP + 0x2c],EDX
005b55e7  FMUL float ptr [ESP + 0x10]
005b55eb  FSTP float ptr [ESP + 0x20]
005b55ef  MOV EAX,dword ptr [ESP + 0x20]
005b55f3  FLD float ptr [ESP + 0x54]
005b55f7  MOV dword ptr [ESP + 0x30],EAX
005b55fb  FMUL float ptr [ESP + 0x14]
005b55ff  MOV EAX,dword ptr [ESP + 0x50]
005b5603  PUSH EAX
005b5604  PUSH ESI
005b5605  FSTP float ptr [ESP + 0x2c]
005b5609  MOV ECX,dword ptr [ESP + 0x2c]
005b560d  FLD float ptr [ESP + 0x5c]
005b5611  MOV dword ptr [ESP + 0x3c],ECX
005b5615  FMUL float ptr [ESP + 0x20]
005b5619  LEA ECX,[ESP + 0x44]
005b561d  PUSH ECX
005b561e  FSTP float ptr [ESP + 0x34]
005b5622  MOV EDX,dword ptr [ESP + 0x34]
005b5626  MOV dword ptr [ESP + 0x44],EDX
005b562a  CALL 0x005ad1b0
005b562f  FLD float ptr [ESP + 0x38]
005b5633  FADD float ptr [EAX]
005b5635  ADD ESP,0x10
005b5638  FSTP float ptr [ESP + 0x18]
005b563c  MOV EDX,dword ptr [ESP + 0x18]
005b5640  FLD float ptr [ESP + 0x2c]
005b5644  MOV dword ptr [ESP + 0x28],EDX
005b5648  FADD float ptr [EAX + 0x4]
005b564b  FSTP float ptr [ESP + 0x1c]
005b564f  FLD float ptr [ESP + 0x30]
005b5653  FADD float ptr [EAX + 0x8]
005b5656  FSTP float ptr [ESP + 0x20]
005b565a  MOV ECX,dword ptr [ESP + 0x20]
005b565e  FLD float ptr [ESP + 0x34]
005b5662  MOV dword ptr [ESP + 0x30],ECX
005b5666  FADD float ptr [EAX + 0xc]
005b5669  MOV EAX,dword ptr [ESP + 0x1c]
005b566d  MOV dword ptr [ESP + 0x2c],EAX
005b5671  FSTP float ptr [ESP + 0x24]
005b5675  MOV EDX,dword ptr [ESP + 0x24]
005b5679  FLD float ptr [0x0089096c]
005b567f  MOV dword ptr [ESP + 0x34],EDX
005b5683  FDIV float ptr [ESP + 0x4]
005b5687  FLD float ptr [ESP + 0x28]
005b568b  FMUL ST1
005b568d  FSTP float ptr [ESP + 0x18]
005b5691  FLD float ptr [ESP + 0x2c]
005b5695  MOV EAX,dword ptr [ESP + 0x18]
005b5699  FMUL ST1
005b569b  MOV dword ptr [ESP + 0x28],EAX
005b569f  FSTP float ptr [ESP + 0x1c]
005b56a3  MOV ECX,dword ptr [ESP + 0x1c]
005b56a7  FLD float ptr [ESP + 0x30]
005b56ab  MOV dword ptr [ESP + 0x2c],ECX
005b56af  MOV ECX,dword ptr [ESP + 0x28]
005b56b3  FMUL ST1
005b56b5  MOV dword ptr [ESP + 0x8],ECX
005b56b9  FSTP float ptr [ESP + 0x20]
005b56bd  MOV EDX,dword ptr [ESP + 0x20]
005b56c1  FLD float ptr [ESP + 0x34]
005b56c5  MOV dword ptr [ESP + 0x30],EDX
005b56c9  MOV EDX,dword ptr [ESP + 0x2c]
005b56cd  FMUL ST1
005b56cf  MOV dword ptr [ESP + 0xc],EDX
005b56d3  FSTP float ptr [ESP + 0x24]
005b56d7  MOV EAX,dword ptr [ESP + 0x24]
005b56db  MOV dword ptr [ESP + 0x34],EAX
005b56df  MOV EAX,dword ptr [ESP + 0x30]
005b56e3  FSTP ST0
005b56e5  MOV ECX,dword ptr [ESP + 0x34]
005b56e9  MOV dword ptr [ESP + 0x10],EAX
005b56ed  MOV dword ptr [ESP + 0x14],ECX
005b56f1  JMP 0x005b5804
005b56f6  FLD float ptr [ECX]
005b56f8  FSUB float ptr [ESI]
005b56fa  FSTP float ptr [ESP + 0x28]
005b56fe  MOV EDX,dword ptr [ESP + 0x28]
005b5702  FLD float ptr [ECX + 0x4]
005b5705  MOV dword ptr [ESP + 0x18],EDX
005b5709  FSUB float ptr [ESI + 0x4]
005b570c  FSTP float ptr [ESP + 0x2c]
005b5710  MOV EAX,dword ptr [ESP + 0x2c]
005b5714  FLD float ptr [ECX + 0x8]
005b5717  MOV dword ptr [ESP + 0x1c],EAX
005b571b  FSUB float ptr [ESI + 0x8]
005b571e  FSTP float ptr [ESP + 0x30]
005b5722  FLD float ptr [ECX + 0xc]
005b5725  MOV ECX,dword ptr [ESP + 0x30]
005b5729  FSUB float ptr [ESI + 0xc]
005b572c  MOV dword ptr [ESP + 0x20],ECX
005b5730  FSTP float ptr [ESP + 0x34]
005b5734  MOV EDX,dword ptr [ESP + 0x34]
005b5738  FLD float ptr [ESP + 0x18]
005b573c  MOV dword ptr [ESP + 0x24],EDX
005b5740  FMUL float ptr [ESP + 0x54]
005b5744  FSTP float ptr [ESP + 0x28]
005b5748  MOV EAX,dword ptr [ESP + 0x28]
005b574c  FLD float ptr [ESP + 0x1c]
005b5750  MOV dword ptr [ESP + 0x18],EAX
005b5754  FMUL float ptr [ESP + 0x54]
005b5758  FSTP float ptr [ESP + 0x2c]
005b575c  MOV ECX,dword ptr [ESP + 0x2c]
005b5760  FLD float ptr [ESP + 0x20]
005b5764  MOV dword ptr [ESP + 0x1c],ECX
005b5768  FMUL float ptr [ESP + 0x54]
005b576c  FSTP float ptr [ESP + 0x30]
005b5770  MOV EDX,dword ptr [ESP + 0x30]
005b5774  FLD float ptr [ESP + 0x24]
005b5778  MOV dword ptr [ESP + 0x20],EDX
005b577c  FMUL float ptr [ESP + 0x54]
005b5780  FSTP float ptr [ESP + 0x34]
005b5784  MOV EAX,dword ptr [ESP + 0x34]
005b5788  FLD float ptr [ESP + 0x18]
005b578c  MOV dword ptr [ESP + 0x24],EAX
005b5790  FADD float ptr [ESI]
005b5792  FSTP float ptr [ESP + 0x28]
005b5796  MOV ECX,dword ptr [ESP + 0x28]
005b579a  FLD float ptr [ESP + 0x1c]
005b579e  MOV dword ptr [ESP + 0x18],ECX
005b57a2  FADD float ptr [ESI + 0x4]
005b57a5  FSTP float ptr [ESP + 0x2c]
005b57a9  MOV EDX,dword ptr [ESP + 0x2c]
005b57ad  FLD float ptr [ESP + 0x20]
005b57b1  MOV dword ptr [ESP + 0x1c],EDX
005b57b5  FADD float ptr [ESI + 0x8]
005b57b8  LEA EDX,[ESP + 0x18]
005b57bc  PUSH EDX
005b57bd  FSTP float ptr [ESP + 0x34]
005b57c1  MOV EAX,dword ptr [ESP + 0x34]
005b57c5  FLD float ptr [ESP + 0x28]
005b57c9  MOV dword ptr [ESP + 0x24],EAX
005b57cd  FADD float ptr [ESI + 0xc]
005b57d0  FSTP float ptr [ESP + 0x38]
005b57d4  MOV ECX,dword ptr [ESP + 0x38]
005b57d8  MOV dword ptr [ESP + 0x28],ECX
005b57dc  CALL 0x005b3a70
005b57e1  MOV EAX,dword ptr [ESP + 0x1c]
005b57e5  MOV ECX,dword ptr [ESP + 0x20]
005b57e9  MOV EDX,dword ptr [ESP + 0x24]
005b57ed  MOV dword ptr [ESP + 0xc],EAX
005b57f1  MOV EAX,dword ptr [ESP + 0x28]
005b57f5  ADD ESP,0x4
005b57f8  MOV dword ptr [ESP + 0xc],ECX
005b57fc  MOV dword ptr [ESP + 0x10],EDX
005b5800  MOV dword ptr [ESP + 0x14],EAX
005b5804  MOV ECX,dword ptr [ESP + 0x58]
005b5808  PUSH ECX
005b5809  LEA EDX,[ESP + 0x3c]
005b580d  PUSH EDX
005b580e  LEA ECX,[ESP + 0x10]
005b5812  CALL 0x005ad0f0
005b5817  MOV EDX,dword ptr [EAX]
005b5819  MOV ECX,dword ptr [ESP + 0x5c]
005b581d  MOV dword ptr [ECX],EDX
005b581f  MOV EDX,dword ptr [EAX + 0x4]
005b5822  MOV dword ptr [ECX + 0x4],EDX
005b5825  MOV EDX,dword ptr [EAX + 0x8]
005b5828  MOV dword ptr [ECX + 0x8],EDX
005b582b  MOV EAX,dword ptr [EAX + 0xc]
005b582e  MOV dword ptr [ECX + 0xc],EAX
005b5831  POP ESI
005b5832  ADD ESP,0x44
005b5835  RET
