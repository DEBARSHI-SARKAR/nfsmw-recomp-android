/* speed.exe 004dad70 FUN_004dad70; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 * calls 00653790 FUN_00653790
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dad70(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  fVar2 = SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
               *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
               *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50)) * _DAT_008967e0;
  FUN_00653790(fVar2);
  FUN_007c4b80();
  FUN_004ba590(fVar2);
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  return;
}

