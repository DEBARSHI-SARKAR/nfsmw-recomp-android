/* speed.exe 00789290 FUN_00789290; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00772030 FUN_00772030
 */

void FUN_00789290(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008824af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x10,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_008b5d9c;
    iVar2 = FUN_00772030();
    puVar1[2] = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(undefined4 *)(puVar1[2] + 4) = puVar1[2];
    *(undefined4 *)puVar1[2] = puVar1[2];
    *(undefined4 *)(puVar1[2] + 8) = puVar1[2];
    puVar1[3] = 0;
    DAT_009b3888 = puVar1;
    ExceptionList = local_c;
    return;
  }
  DAT_009b3888 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}

