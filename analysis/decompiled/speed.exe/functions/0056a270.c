/* speed.exe 0056a270 FUN_0056a270; analysis pseudocode, not buildable source.
 * calls 0056a1d0 FUN_0056a1d0
 * calls 0056a130 FUN_0056a130
 * calls 0056a230 FUN_0056a230
 * calls 0056a080 FUN_0056a080
 */

undefined1 __thiscall FUN_0056a270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  
  cVar3 = *(char *)(param_1 + 0x3a);
  if (*(char *)(param_1 + 0x39) == '\0') {
    bVar5 = cVar3 != '\0';
  }
  else {
    bVar5 = cVar3 == '\0';
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar4 = (&DAT_0089f3d0)[param_2 + ((uint)bVar5 + iVar1 * 2) * 0x2d];
  iVar2 = *(int *)(param_1 + 0x328);
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x3b) != '\0')) {
    if (*(char *)(param_1 + 0x39) == '\0') {
      return (&DAT_0089f646)[param_2 + (uint)(cVar3 != '\0') * 0x2d];
    }
    return (&DAT_0089f646)[param_2 + (uint)(cVar3 == '\0') * 0x2d];
  }
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    if (iVar2 == 4) {
      cVar3 = FUN_0056a230(uVar4);
      if ((cVar3 != '\0') || (cVar3 = FUN_0056a1d0(uVar4), cVar3 != '\0')) {
        uVar4 = (&DAT_0089f3d0)[param_2 + iVar1 * 0x5a];
      }
      cVar3 = FUN_0056a130(uVar4);
      if (cVar3 == '\0') {
        return uVar4;
      }
      return 0;
    }
    if (iVar2 != 5) {
      return uVar4;
    }
    cVar3 = FUN_0056a1d0(uVar4);
    if (cVar3 != '\0') {
      return (&DAT_0089f3d0)[param_2 + iVar1 * 0x5a];
    }
  }
  cVar3 = FUN_0056a080(uVar4);
  if (cVar3 == '\0') {
    return uVar4;
  }
  return 0;
}

