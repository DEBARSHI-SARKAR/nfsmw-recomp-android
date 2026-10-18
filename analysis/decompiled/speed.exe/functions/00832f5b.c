/* speed.exe 00832f5b FUN_00832f5b; analysis pseudocode, not buildable source.
 */

int FUN_00832f5b(int param_1)

{
  return (uint)*(byte *)(param_1 + 4) * 4 + 8 +
         ((*(byte *)(param_1 + 2) >> 2) + 3 & 0xfffffffc) + param_1;
}

