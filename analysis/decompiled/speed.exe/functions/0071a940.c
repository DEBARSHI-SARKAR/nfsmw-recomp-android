/* speed.exe 0071a940 FUN_0071a940; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 * calls 004b6d40 FUN_004b6d40
 * calls 00713750 FUN_00713750
 * calls 00709d00 FUN_00709d00
 * calls 00712180 FUN_00712180
 * calls 0070e9a0 FUN_0070e9a0
 * calls 00711930 FUN_00711930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071a940(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int *piStack_28;
  float fStack_24;
  undefined **ppuStack_20;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = DAT_00993cc8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00880278;
  local_c = ExceptionList;
  if (*(int *)(DAT_00993cc8 + 0x138) != 2) {
    return;
  }
  if (*(int *)(DAT_00993cc8 + 0x1d4) != 0) {
    return;
  }
  ExceptionList = &local_c;
  fVar9 = (float10)(**(code **)(**(int **)(DAT_00993cc8 + 0x130) + 0x60))();
  piStack_28 = (int *)(float)fVar9;
  if ((((((float10)_DAT_00890968 < fVar9) && ((float)piStack_28 < _DAT_0089096c)) ||
       (cVar4 = (**(code **)(**(int **)(iVar2 + 0x130) + 0x30))(), cVar4 != '\0')) &&
      ((piVar5 = (int *)FUN_007153b0(1,0), piVar5 != (int *)0x0 &&
       (cVar4 = (**(code **)(*piVar5 + 0x1a0))(), cVar4 == '\0')))) &&
     (cVar4 = FUN_00709d00(0x5a,4), cVar4 == '\0')) {
    (**(code **)(*piVar5 + 0xb4))();
  }
  if ((*(byte *)(param_1 + 0x4c) & 4) == 0) {
    ExceptionList = local_c;
    return;
  }
  if (_DAT_0089096c <= (float)piStack_28) {
    ExceptionList = local_c;
    return;
  }
  piStack_28 = (int *)(DAT_00925ae8 - *(int *)(param_1 + 0x3c));
  fStack_24 = (float)(int)piStack_28 * _DAT_00890984;
  if (fStack_24 < *(float *)(*(int *)(iVar2 + 0x184) + 100)) {
    ExceptionList = local_c;
    return;
  }
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_FUN_008b2658;
  uStack_4 = 0;
  uVar6 = FUN_004b6d40();
  FUN_00712180(uVar6);
  iVar8 = *(int *)(iVar2 + 0x5c);
  if (iVar8 != *(int *)(iVar2 + 0x60)) {
    do {
      piVar5 = *(int **)(iVar8 + 4);
      piStack_28 = piVar5;
      cVar4 = (**(code **)(*piVar5 + 0x60))();
      if (((cVar4 != '\0') && (cVar4 = (**(code **)(*piVar5 + 0x70))(), cVar4 != '\0')) &&
         (cVar4 = (**(code **)(*piVar5 + 0x19c))(), cVar4 != '\0')) {
        FUN_00713750(&piStack_28);
      }
      iVar8 = iVar8 + 8;
    } while (iVar8 != *(int *)(iVar2 + 0x60));
  }
  puVar3 = puStack_18;
  if ((puStack_18 == (undefined4 *)0x0) || (uVar7 = iStack_14 - (int)puStack_18 >> 2, uVar7 == 0))
  goto LAB_0071ab88;
  bVar1 = true;
  if (1 < uVar7) {
    FUN_00711930(puStack_18,iStack_14);
  }
  piVar5 = (int *)*puVar3;
  if ((*(byte *)(param_1 + 0x4c) & 8) == 0) {
LAB_0071ab4a:
    if (*(float *)(iVar2 + 0x108) < *(float *)(*(int *)(iVar2 + 0x184) + 0x2c)) {
      cVar4 = (**(code **)(*piVar5 + 0x1a0))();
      if (cVar4 == '\0') {
        (**(code **)(*piVar5 + 0xb4))();
      }
    }
    else {
      (**(code **)(*piVar5 + 0xbc))(0xffffffff);
    }
  }
  else {
    if (*(int **)(param_1 + 0x60) != (int *)0x0) {
      bVar1 = false;
      fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x60) + 0x1dc))();
      if (fVar9 < (float10)fStack_24 == (fVar9 == (float10)fStack_24)) {
        (**(code **)(**(int **)(param_1 + 0x60) + 0xb8))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x60) + 0xb4))();
      }
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff7;
    *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xfffffbff;
    if (bVar1) goto LAB_0071ab4a;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffb;
LAB_0071ab88:
  uStack_4 = 0xffffffff;
  FUN_0070e9a0();
  ExceptionList = local_c;
  return;
}

