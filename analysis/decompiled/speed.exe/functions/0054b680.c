/* speed.exe 0054b680 FUN_0054b680; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00572360 FUN_00572360
 * calls 00591e90 FUN_00591e90
 * calls 00527f80 FUN_00527f80
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00793170 FUN_00793170
 */

void __fastcall FUN_0054b680(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00870553;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e908;
  uVar3 = 1;
  pcVar2 = FUN_0053d6d0;
  local_4 = 1;
  FUN_00794f80(FUN_0053d6d0,1);
  FUN_00793170(pcVar2,uVar3);
  if (param_1[0xb] != 0) {
    FUN_0056c6e0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[4] != 0) {
    iVar1 = FUN_00591e90("OL_Rankings_Personal_Overlay.fng");
    if (iVar1 == 0) {
      DAT_0091ca87 = 0;
    }
    else {
      DAT_0091ca88 = 0;
    }
  }
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00527f80();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

