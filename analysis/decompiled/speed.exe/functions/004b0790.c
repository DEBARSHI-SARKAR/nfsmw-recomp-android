/* speed.exe 004b0790 FUN_004b0790; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b0790(undefined4 param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_8 [2];
  
  local_8[0] = -1.0;
  local_8[1] = -1.0;
  if (DAT_008ef998 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < DAT_008ef998) {
    iVar3 = 0;
    do {
      if (param_2 == '\0') {
        puVar1 = &DAT_00914560;
      }
      else {
        puVar1 = &DAT_00914430;
      }
      fVar4 = (float10)FUN_0045f340((int)puVar1 + iVar3,param_1);
      local_8[iVar2] = (float)fVar4;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < DAT_008ef998);
    if ((local_8[1] <= local_8[0]) && (_DAT_00890968 <= local_8[1])) {
      if (local_8[1] < local_8[0]) {
        *param_3 = 1;
        return *(undefined4 *)(DAT_009142d4 + 0x34);
      }
      *param_3 = 0;
      return *(undefined4 *)(DAT_009142d0 + 0x34);
    }
  }
  *param_3 = 0;
  return *(undefined4 *)(DAT_009142d0 + 0x34);
}

