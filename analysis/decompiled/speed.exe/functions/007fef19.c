/* speed.exe 007fef19 FUN_007fef19; analysis pseudocode, not buildable source.
 */

void FUN_007fef19(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  while (param_2 = param_2 + -1, param_2 != 0) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = *param_1;
    *param_3 = bVar1;
    param_3[1] = (byte)(bVar2 + 1 + (uint)bVar1 >> 1);
    param_3 = param_3 + 2;
  }
  bVar1 = *param_1;
  *param_3 = bVar1;
  param_3[1] = bVar1;
  return;
}

