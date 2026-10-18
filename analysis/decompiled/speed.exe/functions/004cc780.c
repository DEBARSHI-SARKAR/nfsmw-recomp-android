/* speed.exe 004cc780 thunk_FUN_004c92b0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004c92b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0086bfd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089762c;
  iVar1 = param_1[3];
  uStack_4 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[3] = iVar2;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_FUN_00897634)(param_1[1],param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_LAB_00896f34;
  ExceptionList = pvStack_c;
  return;
}

