/* speed.exe 0065c210 FUN_0065c210; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00644060 FUN_00644060
 * calls 00648db0 FUN_00648db0
 */

void __fastcall FUN_0065c210(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a0a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x28c,0);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00648db0(0,0x82d21520,"movie q",0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00644060(1);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_c;
  return;
}

