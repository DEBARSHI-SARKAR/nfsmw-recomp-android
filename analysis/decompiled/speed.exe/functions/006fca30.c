/* speed.exe 006fca30 FUN_006fca30; analysis pseudocode, not buildable source.
 * calls 006f9610 FUN_006f9610
 * calls 006fc4b0 FUN_006fc4b0
 * calls 006ed0f0 FUN_006ed0f0
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 * calls 00674580 FUN_00674580
 * calls 00674510 FUN_00674510
 */

undefined4 * __fastcall FUN_006fca30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f6a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006f9610();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar4 = param_1 + 0x13;
  *puVar4 = &PTR_FUN_00890970;
  param_1[0x14] = puVar5;
  FUN_005d7930(&LAB_006200d0,puVar4);
  *puVar4 = &PTR_FUN_008b0798;
  param_1[0x15] = &PTR___purecall_00890d38;
  puVar5 = param_1 + 0x15;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008b0bb0;
  param_1[2] = &PTR_LAB_008b0ba8;
  param_1[0xb] = &PTR_LAB_008b0b80;
  param_1[0xe] = &PTR_LAB_008b0b64;
  *puVar4 = &PTR_LAB_008b0b10;
  *puVar5 = &PTR_FUN_008b0b08;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = &DAT_00890978;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0;
  if (param_1 == (undefined4 *)0xffffffcc) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 0xb;
  }
  if (DAT_0092d7c0 <= DAT_0092d7c4) {
    uVar2 = (**(code **)(DAT_0092d7b8 + 0xc))(DAT_0092d7c4 + 1);
    FUN_00674580(uVar2);
  }
  piVar1 = (int *)(DAT_0092d7bc + DAT_0092d7c4 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)puVar4;
  }
  DAT_0092d7c4 = DAT_0092d7c4 + 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 0x13;
  }
  if (DAT_0092d880 <= DAT_0092d884) {
    uVar2 = (**(code **)(DAT_0092d878 + 0xc))(DAT_0092d884 + 1);
    FUN_00674510(uVar2);
  }
  piVar1 = (int *)(DAT_0092d87c + DAT_0092d884 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)puVar4;
  }
  DAT_0092d884 = DAT_0092d884 + 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 0x13;
  }
  if (DAT_0092d850 <= DAT_0092d854) {
    uVar2 = (**(code **)(DAT_0092d848 + 0xc))(DAT_0092d854 + 1);
    FUN_00674510(uVar2);
  }
  piVar1 = (int *)(DAT_0092d84c + DAT_0092d854 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)puVar5;
  }
  DAT_0092d854 = DAT_0092d854 + 1;
  iVar3 = FUN_005cc240("SoundAI");
  piVar1 = DAT_0092c668;
  do {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
LAB_006fcc1d:
      param_1[0x1f] = iVar3;
      if (iVar3 != 0) {
        FUN_006fc4b0(iVar3);
      }
      uStack_14 = FUN_005cc240("WorldUpdate");
      iVar3 = FUN_006ed0f0(&uStack_14,0x3f800000,param_1 + 2,0,1);
      param_1[0x1e] = iVar3;
      if (iVar3 != 0) {
        param_1[9] = param_1[9] + 1;
      }
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (*piVar1 == iVar3) {
      iVar3 = (*(code *)piVar1[1])(0,0,0);
      goto LAB_006fcc1d;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

