/* speed.exe 007fef4f FUN_007fef4f; analysis pseudocode, not buildable source.
 */

void FUN_007fef4f(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = param_1 + param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *pbVar2 = (byte)(pbVar2[param_2] + 1 + (uint)bVar1 >> 1);
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

