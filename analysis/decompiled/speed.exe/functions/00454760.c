/* speed.exe 00454760 FUN_00454760; analysis pseudocode, not buildable source.
 * calls 004540e0 FUN_004540e0
 */

uint __thiscall FUN_00454760(uint param_1,undefined4 param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  int local_10 [4];
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar2 = (int *)FUN_004540e0(local_10,param_1,param_2);
    if (*param_3 != 0) {
      psVar1 = (short *)(*param_3 + 0x12);
      *psVar1 = *psVar1 + -1;
    }
    *param_3 = *piVar2;
    param_3[1] = piVar2[1];
    param_3[2] = piVar2[2];
    param_3[3] = piVar2[3];
    if (*param_3 != 0) {
      psVar1 = (short *)(*param_3 + 0x12);
      *psVar1 = *psVar1 + 1;
    }
    if (local_10[0] != 0) {
      *(short *)(local_10[0] + 0x12) = *(short *)(local_10[0] + 0x12) + -1;
    }
    return (uint)(param_3[2] != 0);
  }
  return param_1 & 0xffffff00;
}

