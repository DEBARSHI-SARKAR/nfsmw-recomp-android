/* speed.exe 0081e9e7 FUN_0081e9e7; analysis pseudocode, not buildable source.
 * calls 0081e96b FUN_0081e96b
 */

int FUN_0081e9e7(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  piVar5 = DAT_009c21fc;
  iVar6 = 0;
  uVar4 = param_1 + 0xfU & 0xfffffff0;
  local_8 = 0;
  if (DAT_009c21fc[5] == 0) {
    param_1 = DAT_009c21fc[3];
  }
  else {
    local_8 = 0;
    if (DAT_009c21fc[5] < 0) {
LAB_0081ea16:
      piVar1 = (int *)(piVar5[1] + local_8 * 8);
      if (local_8 == 0) {
        param_1 = *piVar1;
        iVar6 = 0;
      }
      else {
        iVar6 = piVar1[3] + piVar1[2];
        param_1 = *piVar1 - iVar6;
      }
      local_c = iVar6;
      FUN_0081e96b(&local_c,&param_1);
      if (param_1 < (int)uVar4) goto code_r0x0081ea4d;
      iVar3 = piVar5[5];
      for (; iVar3 < local_8; iVar3 = iVar3 + 1) {
        puVar2 = (undefined4 *)(piVar5[1] + iVar3 * 8);
        *puVar2 = puVar2[2];
        puVar2[1] = puVar2[3];
        piVar5 = DAT_009c21fc;
      }
      goto LAB_0081eaac;
    }
LAB_0081ea58:
    piVar1 = (int *)(piVar5[1] + 8 + local_8 * 8);
    iVar6 = piVar1[1] + *piVar1;
    param_1 = piVar5[3] - iVar6;
  }
  local_c = iVar6;
  FUN_0081e96b(&local_c,&param_1);
  if (param_1 < (int)uVar4) {
    iVar6 = 0;
  }
  else {
LAB_0081eaac:
    piVar5 = (int *)(piVar5[1] + local_8 * 8);
    *piVar5 = iVar6;
    piVar5[1] = uVar4;
    DAT_009c21fc[5] = DAT_009c21fc[5] + -1;
    DAT_009c21fc[3] = DAT_009c21fc[3] + -8;
    iVar3 = (DAT_009c21fc[3] - iVar6) - uVar4;
    iVar6 = *DAT_009c21fc + iVar6;
    if (iVar3 < DAT_009c21fc[4]) {
      DAT_009c21fc[4] = iVar3;
    }
  }
  return iVar6;
code_r0x0081ea4d:
  local_8 = local_8 + -1;
  if (local_8 <= piVar5[5]) goto LAB_0081ea58;
  goto LAB_0081ea16;
}

