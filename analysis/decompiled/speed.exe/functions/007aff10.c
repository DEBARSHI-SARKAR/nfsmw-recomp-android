/* speed.exe 007aff10 FUN_007aff10; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00573140 FUN_00573140
 * calls 00524850 FUN_00524850
 */

void __thiscall
FUN_007aff10(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,float param_7)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(float *)(param_1 + 4) = param_4;
  *(float *)(param_1 + 8) = param_5;
  fVar1 = param_4;
  if (param_4 < param_6) {
    fVar1 = param_6;
  }
  if (param_5 <= fVar1) {
    fVar1 = param_5;
  }
  *(float *)(param_1 + 0xc) = fVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  if (param_4 < param_7) {
    param_4 = param_7;
  }
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  *(float *)(param_1 + 0x10) = param_4;
  uVar2 = FUN_005251a0(param_2,0x5ffee1d8);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_005251a0(param_2,0xe637955c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00524850(param_2,0xf2492598);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  iVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x24);
  do {
    iVar3 = iVar3 + 1;
    uVar2 = FUN_00573140("HEAT_BASE_LED_%d",iVar3);
    uVar2 = FUN_005251a0(param_2,uVar2);
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 10);
  return;
}

