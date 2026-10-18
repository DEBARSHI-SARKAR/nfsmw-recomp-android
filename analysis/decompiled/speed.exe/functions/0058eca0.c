/* speed.exe 0058eca0 FUN_0058eca0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00524850 FUN_00524850
 * calls 00586290 FUN_00586290
 * calls 004b9080 FUN_004b9080
 * calls 006253d0 FUN_006253d0
 * calls 00515e60 FUN_00515e60
 * calls 00460dd0 FUN_00460dd0
 * calls 00542da0 FUN_00542da0
 * calls 00517a50 FUN_00517a50
 */

undefined4 * __thiscall FUN_0058eca0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008726b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a17d4;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00517a50();
  local_4._0_1_ = 1;
  iVar1 = FUN_00627400(0x10);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_006253d0(1,1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004b9080(1,0xb,"MovieScreen");
  puVar3 = &DAT_008f3ce4;
  do {
    iVar1 = FUN_00460dd0(param_1[4],*(undefined4 *)(puVar3 + -0xc));
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xb) = *puVar3;
      uVar2 = FUN_00524850(param_1[4],*(undefined4 *)(puVar3 + -4),*(undefined4 *)(puVar3 + -8));
      FUN_00515e60(uVar2);
      if (puVar3[1] != '\0') {
        FUN_00542da0(*(undefined4 *)(puVar3 + -8),param_1[4]);
      }
    }
    puVar3 = puVar3 + 0x10;
  } while ((int)puVar3 < 0x8f3d84);
  ExceptionList = local_c;
  return param_1;
}

