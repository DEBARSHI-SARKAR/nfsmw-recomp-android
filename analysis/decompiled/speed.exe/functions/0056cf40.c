/* speed.exe 0056cf40 FUN_0056cf40; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005155e0 FUN_005155e0
 * calls 00515690 FUN_00515690
 * calls 00515d70 FUN_00515d70
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 00515730 FUN_00515730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056cf40(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  local_8 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x20);
  if (local_8 == _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    local_8 = _DAT_0089096c;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  local_8 = _DAT_0089096c / local_8;
  local_10 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20)) * local_8 *
             *(float *)(param_1 + 0x34);
  FUN_00515520(uVar4,local_4,&local_c);
  fVar2 = local_10;
  FUN_005155e0(uVar4,local_10,local_c);
  FUN_00514fd0(*(undefined4 *)(param_1 + 4),&local_c,local_4);
  FUN_00514fd0(*(undefined4 *)(param_1 + 4),local_4,&local_10);
  fVar3 = local_10;
  FUN_00524cc0(*(undefined4 *)(param_1 + 8),local_c,local_10);
  uVar4 = *(undefined4 *)(param_1 + 8);
  FUN_00515690(uVar4,local_4,&local_10);
  FUN_00515730(uVar4,fVar2,local_10);
  local_8 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x20)) * local_8;
  FUN_00524cc0(*(undefined4 *)(param_1 + 0xc),local_8 * *(float *)(param_1 + 0x34) + local_c,fVar3);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    uVar4 = FUN_007c4b80();
    FUN_00515d70(iVar1,&DAT_0089d764,uVar4);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    local_10 = local_8 * *(float *)(param_1 + 0x34);
    FUN_00515520(iVar1,local_4,&local_8);
    fVar2 = local_10;
    FUN_005155e0(iVar1,local_10,local_8);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    FUN_00515690(uVar4,local_4,&local_8);
    FUN_00515730(uVar4,fVar2,local_8);
    FUN_00524cc0(*(undefined4 *)(param_1 + 0x3c),local_c,fVar3);
  }
  return;
}

