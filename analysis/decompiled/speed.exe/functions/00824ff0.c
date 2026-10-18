/* speed.exe 00824ff0 FUN_00824ff0; analysis pseudocode, not buildable source.
 * calls 008244ac FUN_008244ac
 */

undefined4 FUN_00824ff0(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  while (pbVar2 = (byte *)*param_1, *pbVar2 == 0xfc) {
    *param_1 = *param_1 + 1;
  }
  bVar1 = *pbVar2;
  param_1[1] = (uint)bVar1;
  if (bVar1 == 0xff) {
    return 0;
  }
  *param_1 = (int)(pbVar2 + 1);
  if ((param_1[1] != 0xfd) && (param_1[1] != 0xfe)) {
    uVar4 = (uint)pbVar2[1];
    param_1[4] = uVar4;
    if (uVar4 == 0xff) {
      iVar3 = FUN_008244ac(pbVar2 + 2,4);
      *param_1 = *param_1 + 4;
      param_1[4] = iVar3;
    }
    *param_1 = *param_1 + 1;
    param_1[3] = *param_1;
    if ((uint)param_1[4] < 5) {
      iVar3 = FUN_008244ac(*param_1,param_1[4]);
      param_1[2] = iVar3;
    }
    *param_1 = *param_1 + param_1[4];
  }
  return 1;
}

