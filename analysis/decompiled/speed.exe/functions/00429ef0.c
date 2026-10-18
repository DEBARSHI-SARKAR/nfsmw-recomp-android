/* speed.exe 00429ef0 FUN_00429ef0; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8de0 FUN_006e8de0
 * calls 007c4b80 FUN_007c4b80
 * calls 00418000 FUN_00418000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00429ef0(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  int *unaff_retaddr;
  undefined4 uStack_58;
  uint uStack_4c;
  uint *puStack_48;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008681a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(*param_2 + 4))();
  piVar5 = (int *)FUN_005d59f0(&LAB_004037e0);
  if (piVar5 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  uVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  FUN_00418000(uVar6);
  uStack_4 = 0;
  FUN_00423860(uVar4);
  cVar3 = (**(code **)(*(int *)(param_1 + 0x758) + 0x7c))(&uStack_4c);
  if (cVar3 == '\0') goto LAB_00429f89;
  piVar7 = (int *)FUN_005d59f0(&LAB_00403700);
  fVar9 = (float10)(**(code **)(*piVar5 + 0x54))();
  if (fVar9 <= (float10)_DAT_00890968) {
LAB_00429fef:
    bVar2 = false;
  }
  else {
    fVar10 = (float10)FUN_006e8de0();
    bVar2 = true;
    if ((float10)_DAT_0089096c <= fVar10 - (float10)(float)fVar9) goto LAB_00429fef;
  }
  fVar10 = (float10)(**(code **)(*piVar5 + 0x5c))();
  fVar9 = (float10)_DAT_00890968;
  if ((piVar7 == (int *)0x0) || (iVar8 = (**(code **)(*piVar7 + 0xa0))(), iVar8 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  (**(code **)(*piVar5 + 4))();
  iVar8 = FUN_007c4b80();
  if ((((bVar1) || (fVar9 < fVar10)) || (bVar2)) ||
     ((3 < iVar8 ||
      (fVar9 = (float10)(**(code **)(*unaff_retaddr + 0x90))(), (float10)_DAT_00891694 <= fVar9))))
  {
    (**(code **)(*(int *)(param_1 + 0x4c) + 100))(uStack_58);
    FUN_00423860(uStack_58);
    *puStack_48 = uStack_4c;
    *(uint **)(uStack_4c + 4) = puStack_48;
    ExceptionList = pvStack_10;
    return 1;
  }
LAB_00429f89:
  *puStack_48 = uStack_4c;
  *(uint **)(uStack_4c + 4) = puStack_48;
  ExceptionList = pvStack_10;
  return 0;
}

