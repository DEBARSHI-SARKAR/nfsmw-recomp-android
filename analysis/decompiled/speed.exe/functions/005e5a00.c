/* speed.exe 005e5a00 FUN_005e5a00; analysis pseudocode, not buildable source.
 * calls 00753650 FUN_00753650
 * calls 00503c50 FUN_00503c50
 * calls 005094c0 FUN_005094c0
 * calls 00463ca0 FUN_00463ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e5a00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00503c50();
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf7;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_005094c0();
    FUN_00463ca0(DAT_00916068,iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (((byte)*(ushort *)(param_1 + 2) >> 2 & 1) != 0) {
    _DAT_0091e018 = _DAT_0091e018 + -1;
  }
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffb;
  return;
}

