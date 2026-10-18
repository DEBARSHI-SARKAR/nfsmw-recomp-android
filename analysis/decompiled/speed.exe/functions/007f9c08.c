/* speed.exe 007f9c08 FUN_007f9c08; analysis pseudocode, not buildable source.
 * calls 007e9320 FUN_007e9320
 */

void FUN_007f9c08(ushort param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e9320();
  *(uint *)(iVar1 + 0x1c) = (uint)param_1;
  return;
}

