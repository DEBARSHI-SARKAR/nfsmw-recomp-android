/* speed.exe 007207c0 FUN_007207c0; analysis pseudocode, not buildable source.
 * calls 007200c0 FUN_007200c0
 * calls 005d29d0 FUN_005d29d0
 * calls 006e8df0 FUN_006e8df0
 */

int __fastcall FUN_007207c0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008804c2;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_006e8df0(param_1);
    if (iVar1 != 1) {
      if (DAT_00993cc8 != 0) {
        DAT_009922b4 = DAT_009922b4 + 1;
        iVar1 = DAT_00993cc8;
LAB_007207f8:
        ExceptionList = local_c;
        return iVar1 + 0x2c;
      }
      iVar1 = FUN_005d29d0(600,0);
      local_4 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_007200c0(iVar1);
        if (iVar1 != 0) goto LAB_007207f8;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

