/* speed.exe 005a3790 FUN_005a3790; analysis pseudocode, not buildable source.
 * calls 00599100 FUN_00599100
 * calls 0056c820 FUN_0056c820
 * calls 005991b0 FUN_005991b0
 */

undefined4 __thiscall FUN_005a3790(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x410) == '\0') || (*(int *)(param_1 + 0x414) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x408);
  *(int *)(param_1 + 0x408) = iVar2 + 1;
  if (param_2 == 0xd) {
    if (iVar2 != 0) {
      FUN_00599100();
    }
  }
  else {
    if (param_2 == 0x1b) {
      FUN_005991b0();
      return 1;
    }
    if (param_2 == 8) {
      if (0 < *(int *)(param_1 + 0x300)) {
        iVar2 = *(int *)(param_1 + 0x300) + -1;
        *(int *)(param_1 + 0x300) = iVar2;
        *(undefined2 *)(param_1 + 0x100 + iVar2 * 2) = 0;
        return 1;
      }
    }
    else {
      cVar1 = FUN_0056c820(param_2);
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0x300) < *(int *)(param_1 + 0x40c))) {
        *(short *)(param_1 + 0x100 + *(int *)(param_1 + 0x300) * 2) = (short)param_2;
        *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 1;
        return 1;
      }
    }
  }
  return 1;
}

