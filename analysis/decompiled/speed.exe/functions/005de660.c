/* speed.exe 005de660 FUN_005de660; analysis pseudocode, not buildable source.
 * calls 005094c0 FUN_005094c0
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_005de660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_005094c0();
    FUN_00463ca0(DAT_00916068,iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

