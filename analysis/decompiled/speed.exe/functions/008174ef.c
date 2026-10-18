/* speed.exe 008174ef FUN_008174ef; analysis pseudocode, not buildable source.
 */

void FUN_008174ef(short *param_1,short *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  *param_3 = (int)*param_1 * (int)*param_2;
  param_3[1] = (int)param_1[1] * (int)param_2[1];
  param_3[8] = (int)param_1[2] * (int)param_2[2];
  param_3[0x10] = (int)param_1[3] * (int)param_2[3];
  param_3[9] = (int)param_1[4] * (int)param_2[4];
  param_3[2] = (int)param_1[5] * (int)param_2[5];
  param_3[3] = (int)param_1[6] * (int)param_2[6];
  param_3[10] = (int)param_1[7] * (int)param_2[7];
  param_3[0x11] = (int)param_1[8] * (int)param_2[8];
  param_3[0x18] = (int)param_1[9] * (int)param_2[9];
  param_3[0x20] = (int)param_1[10] * (int)param_2[10];
  return;
}

