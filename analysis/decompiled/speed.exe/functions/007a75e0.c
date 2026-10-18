/* speed.exe 007a75e0 FUN_007a75e0; analysis pseudocode, not buildable source.
 * calls 007a7580 FUN_007a7580
 * calls 00515ef0 FUN_00515ef0
 */

undefined4 __fastcall FUN_007a75e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00515ef0(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = FUN_007a7580(*(undefined4 *)(iVar1 + 0x10));
    return uVar2;
  }
  return 0;
}

