/* speed.exe 00618f80 FUN_00618f80; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 00606b60 FUN_00606b60
 * calls 00615230 FUN_00615230
 */

void FUN_00618f80(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00615230(param_1,0);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = 6;
  puVar2[1] = iVar1;
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 9) {
    FUN_00606b60(param_1,1);
  }
  iVar1 = *(int *)(param_1 + 8);
  puVar2 = (undefined4 *)(iVar1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar2;
  *puVar2 = 2;
  *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 9) {
    FUN_00606b60(param_1,1);
  }
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 8;
  FUN_006126a0(param_1,iVar1 + -8,0);
  return;
}

