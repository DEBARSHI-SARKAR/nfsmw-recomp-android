/* speed.exe 005de710 FUN_005de710; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00753650 FUN_00753650
 */

void __fastcall FUN_005de710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

