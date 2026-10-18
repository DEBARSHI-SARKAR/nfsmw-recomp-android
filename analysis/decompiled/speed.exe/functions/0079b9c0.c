/* speed.exe 0079b9c0 FUN_0079b9c0; analysis pseudocode, not buildable source.
 * calls 0079b020 FUN_0079b020
 * calls 005d0370 FUN_005d0370
 * calls 0079b890 FUN_0079b890
 */

void __fastcall FUN_0079b9c0(int param_1)

{
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882838;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0079b890();
  local_4 = 0xffffffff;
  FUN_0079b020(&local_10,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

