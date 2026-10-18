0073ad90  SUB ESP,0x8
0073ad93  MOV ECX,dword ptr [ESP + 0xc]
0073ad97  PUSH EBX
0073ad98  MOV EBX,dword ptr [ESP + 0x14]
0073ad9c  SHR EBX,0x10
0073ad9f  MOVZX EAX,BL
0073ada2  MOV dword ptr [ESP + 0x8],EAX
0073ada6  SHR ECX,0x10
0073ada9  MOVZX ECX,CL
0073adac  FILD dword ptr [ESP + 0x8]
0073adb0  MOV dword ptr [ESP + 0x8],ECX
0073adb4  FMUL float ptr [0x00899dd0]
0073adba  MOV dword ptr [ESP + 0x4],0x0
0073adc2  FIMUL dword ptr [ESP + 0x8]
0073adc6  CALL 0x007c4b80
0073adcb  MOVZX EDX,byte ptr [ESP + 0x15]
0073add0  MOV dword ptr [ESP + 0x8],EDX
0073add4  MOV byte ptr [ESP + 0x6],AL
0073add8  MOVZX EAX,byte ptr [ESP + 0x11]
0073addd  FILD dword ptr [ESP + 0x8]
0073ade1  MOV dword ptr [ESP + 0x8],EAX
0073ade5  FMUL float ptr [0x00899dd0]
0073adeb  FIMUL dword ptr [ESP + 0x8]
0073adef  CALL 0x007c4b80
0073adf4  MOVZX ECX,byte ptr [ESP + 0x14]
0073adf9  MOVZX EDX,byte ptr [ESP + 0x10]
0073adfe  MOV dword ptr [ESP + 0x8],ECX
0073ae02  MOV byte ptr [ESP + 0x5],AL
0073ae06  FILD dword ptr [ESP + 0x8]
0073ae0a  MOV dword ptr [ESP + 0x8],EDX
0073ae0e  FMUL float ptr [0x00899dd0]
0073ae14  FIMUL dword ptr [ESP + 0x8]
0073ae18  CALL 0x007c4b80
0073ae1d  MOVZX ECX,byte ptr [ESP + 0x13]
0073ae22  MOV byte ptr [ESP + 0x4],AL
0073ae26  MOVZX EAX,BH
0073ae29  MOV dword ptr [ESP + 0x8],EAX
0073ae2d  FILD dword ptr [ESP + 0x8]
0073ae31  MOV dword ptr [ESP + 0x8],ECX
0073ae35  FMUL float ptr [0x00899dd0]
0073ae3b  FIMUL dword ptr [ESP + 0x8]
0073ae3f  CALL 0x007c4b80
0073ae44  MOV byte ptr [ESP + 0x7],AL
0073ae48  MOV EAX,dword ptr [ESP + 0x4]
0073ae4c  POP EBX
0073ae4d  ADD ESP,0x8
0073ae50  RET
