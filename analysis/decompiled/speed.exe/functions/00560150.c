/* speed.exe 00560150 FUN_00560150; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00799f50 FUN_00799f50
 * calls 00572360 FUN_00572360
 * calls 00527f80 FUN_00527f80
 * calls 0078b7d0 FUN_0078b7d0
 * calls 00794f80 FUN_00794f80
 * calls 00795060 FUN_00795060
 * calls 00793170 FUN_00793170
 */

void __fastcall FUN_00560150(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00870fc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089f048;
  param_1[0xb] = &PTR_LAB_0089f044;
  local_4 = 1;
  if (param_1[0x9b] != 0) {
    FUN_0056c6e0(param_1[0x9b]);
    param_1[0x9b] = 0;
  }
  uVar3 = 1;
  pcVar1 = FUN_00558a70;
  FUN_00794f80(FUN_00558a70,1);
  FUN_00793170(pcVar1,uVar3);
  uVar3 = 1;
  puVar2 = &LAB_005246f0;
  FUN_00794f80(&LAB_005246f0,1);
  FUN_00793170(puVar2,uVar3);
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

