/* speed.exe 00604a50 FUN_00604a50; analysis pseudocode, not buildable source.
 * calls 00469b90 FUN_00469b90
 * calls 00627400 FUN_00627400
 * calls 0065faf0 FUN_0065faf0
 * calls 00621120 FUN_00621120
 * calls 00460d20 FUN_00460d20
 * calls 005cc240 FUN_005cc240
 */

void FUN_00604a50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087649f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0x14);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00621120(param_1,param_2,0);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00460d20(param_1,"Cinematics");
  if (iVar1 == 0) {
    iVar1 = FUN_00460d20(param_2,"Challenge");
    if (iVar1 == 0) {
      uVar2 = FUN_005cc240("MomentStrm");
      iVar1 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                           DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                           DAT_008a2fc8,DAT_008a2fcc,0,0x76221f3d);
      *(undefined4 *)(iVar1 + 4) = uVar2;
      FUN_0065faf0();
    }
  }
  ExceptionList = local_c;
  return;
}

