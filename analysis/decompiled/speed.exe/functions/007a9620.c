/* speed.exe 007a9620 FUN_007a9620; analysis pseudocode, not buildable source.
 * calls 007a94c0 FUN_007a94c0
 * calls 00591e90 FUN_00591e90
 * calls 007a92b0 FUN_007a92b0
 * calls 00621e80 FUN_00621e80
 * calls 007a9090 FUN_007a9090
 * calls 00627400 FUN_00627400
 */

void FUN_007a9620(void)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882a6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00591e90("GarageMain.fng");
  if (iVar1 != 0) {
    iVar2 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_00621e80(0x14035fb);
    }
    local_4 = 0xffffffff;
    FUN_007a92b0();
    FUN_007a9090("BACKDROP");
    FUN_007a94c0(1);
    (**(code **)(**(int **)(iVar1 + 0x4c) + 8))(0);
  }
  ExceptionList = local_c;
  return;
}

