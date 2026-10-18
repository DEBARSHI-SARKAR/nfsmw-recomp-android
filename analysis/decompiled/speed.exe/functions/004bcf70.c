/* speed.exe 004bcf70 FUN_004bcf70; analysis pseudocode, not buildable source.
 * calls 004d5bd0 FUN_004d5bd0
 * calls 004b3470 FUN_004b3470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_004bcf70(int param_1)

{
  int iVar1;
  char cVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_004d5bd0();
  if ((float10)_DAT_0089654c < fVar3) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((_DAT_00896484 <=
        *(float *)(iVar1 + 0x70) - *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x4c)) &&
      (*(char *)(*(int *)(iVar1 + 0x5c) + 0xb4) == '\0')) && (*(int *)(param_1 + 0x84) == 0)) {
    if ((*(int *)(param_1 + 0x2c) != 0) && (cVar2 = FUN_004b3470(), cVar2 != '\0')) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0x6c) == 2) && (*(float *)(iVar1 + 100) <= _DAT_00896548)) {
      if ((DAT_009885c8 != (int *)0x0) &&
         (cVar2 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

