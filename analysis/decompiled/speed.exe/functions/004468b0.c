/* speed.exe 004468b0 FUN_004468b0; analysis pseudocode, not buildable source.
 * calls 007514e0 FUN_007514e0
 * calls 00463ca0 FUN_00463ca0
 * calls 00753650 FUN_00753650
 */

void __fastcall FUN_004468b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_007514e0(*(int *)(param_1 + 0xc));
  }
  return;
}

