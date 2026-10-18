/* speed.exe 00557030 FUN_00557030; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00572360 FUN_00572360
 * calls 00795060 FUN_00795060
 * calls 00527f80 FUN_00527f80
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0078b7d0 FUN_0078b7d0
 * calls 00793170 FUN_00793170
 * calls 00799f50 FUN_00799f50
 */

void __fastcall FUN_00557030(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00870bc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089ecbc;
  local_4 = 1;
  if (param_1[0x98] != 0) {
    FUN_0056c6e0(param_1[0x98]);
    param_1[0x98] = 0;
  }
  uVar2 = 1;
  pcVar1 = FUN_0054ba90;
  FUN_00794f80(FUN_0054ba90,1);
  FUN_00793170(pcVar1,uVar2);
  FUN_00799f50();
  FUN_0078b7d0();
  FUN_00799f50();
  FUN_00795060();
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00527f80();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

