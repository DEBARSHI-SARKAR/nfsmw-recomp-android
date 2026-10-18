/* speed.exe 005263e0 FUN_005263e0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007ec1a7 FUN_007ec1a7
 */

undefined4 * FUN_005263e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e9a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x24);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0089ccb8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 1;
    FUN_007ec1a7();
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

