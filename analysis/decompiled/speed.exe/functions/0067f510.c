/* speed.exe 0067f510 FUN_0067f510; analysis pseudocode, not buildable source.
 * calls 0067dd40 FUN_0067dd40
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0067f510(int param_1)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  piVar1 = (int *)FUN_0067dd40(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4)
                               ,&stack0x00000004);
  piVar1 = (int *)*piVar1;
  if (piVar1 != *(int **)(param_1 + 4)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005d0370(piVar1,0xc,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return;
}

