/* speed.exe 00514960 FUN_00514960; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00626d70 FUN_00626d70
 * calls 00644060 FUN_00644060
 * calls 00648db0 FUN_00648db0
 */

undefined4 * __fastcall FUN_00514960(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e352;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x28c,0);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00648db0(0,0x82d21520,&DAT_0089b370,0);
  }
  local_4 = 0xffffffff;
  *param_1 = uVar2;
  FUN_00644060(1);
  FUN_00626d70();
  ExceptionList = local_c;
  return param_1;
}

