/* speed.exe 0066b0d0 FUN_0066b0d0; analysis pseudocode, not buildable source.
 * calls 00480f90 FUN_00480f90
 */

void __fastcall FUN_0066b0d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if ((*(byte *)(param_1 + 0xda) & 1) != 0) {
    FUN_00480f90(param_1 + 0x94);
    *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) & 0xfe;
  }
  return;
}

