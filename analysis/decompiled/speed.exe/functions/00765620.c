/* speed.exe 00765620 FUN_00765620; analysis pseudocode, not buildable source.
 * calls 00765510 FUN_00765510
 */

void FUN_00765620(ushort *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00765510(param_1,&local_18,&local_c);
  pfVar6 = (float *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  pfVar7 = (float *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = *pfVar7;
  fVar4 = pfVar7[1];
  fVar5 = pfVar7[2];
  *param_3 = *pfVar6 + local_18 * param_2;
  param_3[1] = fVar1 + local_14 * param_2;
  param_3[2] = fVar2 + local_10 * param_2;
  *param_4 = fVar3 + local_c * param_2;
  param_4[1] = fVar4 + local_8 * param_2;
  param_4[2] = fVar5 + local_4 * param_2;
  return;
}

