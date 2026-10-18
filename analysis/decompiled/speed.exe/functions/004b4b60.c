/* speed.exe 004b4b60 FUN_004b4b60; analysis pseudocode, not buildable source.
 * calls 004d6270 FUN_004d6270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b4b60(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  FUN_004d6270(param_2);
  uVar8 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(*(int *)(iVar3 + 0xd8) + 0x60);
  iVar5 = *(int *)(*(int *)(iVar3 + 0xd8) + 0x4c);
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  *(float *)(param_1 + 0x54) = fVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar6 = *(int *)(iVar3 + 0xd8);
  fVar7 = (float)(iVar5 - iVar4);
  fVar1 = *(float *)(iVar6 + 0x58);
  fVar2 = (float)*(int *)(iVar6 + 0x60);
  if (*(int *)(iVar6 + 0x60) < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(float *)(param_1 + 0x5c) = fVar2 + fVar7 * fVar1;
  iVar4 = *(int *)(iVar3 + 0xd8);
  fVar1 = (float)*(int *)(iVar4 + 0x4c);
  if (*(int *)(iVar4 + 0x4c) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar2 = *(float *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(float *)(param_1 + 100) = fVar1 - fVar7 * fVar2;
  fVar1 = (float)*(int *)(*(int *)(iVar3 + 0xd8) + 0x4c);
  if (*(int *)(*(int *)(iVar3 + 0xd8) + 0x4c) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  *(float *)(param_1 + 0x6c) = fVar1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

