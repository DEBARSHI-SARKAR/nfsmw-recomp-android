/* speed.exe 004785f0 FUN_004785f0; analysis pseudocode, not buildable source.
 * calls 00477fa0 FUN_00477fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004785f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar3 = *(int **)(param_1 + 0xc);
    while (*(int *)(param_1 + 0x60) != *piVar3) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
      if (*(int *)(param_1 + 0x20) <= iVar2) {
        return iVar1;
      }
    }
    if ((*(int **)(param_1 + 0xc) + iVar2 * 5 != (int *)0x0) &&
       (iVar1 = FUN_00477fa0(param_1 + 100), iVar1 != 0)) {
      if (*(char *)(param_1 + 0x78) != '\0') {
        *(float *)(iVar1 + 0xc) = (float)DAT_00925b14 * _DAT_00890984;
        return iVar1;
      }
      *(float *)(iVar1 + 0xc) = (float)DAT_00925ae8 * _DAT_00890984;
    }
  }
  return iVar1;
}

