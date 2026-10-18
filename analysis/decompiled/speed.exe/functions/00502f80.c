/* speed.exe 00502f80 FUN_00502f80; analysis pseudocode, not buildable source.
 * calls 006bee00 FUN_006bee00
 */

void __fastcall FUN_00502f80(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (0 < param_1[5]) {
    do {
      iVar3 = *(int *)(param_1[3] + iVar1 + 0x1c);
      if (0 < iVar3) {
        piVar2 = (int *)(*(int *)(param_1[3] + 0x28 + iVar1) + 4);
        do {
          if (*piVar2 != 0) {
            FUN_006bee00(piVar2[1]);
          }
          piVar2 = piVar2 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_4 = local_4 + 1;
      iVar1 = iVar1 + 0x34;
    } while (local_4 < param_1[5]);
  }
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

