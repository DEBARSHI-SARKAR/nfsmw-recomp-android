/* speed.exe 00639410 FUN_00639410; analysis pseudocode, not buildable source.
 * calls 00639350 FUN_00639350
 */

void FUN_00639410(void)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878fbf;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_00639350(DAT_0091f1b8);
  }
  ExceptionList = local_c;
  return;
}

