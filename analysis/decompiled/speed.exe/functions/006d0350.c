/* speed.exe 006d0350 FUN_006d0350; analysis pseudocode, not buildable source.
 * calls 006c0a30 FUN_006c0a30
 * calls 006c0160 FUN_006c0160
 * calls 00503400 FUN_00503400
 * calls 006d1260 FUN_006d1260
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006d0350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  int local_b4;
  undefined1 local_b0 [144];
  byte local_20;
  
  uStack_c4 = 0x6d036a;
  FUN_006c0a30();
  local_20 = local_20 | 2;
  uStack_c4 = 0x3f800000;
  piStack_c8 = (int *)param_4;
  piStack_cc = (int *)param_3;
  piStack_d0 = (int *)0x42000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x42000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_006c0160(local_b0,(undefined4 *)(param_1 + 0x34));
  uStack_c4 = 0;
  piStack_c8 = (int *)0x1;
  piStack_cc = (int *)0x8ae868;
  piStack_d0 = (int *)0x6d03c8;
  piStack_cc = (int *)FUN_00460bf0();
  piStack_d0 = (int *)0x6d03d1;
  uVar3 = FUN_00503400();
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x14) + 3U & 0x80000003;
    local_b4 = 0;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    piStack_d0 = *(int **)(param_1 + 0x24 + uVar4 * 4);
    uStack_c4 = 0;
    piStack_c8 = (int *)0x4;
    piStack_cc = &local_b4;
    (**(code **)(*piStack_d0 + 0x1c))();
    fVar2 = (float)local_b4;
    if (local_b4 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    fVar2 = fVar2 / (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40));
    if (_DAT_0089096c < fVar2) {
      fVar2 = _DAT_0089096c;
    }
    *(float *)(param_1 + 0x18) =
         fVar2 * *(float *)(param_1 + 8) +
         (_DAT_0089096c - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x18);
  }
  if ((*(int *)(param_1 + 4) != 0) &&
     (piStack_c8 = *(int **)(param_1 + 0x24 + *(int *)(param_1 + 0x14) * 4),
     piStack_c8 != (int *)0x0)) {
    uStack_c4 = 2;
    piStack_cc = (int *)0x6d046e;
    (**(code **)(*piStack_c8 + 0x18))();
    piStack_d0 = *(int **)(*(int *)(DAT_0093de9c + 0x44) + 0x484);
    piStack_cc = (int *)0x0;
    (**(code **)(**(int **)(DAT_0093de9c + 0x48) + 0x68))(*(int **)(DAT_0093de9c + 0x48));
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
    FUN_006d1260(&piStack_d0,uVar3,0);
    piVar1 = *(int **)(param_1 + 0x24 + *(int *)(param_1 + 0x14) * 4);
    (**(code **)(*piVar1 + 0x18))(piVar1,1);
    iVar5 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar5;
    if (iVar5 == 4) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  return;
}

