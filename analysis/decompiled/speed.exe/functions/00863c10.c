/* speed.exe 00863c10 FUN_00863c10; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007c6610 FUN_007c6610
 */

int __fastcall FUN_00863c10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar2 = FUN_007c6610(param_1);
  if (iVar2 != 0) {
    if (param_4 == 1) {
      iVar3 = FUN_007c97c0(iVar2,0x2d);
      if ((iVar3 != 0) && ((iVar5 = *(char *)(iVar3 + 1) + -0x30, iVar5 < 0 || (9 < iVar5)))) {
        iVar5 = -1;
      }
    }
    else {
      iVar5 = 1;
    }
    iVar2 = FUN_007c97c0(iVar2,0x3d);
    if (iVar2 != 0) {
      iVar3 = 0;
      pcVar4 = (char *)(iVar2 + 1);
      if (0 < param_2 + -1) {
        iVar2 = param_3 - (int)pcVar4;
        do {
          cVar1 = *pcVar4;
          if ((cVar1 == '\r') || (cVar1 == '\n')) break;
          iVar3 = iVar3 + 1;
          pcVar4[iVar2] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (iVar3 < param_2 + -1);
      }
      *(undefined1 *)(iVar3 + param_3) = 0;
    }
  }
  return iVar5;
}

