/* speed.exe 0058ee30 FUN_0058ee30; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 005dca00 FUN_005dca00
 * calls 005811a0 FUN_005811a0
 * calls 0056f120 FUN_0056f120
 */

undefined4 FUN_0058ee30(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0091e004 != 0) {
    iVar2 = FUN_005dca00();
    if (iVar2 == 0) {
      bVar1 = true;
      goto LAB_0058ee49;
    }
  }
  bVar1 = false;
LAB_0058ee49:
  if (((((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) && (bVar1)) && (param_1 == 1)) &&
     (iVar2 = *(int *)(DAT_0091cf90 + 0x10), iVar2 != -0x414)) {
    iVar3 = FUN_005811a0();
    if (((iVar3 == 1) && (iVar2 != 0)) && ((undefined4 *)(iVar2 + 0xa8) != (undefined4 *)0x0)) {
      piVar4 = (int *)FUN_0056ecc0(*(undefined4 *)(iVar2 + 0xa8));
      if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
        iVar2 = FUN_0056f120(*(undefined1 *)((int)piVar4 + 0x11));
        if ((iVar2 != 0) && ((int)*(char *)(iVar2 + 3) == *(byte *)(iVar2 + 2) - 1)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

