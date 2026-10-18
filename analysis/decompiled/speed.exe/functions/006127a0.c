/* speed.exe 006127a0 FUN_006127a0; analysis pseudocode, not buildable source.
 * calls 006126a0 FUN_006126a0
 * calls 00606b60 FUN_00606b60
 */

void FUN_006127a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 8) = *param_3;
  *(undefined4 *)(iVar2 + 0xc) = param_3[1];
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0x10) = *param_4;
  *(undefined4 *)(iVar2 + 0x14) = param_4[1];
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 0x19) {
    FUN_00606b60(param_1,3);
  }
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2 + 0x18;
  FUN_006126a0(param_1,iVar2,1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return;
}

