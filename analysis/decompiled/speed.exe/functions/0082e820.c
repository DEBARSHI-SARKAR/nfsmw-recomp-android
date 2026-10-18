/* speed.exe 0082e820 FUN_0082e820; analysis pseudocode, not buildable source.
 */

void FUN_0082e820(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x14 + (uint)*(byte *)(param_1 + 0xf) * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return;
}

