/* speed.exe 004163f0 FUN_004163f0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00407cc0 FUN_00407cc0
 * calls 006e8de0 FUN_006e8de0
 * calls 005d59f0 FUN_005d59f0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004163f0(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00867bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar7 = (float10)(**(code **)(*param_2 + 0x18))();
  fVar8 = (float10)FUN_006e8de0();
  fVar8 = fVar8 - (float10)(float)fVar7;
  if (fVar8 < (float10)_DAT_00890d3c == (fVar8 == (float10)_DAT_00890d3c)) goto LAB_004164e0;
  iVar3 = (**(code **)(*param_3 + 4))();
  piVar4 = (int *)(**(code **)(*param_3 + 0x80))();
  if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x54))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (iVar3 == 2) {
    if (!bVar1) goto LAB_004164e0;
    uVar5 = (**(code **)(*param_3 + 0x44))();
    FUN_00407cc0(uVar5);
    uStack_4 = 0;
    piVar4 = (int *)FUN_00454810(0x6db7d192,0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_006269b0(4);
    }
    iVar3 = *piVar4;
    uStack_4 = 0xffffffff;
    FUN_0045a430();
    if (iVar3 == 0) goto LAB_004164e0;
  }
  else {
    if (iVar3 != 1) goto LAB_004164e0;
    piVar4 = (int *)FUN_005d59f0(&LAB_004040e0);
    cVar2 = (**(code **)(*piVar4 + 0x7c))();
    if ((cVar2 != '\0') || (iVar3 = FUN_005d59f0(&LAB_004038e0), iVar3 == 0)) goto LAB_004164e0;
    iVar3 = 2000;
  }
  iVar6 = (**(code **)(*(int *)(param_1 + -0x714) + 0xa0))();
  if (iVar6 != 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(iVar3);
  }
LAB_004164e0:
  (**(code **)(*param_3 + 0x84))(*(undefined4 *)(param_1 + 8),(float)fVar7);
  ExceptionList = pvStack_14;
  return;
}

