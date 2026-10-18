/* speed.exe 007412d0 FUN_007412d0; analysis pseudocode, not buildable source.
 * calls 006596e0 FUN_006596e0
 * calls 00736000 FUN_00736000
 * calls 007c4b80 FUN_007c4b80
 * calls 00627860 FUN_00627860
 * calls 0078b2c0 FUN_0078b2c0
 * calls 00666fe0 FUN_00666fe0
 */

void __fastcall FUN_007412d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009b4174 != 0) {
    FUN_00736000();
  }
  iVar1 = *param_1;
  if ((iVar1 != 3) && (*param_1 = 3, iVar1 == 5)) {
    FUN_0078b2c0();
    uVar2 = FUN_007c4b80();
    FUN_00627860(uVar2);
  }
  if (DAT_00925e90 == 3) {
    FUN_006596e0();
    return;
  }
  FUN_00666fe0();
  return;
}

