/* speed.exe 006fcc90 FUN_006fcc90; analysis pseudocode, not buildable source.
 * calls 006ed0f0 FUN_006ed0f0
 * calls 006fca30 FUN_006fca30
 * calls 005d7930 FUN_005d7930
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __thiscall
FUN_006fcc90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f6c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006fca30();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 4;
  }
  puVar1 = param_1 + 0x23;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x24] = puVar3;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008b03cc;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008b0c70;
  param_1[2] = &PTR_LAB_008b0c68;
  param_1[0xb] = &PTR_LAB_008b0c40;
  param_1[0xe] = &PTR_LAB_008b0c24;
  param_1[0x13] = &PTR_LAB_008b0bd0;
  param_1[0x15] = &PTR_FUN_008b0bcc;
  *puVar1 = &PTR_LAB_008b0bbc;
  param_1[0x25] = 0;
  param_2 = FUN_005cc240();
  iVar2 = FUN_006ed0f0(&param_2);
  param_1[0x26] = iVar2;
  if (iVar2 != 0) {
    param_1[9] = param_1[9] + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

