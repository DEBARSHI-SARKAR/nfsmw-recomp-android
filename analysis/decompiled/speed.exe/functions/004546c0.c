/* speed.exe 004546c0 FUN_004546c0; analysis pseudocode, not buildable source.
 * calls 004540e0 FUN_004540e0
 */

void __thiscall FUN_004546c0(int param_1,int *param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  bool bVar3;
  int local_10 [4];
  
  bVar3 = *(int *)(param_1 + 4) == 0;
  if (bVar3) {
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    piVar2 = local_10;
  }
  else {
    piVar2 = (int *)FUN_004540e0(local_10,param_1,param_3);
  }
  *param_2 = *piVar2;
  param_2[1] = piVar2[1];
  param_2[2] = piVar2[2];
  param_2[3] = piVar2[3];
  if (*param_2 != 0) {
    psVar1 = (short *)(*param_2 + 0x12);
    *psVar1 = *psVar1 + 1;
  }
  if ((bVar3) && (local_10[0] != 0)) {
    *(short *)(local_10[0] + 0x12) = *(short *)(local_10[0] + 0x12) + -1;
  }
  if ((!bVar3) && (local_10[0] != 0)) {
    *(short *)(local_10[0] + 0x12) = *(short *)(local_10[0] + 0x12) + -1;
  }
  return;
}

