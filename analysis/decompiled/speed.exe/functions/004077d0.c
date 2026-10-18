/* speed.exe 004077d0 FUN_004077d0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0066bc40 FUN_0066bc40
 * calls 0045a430 FUN_0045a430
 * calls 00407630 FUN_00407630
 * calls 00454810 FUN_00454810
 * calls 0066bc10 FUN_0066bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_004077d0(float *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008678e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_2 + 0x48))();
  iVar1 = FUN_00454810(0xb1669f64,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0xc);
  }
  FUN_00407630(iVar1,0,0);
  uStack_4 = 0;
  uVar2 = (**(code **)(*param_2 + 0xcc))();
  fVar3 = (float10)FUN_0066bc10(auStack_20,uVar2);
  fVar3 = fVar3 - (float10)_DAT_0089096c;
  if (fVar3 <= (float10)_DAT_00890968) {
    fVar3 = (float10)_DAT_00890968;
  }
  *param_1 = (float)fVar3;
  uVar2 = (**(code **)(*param_2 + 0xcc))();
  fVar3 = (float10)FUN_0066bc40(auStack_20,uVar2);
  param_1[1] = (float)fVar3;
  uStack_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return param_1;
}

