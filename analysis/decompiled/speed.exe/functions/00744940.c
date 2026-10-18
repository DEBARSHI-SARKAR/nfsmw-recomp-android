/* speed.exe 00744940 FUN_00744940; analysis pseudocode, not buildable source.
 * calls 005094c0 FUN_005094c0
 * calls 004ff180 FUN_004ff180
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_00744940(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_004ff180();
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 != 0) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,iVar1);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

