/* speed.exe 00647940 thunk_FUN_00646a90; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_00646a90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_008a7f30;
  if (0 < (int)param_1[1]) {
    piVar3 = param_1 + 2;
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        FUN_00644e10();
        FUN_005d0370(iVar1,0xc,0);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  return;
}

