/* speed.exe 004330f0 FUN_004330f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041c3f0 FUN_0041c3f0
 * calls 0042c990 FUN_0042c990
 * calls 0042b410 FUN_0042b410
 */

void __fastcall FUN_004330f0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00868756;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0042b410();
  local_4 = local_4 & 0xffffff00;
  FUN_0041c3f0();
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_005d0370(*(int *)(param_1 + 0x6c),0xc,0);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_4 = 0xffffffff;
  FUN_0042c990();
  ExceptionList = local_c;
  return;
}

