/* speed.exe 004596e0 FUN_004596e0; analysis pseudocode, not buildable source.
 * calls 00459410 FUN_00459410
 */

undefined1 __fastcall FUN_004596e0(int param_1)

{
  undefined1 uVar1;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = FUN_00459410();
    return uVar1;
  }
  return 0;
}

