/* speed.exe 007f9bf3 FUN_007f9bf3; analysis pseudocode, not buildable source.
 * calls 007e9320 FUN_007e9320
 */

void FUN_007f9bf3(ushort param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e9320();
  *(uint *)(iVar1 + 0x18) = (uint)param_1;
  return;
}

