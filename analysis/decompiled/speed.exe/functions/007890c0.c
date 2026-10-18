/* speed.exe 007890c0 FUN_007890c0; analysis pseudocode, not buildable source.
 * calls 00779ea0 FUN_00779ea0
 * calls 00789000 FUN_00789000
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_007890c0(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088246f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005d29d0(0x10,0);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_009b3904 = (undefined1 *)0x0;
  }
  else {
    DAT_009b3904 = (undefined1 *)FUN_00789000(iVar2);
  }
  iVar2 = *(int *)(DAT_009b3904 + 8);
  local_4 = 0xffffffff;
  FUN_00779ea0(*(undefined4 *)(*(int *)(iVar2 + 4) + 4));
  *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
  *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
  *DAT_009b3904 = 1;
  if (*(int *)(DAT_009b3890 + 0x38) != 0) {
    puVar3 = (uint *)&DAT_00000010;
    do {
      if ((*puVar3 & 0x20000) != 0) {
        *puVar3 = *puVar3 & 0xfffbffff;
      }
      puVar1 = (undefined1 *)((int)puVar3 + -0xf);
      puVar3 = (uint *)((int)puVar3 + 1);
    } while (puVar1 < *(undefined1 **)(DAT_009b3890 + 0x38));
  }
  ExceptionList = local_c;
  return;
}

