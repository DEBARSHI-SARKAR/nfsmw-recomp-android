/* speed.exe 006130b0 FUN_006130b0; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 00606980 FUN_00606980
 * calls 00606b60 FUN_00606b60
 */

void FUN_006130b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x54));
    if (*piVar3 != 6) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,5);
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    *puVar1 = puVar1[-2];
    puVar1[1] = puVar1[-1];
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + -8) = *piVar3;
    *(int *)(iVar2 + -4) = piVar3[1];
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 9) {
      FUN_00606b60(param_1,1);
    }
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 8;
    FUN_006126a0(param_1,iVar2 + -8,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00606980(param_1,1);
}

