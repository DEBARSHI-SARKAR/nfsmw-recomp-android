008218a0  PUSH EBP
008218a1  MOV EBP,ESP
008218a3  PUSH ECX
008218a4  MOV EAX,dword ptr [EBP + 0x8]
008218a7  LEA EAX,[EAX + EAX*0x8]
008218aa  SHL EAX,0x4
008218ad  ADD EAX,dword ptr [0x009c21f4]
008218b3  MOVSX ECX,word ptr [EAX + 0x42]
008218b7  MOV dword ptr [EBP + 0x8],ECX
008218ba  MOVSX ECX,byte ptr [EAX + 0x2b]
008218be  FILD dword ptr [EBP + 0x8]
008218c1  MOV dword ptr [EBP + 0x8],ECX
008218c4  MOV ECX,dword ptr [EAX + 0x7c]
008218c7  TEST ECX,ECX
008218c9  FIMUL dword ptr [EBP + 0x8]
008218cc  FMUL float ptr [EAX + 0x38]
008218cf  FMUL float ptr [0x008c5ca8]
008218d5  FST float ptr [EAX + 0x48]
008218d8  JZ 0x008218f3
008218da  MOVZX EDX,byte ptr [EAX + 0x6b]
008218de  MOVSX ECX,byte ptr [EDX + ECX*0x1]
008218e2  MOV dword ptr [EBP + 0x8],ECX
008218e5  FILD dword ptr [EBP + 0x8]
008218e8  FMUL ST1
008218ea  FMUL float ptr [0x00890bf0]
008218f0  FSTP float ptr [EAX + 0x48]
008218f3  CMP dword ptr [EAX + 0x74],0x0
008218f7  FSTP ST0
008218f9  JZ 0x00821920
008218fb  FLD float ptr [EAX + 0x48]
008218fe  FMUL float ptr [0x00896ab4]
00821904  FSTP float ptr [EBP + 0x8]
00821907  FLD float ptr [EBP + 0x8]
0082190a  FISTP dword ptr [EBP + -0x4]
0082190d  MOV ECX,dword ptr [EAX + 0x74]
00821910  MOV EDX,dword ptr [EBP + -0x4]
00821913  MOVSX ECX,byte ptr [ECX + EDX*0x1]
00821917  MOV dword ptr [EBP + 0x8],ECX
0082191a  FILD dword ptr [EBP + 0x8]
0082191d  FSTP float ptr [EAX + 0x48]
00821920  FLD float ptr [0x0090bd14]
00821926  FMUL float ptr [EAX + 0x48]
00821929  FSTP float ptr [EAX + 0x48]
0082192c  LEAVE
0082192d  RET
