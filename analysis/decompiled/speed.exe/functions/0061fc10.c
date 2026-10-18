/* speed.exe 0061fc10 FUN_0061fc10; analysis pseudocode, not buildable source.
 * calls 0061c9c0 FUN_0061c9c0
 * calls 00619a70 FUN_00619a70
 * calls 005f9da0 FUN_005f9da0
 * calls 005d0370 FUN_005d0370
 * calls 0061fb40 FUN_0061fb40
 */

/* WARNING: Removing unreachable block (ram,0x0061fcb0) */
/* WARNING: Removing unreachable block (ram,0x0061fcce) */

void FUN_0061fc10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876b28;
  local_c = ExceptionList;
  param_1 = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = &local_c;
  iVar2 = FUN_0061fb40(&param_1);
  if ((*(int *)(iVar2 + 4) != 0) &&
     (iVar3 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2, iVar3 != 0)) {
    local_4 = 0;
    FUN_00619a70(iVar3);
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 != *(int *)(iVar2 + 8)) {
      do {
        FUN_0061c9c0(iVar3);
        iVar3 = iVar3 + 4;
      } while (iVar3 != *(int *)(iVar2 + 8));
    }
    *(undefined4 *)(iVar1 + 0x28) = *DAT_0091e0c8;
  }
  ExceptionList = local_c;
  return;
}

