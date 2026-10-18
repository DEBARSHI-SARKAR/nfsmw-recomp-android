/* speed.exe 007f853a FUN_007f853a; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007f853a(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 1;
    iVar5 = iVar1;
    iVar4 = -1;
    while (1 < iVar3) {
      iVar2 = (iVar5 + iVar4) / 2;
      if (param_2 <= *(uint *)(iVar2 * 0x34 + 0x14 + *param_1)) {
        iVar5 = iVar2;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      iVar3 = iVar5 - iVar2;
    }
    iVar5 = iVar5 + -1;
    iVar3 = iVar5;
    if (iVar5 < 1) {
      iVar3 = 0;
    }
    iVar4 = iVar1 + -1;
    if ((iVar3 < iVar1 + -1) && (iVar4 = iVar5, iVar5 < 1)) {
      iVar4 = 0;
    }
    iVar3 = iVar4 * 0x34 + *param_1;
  }
  return iVar3;
}

