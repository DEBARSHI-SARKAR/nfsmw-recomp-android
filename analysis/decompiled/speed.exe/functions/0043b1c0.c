/* speed.exe 0043b1c0 FUN_0043b1c0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 * calls 0043ada0 FUN_0043ada0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043b1c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868f16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043ada0(param_2,0x3e000000,DAT_0090d618,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1d6;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1d7] = iVar3;
  FUN_005d7930(&LAB_004038e0,puVar1);
  *puVar1 = &PTR_FUN_00890b00;
  *puVar1 = &PTR_LAB_00891d48;
  *param_1 = &PTR_FUN_00891ec0;
  param_1[2] = &PTR_LAB_00891eb8;
  param_1[0x13] = &PTR_LAB_00891de0;
  param_1[0x15] = &PTR_LAB_00891dd8;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)((int)param_1 + 0x761) = 0;
  *(undefined1 *)((int)param_1 + 0x762) = 0;
  *(undefined1 *)((int)param_1 + 0x763) = 0;
  param_1[0x1d9] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)((int)param_1 + 0x779) = 0;
  *(undefined1 *)((int)param_1 + 0x77a) = 0;
  param_1[0x1df] = DAT_008a2fb4;
  param_1[0x1e0] = DAT_008a2fb8;
  param_1[0x1e1] = DAT_008a2fbc;
  param_1[0x1e5] = 0;
  param_1[0x1e8] = 0;
  DAT_0090d618 = DAT_0090d618 + _DAT_00890f14;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (_DAT_0089096c <= DAT_0090d618) {
    DAT_0090d618 = 0.0;
  }
  param_1[0x1e7] = 0;
  param_1[0x1e6] = 0x42c60000;
  uVar2 = FUN_005cc240(0);
  param_1[0x1e8] = uVar2;
  uVar2 = DAT_00925ae8;
  param_1[0x1dd] = DAT_00925ae8;
  param_1[0x1dc] = uVar2;
  param_1[0x1db] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

