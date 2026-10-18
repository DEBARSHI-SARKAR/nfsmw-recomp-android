/* speed.exe 004cc6b0 FUN_004cc6b0; analysis pseudocode, not buildable source.
 * calls 004cab80 FUN_004cab80
 * calls 004c6e00 FUN_004c6e00
 */

void __fastcall FUN_004cc6b0(undefined4 param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c3d8;
  local_c = ExceptionList;
  uVar1 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004cab80();
  do {
    FUN_004c6e00(param_1,uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  ExceptionList = local_c;
  return;
}

