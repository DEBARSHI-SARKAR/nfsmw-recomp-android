/* speed.exe 007aef70 FUN_007aef70; analysis pseudocode, not buildable source.
 * calls 0058acd0 FUN_0058acd0
 * calls 00672e80 FUN_00672e80
 * calls 0058ad10 FUN_0058ad10
 * calls 007a4d40 FUN_007a4d40
 * calls 007a4db0 FUN_007a4db0
 * calls 00575b00 FUN_00575b00
 */

undefined4 __thiscall FUN_007aef70(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  if ((param_2 != 0) && (cVar2 = FUN_00575b00(), cVar2 == '\0')) {
    if (*(char *)(param_2 + 0x1c) != '\0') {
      uVar4 = *(undefined4 *)(param_2 + 0x18);
      iVar3 = FUN_00672e80(param_1 + 8,uVar4);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      uVar6 = 0;
      uVar5 = FUN_007a4d40(uVar4);
      uVar4 = FUN_007a4db0(uVar1,(int)uVar5 + ((int)((ulonglong)uVar5 >> 0x20) - iVar3),uVar6);
      uVar4 = FUN_0058acd0(uVar4);
      return uVar4;
    }
    switch(*(undefined4 *)(param_2 + 0x10)) {
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x85:
    case 0x86:
    case 0x87:
      break;
    default:
      uVar4 = FUN_007a4db0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),0);
      uVar4 = FUN_0058ad10(uVar4);
    }
  }
  return uVar4;
}

