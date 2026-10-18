/* speed.exe 00476590 FUN_00476590; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 * calls 005d0370 FUN_005d0370
 * calls 006466b0 FUN_006466b0
 */

void __fastcall FUN_00476590(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00894e00;
  local_4 = 0;
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[7] + 0xbc) = param_1[0x28];
    iVar1 = param_1[0x29];
    if (iVar1 != 0) {
      FUN_006466b0();
      FUN_005d0370(iVar1,0x28c,0);
    }
    param_1[0x29] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00470a10();
  ExceptionList = local_c;
  return;
}

