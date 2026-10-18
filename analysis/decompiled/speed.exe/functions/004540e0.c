/* speed.exe 004540e0 FUN_004540e0; analysis pseudocode, not buildable source.
 * calls 00454030 FUN_00454030
 * calls 00452b70 FUN_00452b70
 */

void FUN_004540e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int local_10 [4];
  
  iVar2 = FUN_00454030(param_3,&param_3);
  bVar4 = iVar2 == 0;
  if (bVar4) {
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    piVar3 = local_10;
  }
  else {
    piVar3 = (int *)FUN_00452b70(param_2,param_3,iVar2);
  }
  *param_1 = *piVar3;
  param_1[1] = piVar3[1];
  param_1[2] = piVar3[2];
  param_1[3] = piVar3[3];
  if (*param_1 != 0) {
    psVar1 = (short *)(*param_1 + 0x12);
    *psVar1 = *psVar1 + 1;
  }
  if ((bVar4) && (local_10[0] != 0)) {
    *(short *)(local_10[0] + 0x12) = *(short *)(local_10[0] + 0x12) + -1;
  }
  if ((!bVar4) && (local_10[0] != 0)) {
    *(short *)(local_10[0] + 0x12) = *(short *)(local_10[0] + 0x12) + -1;
  }
  return;
}

