/* speed.exe 00748230 FUN_00748230; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 00470730 FUN_00470730
 * calls 00454810 FUN_00454810
 * calls 004549b0 FUN_004549b0
 */

undefined1 FUN_00748230(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880cd8;
  local_c = ExceptionList;
  iVar2 = param_1 * 0xd0 + DAT_009b09d8;
  if (iVar2 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    ExceptionList = &local_c;
    uVar3 = FUN_004549b0(iVar2,0,0);
    FUN_00470730(uVar3,uVar5,uVar6);
    local_4 = 0;
    puVar4 = (undefined1 *)FUN_00454810(0xd9102c65,0);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)FUN_006269b0(1);
    }
    uVar1 = *puVar4;
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  return 0;
}

