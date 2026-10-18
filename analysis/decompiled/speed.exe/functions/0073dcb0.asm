0073dcb0  PUSH ECX
0073dcb1  FLD float ptr [0x00890968]
0073dcb7  FLD float ptr [ECX + 0x4]
0073dcba  FUCOMPP
0073dcbc  FNSTSW AX
0073dcbe  TEST AH,0x44
0073dcc1  JNP 0x0073dd38
0073dcc3  FLD float ptr [0x008f8308]
0073dcc9  MOV EDX,dword ptr [ECX]
0073dccb  FSUB float ptr [ECX + 0x4]
0073dcce  MOV EAX,dword ptr [EDX + 0x8]
0073dcd1  FSTP float ptr [ESP]
0073dcd4  FLD float ptr [ESP]
0073dcd7  FCOMP float ptr [EAX + 0x44]
0073dcda  FNSTSW AX
0073dcdc  TEST AH,0x41
0073dcdf  JNZ 0x0073dcf3
0073dce1  MOV EDX,dword ptr [ECX + 0xc]
0073dce4  MOV dword ptr [ECX + 0x8],EDX
0073dce7  FLD float ptr [ECX + 0x8]
0073dcea  MOV dword ptr [ECX + 0x4],0x0
0073dcf1  POP ECX
0073dcf2  RET
0073dcf3  FLD float ptr [ESP]
0073dcf6  FCOMP float ptr [0x00890968]
0073dcfc  FNSTSW AX
0073dcfe  TEST AH,0x1
0073dd01  JNZ 0x0073dd38
0073dd03  FLD float ptr [ESP]
0073dd06  MOV EDX,dword ptr [EDX + 0x8]
0073dd09  FDIV float ptr [EDX + 0x44]
0073dd0c  FSTP float ptr [ESP]
0073dd0f  FLD float ptr [ECX + 0x8]
0073dd12  FCOMP float ptr [ECX + 0xc]
0073dd15  FNSTSW AX
0073dd17  TEST AH,0x41
0073dd1a  JNZ 0x0073dd28
0073dd1c  FLD float ptr [0x0089096c]
0073dd22  FSUB float ptr [ESP]
0073dd25  FSTP float ptr [ESP]
0073dd28  MOV EAX,dword ptr [ESP]
0073dd2b  PUSH EDX
0073dd2c  PUSH EAX
0073dd2d  CALL 0x0073dab0
0073dd32  FSTP float ptr [ECX + 0x8]
0073dd35  ADD ESP,0x8
0073dd38  FLD float ptr [ECX + 0x8]
0073dd3b  POP ECX
0073dd3c  RET
