/* speed.exe 0085cd00 FUN_0085cd00; analysis pseudocode, not buildable source.
 * calls 0085c950 FUN_0085c950
 * calls 0085bda0 FUN_0085bda0
 */

void FUN_0085cd00(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  if ((((param_2 == 0) || (param_3 = FUN_0085bda0(param_2), -1 < param_3)) &&
      ((param_3 != 0 || (*(int *)(param_1 + 0x178) != 0)))) &&
     ((param_3 != *(int *)(param_1 + 0xd4) &&
      (pbVar1 = (byte *)(param_3 * 0xb0 + 0x246 + param_1), *pbVar1 = *pbVar1 | 1,
      *(int *)(param_1 + 0x17c) == 0)))) {
    FUN_0085c950();
  }
  return;
}

