/* speed.exe 0051db20 FUN_0051db20; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00573960 FUN_00573960
 * calls 00586fa0 FUN_00586fa0
 */

void FUN_0051db20(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e424;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x4c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x4c9e34e6,0xf95320b8,0);
    *puVar1 = &PTR_FUN_0089c28c;
    *(undefined1 *)((int)puVar1 + 0x45) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar1);
  ExceptionList = local_c;
  return;
}

