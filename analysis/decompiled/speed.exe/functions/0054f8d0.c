/* speed.exe 0054f8d0 FUN_0054f8d0; analysis pseudocode, not buildable source.
 * calls 005273d0 FUN_005273d0
 * calls 00652ad0 _malloc
 */

undefined4 * FUN_0054f8d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008707c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = _malloc(0x88);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005273d0(param_1);
    puVar1 = puVar2 + 0x1f;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined1 *)(puVar2 + 0x1d) = 0;
    *(undefined1 *)((int)puVar2 + 0x75) = 0;
    *(undefined1 *)((int)puVar2 + 0x76) = 0;
    puVar2[0x1e] = 0;
    *puVar2 = &PTR_FUN_0089eaa8;
    puVar2[0x18] = 1;
    *puVar1 = puVar1;
    puVar2[0x20] = puVar1;
    *(undefined1 *)(puVar2 + 0x21) = 0;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

