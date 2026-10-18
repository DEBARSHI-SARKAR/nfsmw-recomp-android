/* speed.exe 00409ad0 FUN_00409ad0; analysis pseudocode, not buildable source.
 * calls 00653c30 FUN_00653c30
 */

void __fastcall FUN_00409ad0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867a0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00890ddc;
  local_4 = 0;
  piVar1 = param_1 + 0x19;
  iVar2 = 3;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  FUN_00653c30();
  ExceptionList = pvStack_c;
  return;
}

