/* speed.exe 007a6fd0 FUN_007a6fd0; analysis pseudocode, not buildable source.
 * calls 00747ae0 FUN_00747ae0
 */

undefined4 __fastcall FUN_007a6fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x148) != 0x301) {
    if (*(int *)(param_1 + 0x148) != 0x303) {
      return 0x3e871f1;
    }
    return 0xda27;
  }
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 == 0) {
    return 0x2daab07;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      uVar2 = FUN_00747ae0(0xebb03e66,0);
      return uVar2;
    }
    return 0x3797533;
  }
  return 0x3437a52;
}

