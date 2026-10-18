/* speed.exe 0058d600 FUN_0058d600; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 */

undefined4 * FUN_0058d600(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = DAT_0091cf2c;
  puStack_8 = &LAB_008724db;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_0091cf2c != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_00586290(param_1);
    *puVar1 = &PTR_FUN_008a1600;
    puVar1[0xb] = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

