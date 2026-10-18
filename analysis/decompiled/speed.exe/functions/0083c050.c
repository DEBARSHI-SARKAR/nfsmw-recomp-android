/* speed.exe 0083c050 FUN_0083c050; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0083c050(byte *param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  float10 fVar3;
  int local_c;
  int local_8;
  
  fVar3 = (float10)_DAT_0089096c;
  iVar2 = 0;
  local_c = 0;
  local_8 = 1;
  if (param_1 == (byte *)0x0) {
    return (float10)param_2;
  }
  if (*param_1 != 0x2b) {
    if (*param_1 != 0x2d) goto LAB_0083c099;
    fVar3 = (float10)_DAT_00890da8;
  }
  param_1 = param_1 + 1;
LAB_0083c099:
  bVar1 = *param_1;
  while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
    param_1 = param_1 + 1;
    iVar2 = (bVar1 & 0xf) + iVar2 * 10;
    bVar1 = *param_1;
  }
  if (*param_1 == 0x2e) {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    local_c = 0;
    local_8 = 1;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_1 = param_1 + 1;
      local_c = (bVar1 & 0xf) + local_c * 10;
      local_8 = local_8 * 10;
      bVar1 = *param_1;
    }
  }
  return ((float10)iVar2 + (float10)local_c / (float10)local_8) * fVar3;
}

