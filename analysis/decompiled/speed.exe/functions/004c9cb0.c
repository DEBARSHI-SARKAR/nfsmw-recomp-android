/* speed.exe 004c9cb0 FUN_004c9cb0; analysis pseudocode, not buildable source.
 * calls 00456050 FUN_00456050
 * calls 004d5a90 FUN_004d5a90
 * calls 004c0a90 FUN_004c0a90
 * calls 0045a430 FUN_0045a430
 * calls 0066c3a0 FUN_0066c3a0
 * calls 00454810 FUN_00454810
 * calls 00452940 FUN_00452940
 * calls 00403c30 FUN_00403c30
 * calls 006269b0 FUN_006269b0
 * calls 0045a760 FUN_0045a760
 * calls 004ab1c0 FUN_004ab1c0
 * calls 004ab370 FUN_004ab370
 * calls 004ab2c0 FUN_004ab2c0
 * calls 004ab5d0 FUN_004ab5d0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

float * __thiscall
FUN_004c9cb0(float *param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  int local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c064;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0a90();
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  local_4 = 0;
  param_1[0x18] = 0.0;
  param_1[0x20] = 0.0;
  param_1[0x28] = 0.0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 1.4013e-45;
  param_1[0x2e] = 0.0;
  _eh_vector_constructor_iterator_(param_1 + 0x2f,0x44,4,FUN_004b8900,FUN_004aba50);
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(undefined2 *)((int)param_1 + 0x1ce) = 0;
  param_1[0x74] = 0.0;
  param_1[0x75] = 0.0;
  param_1[0x76] = 0.0;
  param_1[0x77] = 0.0;
  param_1[0x78] = 0.0;
  param_1[0x79] = 0.0;
  param_1[0x7a] = 0.0;
  param_1[0x7c] = 1.4013e-45;
  param_1[0x7b] = 0.0;
  local_4._0_1_ = 1;
  param_1[0x7d] = -NAN;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  FUN_004ab1c0(param_2,0,0);
  local_4._0_1_ = 2;
  FUN_004ab370(0,0,0);
  param_1[0x8c] = param_4;
  param_1[0x8a] = param_3;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(undefined1 *)((int)param_1 + 0x22d) = 0;
  param_1[0x8d] = param_5;
  param_1[0x8e] = 0.0;
  param_1[0x8f] = 0.0;
  param_1[0x90] = 0.0;
  param_1[0x91] = 0.0;
  param_1[0x92] = 0.0;
  param_1[0x94] = -NAN;
  param_1[0x95] = 0.0;
  param_1[0x96] = 2.8026e-45;
  local_4._0_1_ = 3;
  param_1[0x1c] = param_1[0x14];
  param_1[0x1d] = param_1[0x15];
  param_1[0x1e] = param_1[0x16];
  param_1[4] = 1.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 1.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 1.0;
  FUN_00403c30(param_1 + 0x80);
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar2 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar2,0,0);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar2 = FUN_00454810(0x7a7a3e5,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  FUN_004ab5d0(iVar2,0,0);
  local_4 = CONCAT31(local_4._1_3_,6);
  iVar2 = FUN_00452940();
  param_1[0x7f] = (float)(iVar2 + -1);
  if (param_1[0x8a] != 0.0) goto LAB_004c9f4d;
  piVar3 = (int *)FUN_00454810(0xb12ccb69,0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_006269b0(4);
  }
  iVar2 = *piVar3;
  iVar4 = 4 - *(int *)((int)param_1[0x82] + 0x28);
  if (iVar4 < 1) {
    iVar4 = 0;
LAB_004c9f1e:
    iVar6 = iVar4;
  }
  else {
    iVar6 = 4;
    if (iVar4 < 5) goto LAB_004c9f1e;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else if (4 < iVar2) {
    iVar2 = 4;
  }
  iVar2 = iVar2 + iVar6;
  iVar4 = 0;
  if ((iVar2 < 1) || (iVar4 = iVar2, DAT_00913c48 = 4, iVar2 < 5)) {
    DAT_00913c48 = iVar4;
  }
LAB_004c9f4d:
  uVar5 = FUN_004d5a90(param_1,DAT_00913c48);
  uVar5 = FUN_00456050(0x50eab0e6,uVar5);
  FUN_0045a760(uVar5);
  fVar7 = (float10)FUN_0066c3a0(local_48,local_4c);
  *param_1 = (float)fVar7;
  param_1[1] = *(float *)(local_40 + 0x54);
  param_1[2] = *(float *)(local_40 + 0x5c);
  param_1[3] = *(float *)(local_40 + 0x58);
  fVar1 = param_1[0x8a];
  if ((fVar1 == 4.2039e-45) || ((4 < (int)fVar1 && ((int)fVar1 < 7)))) {
    *(undefined1 *)((int)param_1 + 0x22d) = 1;
  }
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_0045a430();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

