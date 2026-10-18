/* speed.exe 006a0890 FUN_006a0890; analysis pseudocode, not buildable source.
 * calls 006a0800 FUN_006a0800
 * calls 00691da0 FUN_00691da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a0890(int param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  (**(code **)(*(int *)(param_1 + -0x54) + 8))();
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar2 = FUN_006a0800(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  fVar3 = (float10)FUN_00691da0(param_2,uVar2);
  *(float *)(param_1 + 300) = (float)fVar3;
  fVar1 = (float10)_DAT_008a9398;
  *(float *)(param_1 + 0x98) = (float)(fVar3 * fVar1);
  *(float *)(param_1 + 0xa0) = (float)(fVar3 * fVar1);
  if (*(int *)(param_1 + 0x144) == 2) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}

