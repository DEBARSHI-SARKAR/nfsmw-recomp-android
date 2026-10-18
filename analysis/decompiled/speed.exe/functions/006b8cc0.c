/* speed.exe 006b8cc0 FUN_006b8cc0; analysis pseudocode, not buildable source.
 * calls 006b6790 FUN_006b6790
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 * FUN_006b8cc0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087dd72;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x330,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006b6790(param_1);
    *puVar1 = &PTR_FUN_008ac754;
    puVar1[2] = &PTR_LAB_008ac74c;
    puVar1[0x12] = &PTR_LAB_008ac708;
    puVar1[0x1d] = &PTR_LAB_008ac6f0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

