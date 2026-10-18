/* speed.exe 004f7880 FUN_004f7880; analysis pseudocode, not buildable source.
 * calls 004f24d0 FUN_004f24d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ea770 FUN_004ea770
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004f7880(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086da83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899afc;
  piVar2 = *(int **)param_1[8];
  local_4 = 1;
  if (piVar2 != (int *)param_1[8]) {
    do {
      iVar1 = piVar2[2];
      if (iVar1 != 0) {
        FUN_004f24d0();
        thunk_FUN_007c7250(iVar1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[8]);
  }
  FUN_004ea770();
  local_4 = local_4 & 0xffffff00;
  FUN_004ea770();
  if (param_1[8] != 0) {
    FUN_005d0370(param_1[8],0xc,0);
  }
  param_1[8] = 0;
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

