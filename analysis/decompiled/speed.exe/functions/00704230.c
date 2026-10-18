/* speed.exe 00704230 FUN_00704230; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 */

undefined1 FUN_00704230(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004cb270(param_1);
  if (iVar2 != 0) {
    FUN_004b8880(iVar2,0,0);
    local_4 = 0;
    puVar3 = (undefined1 *)FUN_00454810(0xb6f42d73,0);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)FUN_006269b0(1);
    }
    uVar1 = *puVar3;
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

