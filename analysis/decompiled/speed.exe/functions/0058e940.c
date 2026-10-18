/* speed.exe 0058e940 FUN_0058e940; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00586290 FUN_00586290
 */

undefined4 * FUN_0058e940(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872664;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x4c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00586290(param_1);
    *puVar1 = &PTR_FUN_008a0f3c;
    puVar1[0xb] = 0;
    puVar1[0xb] = DAT_00925b14;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

