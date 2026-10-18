/* speed.exe 00677100 FUN_00677100; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 00634f00 FUN_00634f00
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00677100(int param_1,float param_2,float param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_ESI;
  float10 fVar11;
  undefined4 unaff_retaddr;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_4;
  
  uVar6 = (**(code **)(*param_5 + 0x20))();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 - 0x94);
  piVar7 = (int *)(**(code **)(*(int *)(param_1 + -0x94) + 0x54))();
  pfVar8 = (float *)FUN_00454810(0x360552da,0);
  if (pfVar8 == (float *)0x0) {
    pfVar8 = (float *)FUN_006269b0(4);
  }
  if (*pfVar8 < _DAT_00890968 == (*pfVar8 == _DAT_00890968)) {
    (**(code **)(*param_5 + 8))();
    (**(code **)(*piVar7 + 0x58))(param_3,&fStack_18);
    fVar2 = fStack_1c * pfStack_4[1] + fStack_20 * *pfStack_4 + fStack_18 * pfStack_4[2];
    if (fVar2 < param_3) {
      param_3 = param_3 - fVar2;
      fVar2 = *pfStack_4;
      fVar3 = pfStack_4[1];
      fVar4 = pfStack_4[2];
      fVar11 = (float10)(**(code **)(*piVar7 + 0x18))();
      fVar11 = fVar11 / (float10)param_2;
      fStack_14 = (float)((float10)(param_3 * fVar2) * fVar11);
      fStack_10 = (float)((float10)(param_3 * fVar3) * fVar11);
      fStack_c = (float)((float10)(param_3 * fVar4) * fVar11);
      (**(code **)(*piVar7 + 0x88))(&fStack_14,unaff_retaddr);
    }
    piVar7 = (int *)(**(code **)(*piVar1 + 0x74))();
    if (piVar7 != (int *)0x0) {
      iVar9 = *piVar7;
      fVar11 = (float10)FUN_006e8de0(0,2);
      (**(code **)(iVar9 + 0x34))(0xab556d39,(float)fVar11);
      cVar5 = (**(code **)(*param_5 + 0x1c))();
      param_1 = unaff_ESI;
      if (cVar5 != '\0') {
        iVar9 = *piVar7;
        fVar11 = (float10)FUN_006e8de0(0,2);
        (**(code **)(iVar9 + 0x34))(0xffcd8a63,(float)fVar11);
      }
    }
    iVar9 = (**(code **)(*piVar1 + 0x88))();
    if (iVar9 == 0) {
      iVar9 = (**(code **)(*param_5 + 0x14))();
      if (iVar9 != 0) {
        uVar10 = (**(code **)(*param_5 + 0x14))();
        piVar7 = (int *)FUN_00634f00(uVar10);
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 8))(param_5,-(uint)(param_1 != 0xc0) & (uint)piVar1);
        }
      }
    }
    return 1;
  }
  return 0;
}

