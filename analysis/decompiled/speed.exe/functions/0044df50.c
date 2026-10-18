/* speed.exe 0044df50 FUN_0044df50; analysis pseudocode, not buildable source.
 * calls 007514e0 FUN_007514e0
 * calls 0044d450 FUN_0044d450
 * calls 00447db0 FUN_00447db0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 * calls 00463ca0 FUN_00463ca0
 * calls 00753650 FUN_00753650
 */

void __fastcall FUN_0044df50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (*(int *)(iVar1 + 0x24) != 0) {
      thunk_FUN_007c7250(*(int *)(iVar1 + 0x24));
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
    if (*(int *)(iVar1 + 0x2c) != 0) {
      (*(code *)PTR_FUN_008ee4d4)(*(int *)(iVar1 + 0x2c),0x40);
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    FUN_00447db0();
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      FUN_0044d450();
      DAT_0090da8c = DAT_0090da8c + -1;
      FUN_00463ca0(DAT_0090db5c,iVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
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

