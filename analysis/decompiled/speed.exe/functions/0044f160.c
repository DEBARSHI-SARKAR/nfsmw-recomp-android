/* speed.exe 0044f160 FUN_0044f160; analysis pseudocode, not buildable source.
 * calls 0044c380 FUN_0044c380
 * calls 006f94d0 FUN_006f94d0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __fastcall FUN_0044f160(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006f94d0();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 4;
  }
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x13] = puVar3;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_00893384;
  *param_1 = &PTR_FUN_008933cc;
  param_1[2] = &PTR_LAB_008933c4;
  param_1[0xb] = &PTR_LAB_008933b0;
  param_1[0xe] = &PTR_LAB_00893394;
  *puVar1 = &PTR_LAB_0089338c;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_0044c380(param_1,&LAB_0044dc70,0);
  param_1[0x14] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

