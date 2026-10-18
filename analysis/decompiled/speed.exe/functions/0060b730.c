/* speed.exe 0060b730 FUN_0060b730; analysis pseudocode, not buildable source.
 * calls 00606af0 FUN_00606af0
 */

void __fastcall FUN_0060b730(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + -8 + *(int *)(param_1 + 0x20) * 8;
  if ((0x1000 < *(ushort *)(param_1 + 0x2c)) &&
     ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28)) / 0x18 + 1 < 0x1000)) {
    FUN_00606af0(param_1,0x1000);
  }
  return;
}

