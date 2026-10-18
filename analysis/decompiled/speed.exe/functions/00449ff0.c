/* speed.exe 00449ff0 FUN_00449ff0; analysis pseudocode, not buildable source.
 * calls 007514e0 FUN_007514e0
 * calls 00463ca0 FUN_00463ca0
 * calls 00753650 FUN_00753650
 */

void __fastcall FUN_00449ff0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008699a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00893544;
  iVar1 = param_1[4];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_007514e0(param_1[3]);
  }
  *param_1 = &PTR_LAB_008934e4;
  ExceptionList = local_c;
  return;
}

