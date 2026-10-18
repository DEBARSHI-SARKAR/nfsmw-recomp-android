/* speed.exe 00753650 FUN_00753650; analysis pseudocode, not buildable source.
 * calls 007513d0 FUN_007513d0
 * calls 00463ca0 FUN_00463ca0
 * calls 00410d30 thunk_FUN_00501480
 */

void __fastcall FUN_00753650(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    thunk_FUN_00501480();
    FUN_00463ca0(DAT_00915fb4,iVar1);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    thunk_FUN_00501480();
    FUN_00463ca0(DAT_00915fb4,iVar1);
  }
  if (param_1[0xc] != 0) {
    FUN_007513d0();
  }
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

