/* speed.exe 00605690 FUN_00605690; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00642140 FUN_00642140
 * calls 00735620 FUN_00735620
 */

undefined4 __fastcall FUN_00605690(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008765bf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00735620(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00627400(0x10);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_00642140(0,0);
    }
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

