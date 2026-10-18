/* speed.exe 004b4080 FUN_004b4080; analysis pseudocode, not buildable source.
 * calls 00653bb0 FUN_00653bb0
 * calls 00653b10 FUN_00653b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4080(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 == 0) || ((*(int *)(iVar1 + 0x38) != 3 && (*(int *)(iVar1 + 0x38) == 0)))) {
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x84) == 0) {
      FUN_00653b10(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60));
    }
    else {
      FUN_00653bb0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x7c));
    }
  }
  else {
    FUN_00653bb0(*(undefined4 *)(iVar1 + 0x80));
  }
  (**(code **)(*(int *)(param_1 + 0x50) + 4))();
  fVar2 = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x124) = fVar2;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) * _DAT_00896b58 + fVar2 * _DAT_00890ea8;
  return;
}

