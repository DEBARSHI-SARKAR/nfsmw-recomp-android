0068f7b0  PUSH ESI
0068f7b1  MOV ESI,ECX
0068f7b3  FLD float ptr [ESI + 0xd4]
0068f7b9  FCOMP float ptr [0x00890968]
0068f7bf  FNSTSW AX
0068f7c1  TEST AH,0x41
0068f7c4  JP 0x0068f7d6
0068f7c6  FLD float ptr [ESP + 0xc]
0068f7ca  FDIV float ptr [ESI + 0xc4]
0068f7d0  FSTP float ptr [ESI + 0xd0]
0068f7d6  FLD float ptr [ESP + 0x10]
0068f7da  MOV EAX,dword ptr [ESP + 0xc]
0068f7de  FCOMP float ptr [0x00890968]
0068f7e4  MOV ECX,dword ptr [ESP + 0x8]
0068f7e8  MOV dword ptr [ESI + 0xf0],EAX
0068f7ee  MOV dword ptr [ESI + 0x108],ECX
0068f7f4  FNSTSW AX
0068f7f6  TEST AH,0x41
0068f7f9  JNZ 0x0068f801
0068f7fb  FLD float ptr [ESP + 0x10]
0068f7ff  JMP 0x0068f807
0068f801  FLD float ptr [0x00890968]
0068f807  FSTP float ptr [ESI + 0xd4]
0068f80d  FLD float ptr [ESI + 0xc8]
0068f813  FCOMP float ptr [0x00890968]
0068f819  FNSTSW AX
0068f81b  TEST AH,0x41
0068f81e  JNZ 0x0068f866
0068f820  MOV EAX,dword ptr [ESI + 0xf8]
0068f826  MOV ECX,dword ptr [EAX + 0x8]
0068f829  MOV EDX,dword ptr [ESI + 0x100]
0068f82f  FLD float ptr [ECX + EDX*0x4 + 0x8]
0068f833  FMUL float ptr [0x008a938c]
0068f839  FMUL float ptr [0x008f8a90]
0068f83f  FMUL float ptr [ESI + 0xc8]
0068f845  FLD float ptr [ESI + 0xd0]
0068f84b  FCOMP float ptr [0x00890968]
0068f851  FNSTSW AX
0068f853  TEST AH,0x41
0068f856  JNZ 0x0068f85a
0068f858  FCHS
0068f85a  FADD float ptr [ESI + 0xe0]
0068f860  FSTP float ptr [ESI + 0xe0]
0068f866  FLD float ptr [ESI + 0xcc]
0068f86c  FCOMP float ptr [0x00890968]
0068f872  FNSTSW AX
0068f874  TEST AH,0x41
0068f877  JNZ 0x0068f8b8
0068f879  MOV EDX,dword ptr [ESI + 0xf8]
0068f87f  MOV EAX,dword ptr [EDX + 0x8]
0068f882  FLD float ptr [EAX + 0x10]
0068f885  FMUL float ptr [0x008a938c]
0068f88b  FMUL float ptr [0x008f8a94]
0068f891  FMUL float ptr [ESI + 0xcc]
0068f897  FLD float ptr [ESI + 0xd0]
0068f89d  FCOMP float ptr [0x00890968]
0068f8a3  FNSTSW AX
0068f8a5  TEST AH,0x41
0068f8a8  JNZ 0x0068f8ac
0068f8aa  FCHS
0068f8ac  FADD float ptr [ESI + 0xe0]
0068f8b2  FSTP float ptr [ESI + 0xe0]
0068f8b8  FLD float ptr [ESP + 0xc]
0068f8bc  FCOMP float ptr [0x00890968]
0068f8c2  FNSTSW AX
0068f8c4  TEST AH,0x5
0068f8c7  JP 0x0068f8d5
0068f8c9  FLD float ptr [ESP + 0xc]
0068f8cd  FCHS
0068f8cf  FSTP float ptr [ESP + 0x10]
0068f8d3  JMP 0x0068f8dd
0068f8d5  MOV ECX,dword ptr [ESP + 0xc]
0068f8d9  MOV dword ptr [ESP + 0x10],ECX
0068f8dd  MOV EDX,dword ptr [ESP + 0x10]
0068f8e1  MOV EAX,dword ptr [ESP + 0x8]
0068f8e5  PUSH EDX
0068f8e6  PUSH EAX
0068f8e7  CALL 0x005cb5d0
0068f8ec  FSTP float ptr [ESI + 0xfc]
0068f8f2  FLD float ptr [ESI + 0xd0]
0068f8f8  ADD ESP,0x8
0068f8fb  FMUL float ptr [ESI + 0xc4]
0068f901  FSUB float ptr [ESP + 0xc]
0068f905  FLD float ptr [ESI + 0xcc]
0068f90b  FCOMP float ptr [0x00890968]
0068f911  FNSTSW AX
0068f913  TEST AH,0x41
0068f916  JNZ 0x0068f944
0068f918  FLD float ptr [ESP + 0xc]
0068f91c  FCOMP float ptr [0x00890968]
0068f922  FLD float ptr [ESP + 0xc]
0068f926  FNSTSW AX
0068f928  TEST AH,0x5
0068f92b  JP 0x0068f92f
0068f92d  FCHS
0068f92f  FCOMP float ptr [0x0089096c]
0068f935  FNSTSW AX
0068f937  TEST AH,0x41
0068f93a  JNZ 0x0068f944
0068f93c  FST float ptr [ESI + 0xe4]
0068f942  JMP 0x0068f94e
0068f944  MOV dword ptr [ESI + 0xe4],0x0
0068f94e  FLD ST0
0068f950  PUSH ECX
0068f951  FMUL ST1
0068f953  FLD float ptr [ESP + 0xc]
0068f957  FMUL float ptr [ESP + 0xc]
0068f95b  FADDP
0068f95d  FSTP float ptr [ESP]
0068f960  FSTP ST0
0068f962  CALL 0x005c5e80
0068f967  FLD float ptr [ESI + 0xcc]
0068f96d  ADD ESP,0x4
0068f970  FCOMP float ptr [0x008933d4]
0068f976  FNSTSW AX
0068f978  TEST AH,0x41
0068f97b  JNZ 0x0068f9b8
0068f97d  FCOM float ptr [0x0089096c]
0068f983  FNSTSW AX
0068f985  TEST AH,0x41
0068f988  JNZ 0x0068f9b8
0068f98a  MOV EDX,dword ptr [ESI + 0xf4]
0068f990  MOV ECX,dword ptr [ESI + 0x100]
0068f996  MOV byte ptr [ESI + 0x104],0x1
0068f99d  MOV EAX,dword ptr [EDX + 0x8]
0068f9a0  FLD float ptr [EAX + ECX*0x4 + 0x18]
0068f9a4  FDIV ST0,ST1
0068f9a6  FMUL float ptr [ESP + 0xc]
0068f9aa  FMUL float ptr [ESI + 0xd4]
0068f9b0  FMUL float ptr [0x00890e94]
0068f9b6  JMP 0x0068f9c4
0068f9b8  FLD float ptr [ESI + 0xe0]
0068f9be  FDIV float ptr [ESI + 0xc4]
0068f9c4  MOV EDX,dword ptr [ESI + 0xf4]
0068f9ca  FSTP float ptr [ESI + 0xdc]
0068f9d0  MOV EAX,dword ptr [EDX + 0x8]
0068f9d3  FLD float ptr [ESP + 0x8]
0068f9d7  MOV ECX,dword ptr [ESI + 0x100]
0068f9dd  FMUL float ptr [EAX + ECX*0x4 + 0x18]
0068f9e1  FMUL float ptr [ESI + 0xd4]
0068f9e7  FMUL float ptr [0x00890e94]
0068f9ed  FST float ptr [ESI + 0xd8]
0068f9f3  FLD ST1
0068f9f5  FCOMP float ptr [0x0089096c]
0068f9fb  FNSTSW AX
0068f9fd  TEST AH,0x41
0068fa00  JNZ 0x0068fa0c
0068fa02  FDIV ST0,ST1
0068fa04  FSTP float ptr [ESI + 0xd8]
0068fa0a  JMP 0x0068fa0e
0068fa0c  FSTP ST0
0068fa0e  FSTP ST0
0068fa10  FLD float ptr [ESP + 0xc]
0068fa14  FCOMP float ptr [0x00890968]
0068fa1a  FLD float ptr [ESP + 0xc]
0068fa1e  FNSTSW AX
0068fa20  TEST AH,0x5
0068fa23  JP 0x0068fa27
0068fa25  FCHS
0068fa27  FCOMP float ptr [0x0089096c]
0068fa2d  FNSTSW AX
0068fa2f  TEST AH,0x41
0068fa32  JNZ 0x0068fa5c
0068fa34  FLD float ptr [ESI + 0xfc]
0068fa3a  FMUL float ptr [0x008aabd8]
0068fa40  FSIN
0068fa42  FMUL float ptr [ESI + 0xd8]
0068fa48  FMUL float ptr [0x008933d4]
0068fa4e  FSUBR float ptr [ESI + 0xdc]
0068fa54  FSTP float ptr [ESI + 0xdc]
0068fa5a  JMP 0x0068fa94
0068fa5c  FLD float ptr [ESP + 0x8]
0068fa60  FCOMP float ptr [0x00890968]
0068fa66  FLD float ptr [ESP + 0x8]
0068fa6a  FNSTSW AX
0068fa6c  TEST AH,0x5
0068fa6f  JP 0x0068fa73
0068fa71  FCHS
0068fa73  FCOM float ptr [0x0089096c]
0068fa79  FNSTSW AX
0068fa7b  TEST AH,0x5
0068fa7e  JNP 0x0068fa88
0068fa80  FSTP ST0
0068fa82  FLD float ptr [0x0089096c]
0068fa88  FMUL float ptr [ESI + 0xd8]
0068fa8e  FSTP float ptr [ESI + 0xd8]
0068fa94  FLD float ptr [0x0089096c]
0068fa9a  FSUB float ptr [ESI + 0xcc]
0068faa0  FDIV float ptr [ESI + 0xc4]
0068faa6  FMUL float ptr [ESP + 0xc]
0068faaa  FSTP float ptr [ESI + 0xd0]
0068fab0  POP ESI
0068fab1  RET 0x10
