/* speed.exe 00759140 FUN_00759140; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007556c0 FUN_007556c0
 * calls 006cb2a0 FUN_006cb2a0
 * calls 00463ca0 FUN_00463ca0
 * calls 00410d30 thunk_FUN_00501480
 */

void __fastcall FUN_00759140(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_006cb2a0();
  iVar1 = param_1[0xc6];
  if (iVar1 != 0) {
    FUN_007556c0();
    thunk_FUN_007c7250(iVar1);
    param_1[0xc6] = 0;
  }
  iVar1 = param_1[0x15c];
  if (iVar1 != 0) {
    thunk_FUN_00501480();
    FUN_00463ca0(DAT_00915fb4,iVar1);
    param_1[0x15c] = 0;
  }
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

