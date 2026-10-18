0081e1e8  MOV EDX,dword ptr [ESP + 0x4]
0081e1ec  MOV EAX,dword ptr [EDX*0x4 + 0x9c1f44]
0081e1f3  MOVSX ECX,byte ptr [EAX + 0x42]
0081e1f7  CMP dword ptr [ESP + 0x8],ECX
0081e1fb  JNZ 0x0081e227
0081e1fd  MOV ECX,dword ptr [ESP + 0xc]
0081e201  SUB dword ptr [EAX + 0x4c],ECX
0081e204  CMP dword ptr [EAX + 0x58],0x0
0081e208  JZ 0x0081e227
0081e20a  MOV EAX,[0x009c1c40]
0081e20f  LEA EAX,[EAX*0x8 + 0x9c1c44]
0081e216  AND word ptr [EAX],0x0
0081e21a  MOV word ptr [EAX + 0x2],DX
0081e21e  MOV dword ptr [EAX + 0x4],ECX
0081e221  INC dword ptr [0x009c1c40]
0081e227  RET
