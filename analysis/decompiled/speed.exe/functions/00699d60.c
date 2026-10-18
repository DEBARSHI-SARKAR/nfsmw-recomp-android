/* speed.exe 00699d60 FUN_00699d60; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

undefined4 __fastcall FUN_00699d60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar4 = **(int **)(param_1 + 0x78);
  fVar1 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x24);
  fVar3 = *(float *)(iVar4 + 0x20);
  fVar6 = (float10)FUN_005c5e80(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                                *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                                *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
  fVar7 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if ((float10)(float)fVar6 * (float10)*(float *)(iVar4 + 0x6c) + fVar7 <
      (float10)*(float *)(*(int *)(param_1 + 0x84) + 0xf8)) {
    uVar5 = (**(code **)(*(int *)(param_1 + 0x50) + 0x7c))();
    if (2 < uVar5) {
      return 1;
    }
  }
  return 0;
}

