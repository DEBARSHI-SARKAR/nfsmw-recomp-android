/* speed.exe 00832616 FUN_00832616; analysis pseudocode, not buildable source.
 */

int FUN_00832616(int param_1)

{
  return (((*(byte *)(param_1 + 4) & 0x7f) + 2) * (uint)*(byte *)(param_1 + 5) + 0xf & 0xfffffffc) +
         param_1;
}

