/* speed.exe 007708f0 FUN_007708f0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006e9790 FUN_006e9790
 * calls 007708b0 FUN_007708b0
 */

void FUN_007708f0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008819ff;
  local_c = ExceptionList;
  if (DAT_009b3918 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x24,0);
    local_4 = 0;
    if (iVar1 == 0) {
      DAT_009b3918 = 0;
    }
    else {
      DAT_009b3918 = FUN_007708b0(iVar1);
    }
    local_4 = 0xffffffff;
    FUN_006e9790();
  }
  ExceptionList = local_c;
  return;
}

