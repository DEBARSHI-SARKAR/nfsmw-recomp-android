/* speed.exe 00827b07 FUN_00827b07; analysis pseudocode, not buildable source.
 */

void FUN_00827b07(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = (uint)param_1[1] >> ((byte)param_2 & 0x1f);
  param_1[2] = param_1[2] - param_2;
  iVar1 = param_1[2];
  if (iVar1 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar1 & 0x1f) | param_1[1];
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar1 + 8;
  }
  return;
}

