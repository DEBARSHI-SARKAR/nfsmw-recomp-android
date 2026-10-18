0073dbe0  MOV AL,byte ptr [ECX + 0xc]
0073dbe3  XOR EDX,EDX
0073dbe5  CMP AL,DL
0073dbe7  JZ 0x0073dbf1
0073dbe9  FILD dword ptr [0x00925ae8]
0073dbef  JMP 0x0073dbf7
0073dbf1  FILD dword ptr [0x00925b14]
0073dbf7  CMP byte ptr [ECX + 0xd],DL
0073dbfa  FMUL float ptr [0x00890984]
0073dc00  FSUB float ptr [ECX + 0x4]
0073dc03  JZ 0x0073dc1b
0073dc05  MOV EAX,dword ptr [ECX]
0073dc07  FLD float ptr [ESP + 0x4]
0073dc0b  MOV EAX,dword ptr [EAX + 0x8]
0073dc0e  FCOMP float ptr [EAX + 0x4c]
0073dc11  FNSTSW AX
0073dc13  TEST AH,0x5
0073dc16  JP 0x0073dc1b
0073dc18  MOV dword ptr [ECX + 0x4],EDX
0073dc1b  CMP byte ptr [ECX + 0xe],DL
0073dc1e  JZ 0x0073dc2d
0073dc20  FCOM float ptr [ECX + 0x8]
0073dc23  FNSTSW AX
0073dc25  TEST AH,0x1
0073dc28  JNZ 0x0073dc2d
0073dc2a  MOV dword ptr [ECX + 0x4],EDX
0073dc2d  FCOM float ptr [0x00890968]
0073dc33  MOV EDX,dword ptr [ECX]
0073dc35  MOV EDX,dword ptr [EDX + 0x8]
0073dc38  FNSTSW AX
0073dc3a  TEST AH,0x41
0073dc3d  JP 0x0073dc4a
0073dc3f  FSTP ST0
0073dc41  FLD float ptr [EDX + 0x48]
0073dc44  FMUL float ptr [EDX + 0x4]
0073dc47  RET 0x4
0073dc4a  FCOM float ptr [ECX + 0x8]
0073dc4d  FNSTSW AX
0073dc4f  TEST AH,0x1
0073dc52  JNZ 0x0073dc5f
0073dc54  FSTP ST0
0073dc56  FLD float ptr [EDX + 0x48]
0073dc59  FMUL float ptr [EDX + 0x34]
0073dc5c  RET 0x4
0073dc5f  FDIV float ptr [ECX + 0x8]
0073dc62  PUSH EDX
0073dc63  PUSH ECX
0073dc64  FSTP float ptr [ESP]
0073dc67  CALL 0x0073dab0
0073dc6c  FMUL float ptr [EDX + 0x48]
0073dc6f  ADD ESP,0x8
0073dc72  RET 0x4
