/* speed.exe 00413ee0 FUN_00413ee0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00403c30 FUN_00403c30
 * calls 00407490 FUN_00407490
 * calls 005d59f0 FUN_005d59f0
 * calls 0066bae0 FUN_0066bae0
 * calls 0045a430 FUN_0045a430
 * calls 00407510 FUN_00407510
 * calls 00454810 FUN_00454810
 * calls 004075a0 FUN_004075a0
 */

float * __thiscall FUN_00413ee0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  int iStack_54;
  int iStack_40;
  int iStack_2c;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00867ba0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 2) = 0;
  piVar3 = (int *)FUN_005d59f0(&LAB_00403700);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x48))();
    FUN_00403c30(uVar4);
    iStack_4 = 0;
    iVar5 = FUN_00454810(0xafa210f0,0);
    if (iVar5 == 0) {
      iVar5 = FUN_006269b0(0xc);
    }
    FUN_00407490(iVar5,0,0);
    iStack_4 = CONCAT31(iStack_4._1_3_,1);
    iVar5 = FUN_00454810(0xbd38d1ca,0);
    if (iVar5 == 0) {
      iVar5 = FUN_006269b0(0xc);
    }
    FUN_00407510(iVar5,0,0);
    iStack_4 = CONCAT31(iStack_4._1_3_,2);
    iVar5 = FUN_00454810(0x7c90bb38,0);
    if (iVar5 == 0) {
      iVar5 = FUN_006269b0(0xc);
    }
    FUN_004075a0(iVar5,0,0);
    fVar2 = *(float *)(iStack_40 + 0xf0);
    iStack_4._0_1_ = 3;
    fVar1 = *(float *)(iStack_2c + 0x3c);
    if (*(float *)(iStack_2c + 0x38) < *(float *)(iStack_2c + 0x3c)) {
      fVar1 = *(float *)(iStack_2c + 0x38);
    }
    *param_1 = fVar1;
    fVar6 = (float10)(**(code **)(*piVar3 + 0x74))();
    fVar6 = (float10)FUN_0066bae0(auStack_20,(float)fVar6);
    fVar1 = *(float *)(iStack_54 + 0x38);
    *(undefined1 *)(param_1 + 2) = 1;
    iStack_4._0_1_ = 2;
    param_1[1] = (float)(((-(fVar6 / (float10)fVar1) + (float10)fVar2) / (float10)fVar2) *
                        (float10)*param_1);
    FUN_0045a430();
    iStack_4._0_1_ = 1;
    FUN_0045a430();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_0045a430();
    iStack_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return param_1;
}

