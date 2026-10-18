/* speed.exe 00531350 FUN_00531350; analysis pseudocode, not buildable source.
 * calls 0052f500 FUN_0052f500
 * calls 0045ded0 FUN_0045ded0
 * calls 00573140 FUN_00573140
 * calls 005b7580 FUN_005b7580
 * calls 00652ad0 _malloc
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 00530df0 FUN_00530df0
 * calls 005b5b70 FUN_005b5b70
 * calls 00572070 FUN_00572070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00531350(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  ushort uVar4;
  float *pfVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int local_58;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  puStack_10 = &LAB_0086f624;
  local_14 = ExceptionList;
  local_58 = 0;
  puVar11 = DAT_0092fd5c;
  ExceptionList = &local_14;
  if (DAT_0092fd5c != DAT_0092fd5c + DAT_0092fd64) {
    do {
      uStack_c = 0xffffffff;
      piVar10 = (int *)*puVar11;
      pfVar5 = (float *)(**(code **)(*piVar10 + 0x38))();
      fStack_30 = *pfVar5;
      fStack_2c = pfVar5[1];
      fStack_28 = pfVar5[2];
      pfVar5 = (float *)(**(code **)(*piVar10 + 0x3c))();
      fStack_24 = *pfVar5;
      fStack_3c = -fStack_30;
      fStack_34 = -fStack_24;
      fStack_40 = fStack_28;
      iVar8 = *(int *)(param_1 + 0x13c);
      fStack_20 = pfVar5[1];
      fVar3 = _DAT_0089096c / *(float *)(iVar8 + 0xb4);
      fStack_48 = (fStack_28 - *(float *)(iVar8 + 0xac)) * fVar3 * *(float *)(param_1 + 0x14c) +
                  *(float *)(param_1 + 0x144);
      fStack_44 = ((*(float *)(iVar8 + 0xb0) - fStack_3c) * fVar3 + _DAT_0089096c) *
                  *(float *)(param_1 + 0x150) + *(float *)(param_1 + 0x148);
      uVar4 = FUN_0045ded0(fStack_34,pfVar5[2]);
      pcVar12 = *(char **)(param_1 + 0x10);
      fVar3 = (float)uVar4 * _DAT_00894958;
      uVar6 = FUN_00573140("MMICON_ROADBLOCK_%d",local_58);
      if (pcVar12 == (char *)0x0) {
LAB_005314f0:
        iVar8 = 0;
      }
      else {
        pcVar7 = pcVar12;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (pcVar7 == pcVar12 + 1) goto LAB_005314f0;
        if (DAT_0091d218 < 1) {
          iVar8 = FUN_005b5b70(pcVar12);
          if (iVar8 == 0) {
            iVar8 = FUN_005b7580(pcVar12);
            if (iVar8 == 0) goto LAB_005314f0;
            goto LAB_005314ca;
          }
        }
        else {
          FUN_00572070();
          iVar8 = FUN_00591d90(pcVar12);
LAB_005314ca:
          if (iVar8 == 0) goto LAB_005314f0;
        }
        iVar8 = FUN_005b8550(uVar6);
        if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) != 1)) goto LAB_005314f0;
      }
      local_58 = local_58 + 1;
      pvVar9 = _malloc(0x38);
      uStack_c = 0;
      if (pvVar9 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_0052f500(0x20,iVar8,&fStack_48,&fStack_40,fVar3,0);
      }
      uStack_c = 0xffffffff;
      if (iVar8 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(iVar8 + 4);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x158);
      *puVar2 = piVar10;
      *(int **)(param_1 + 0x158) = piVar10;
      *piVar10 = param_1 + 0x154;
      piVar10[1] = (int)puVar2;
      puVar11 = puVar11 + 1;
    } while (puVar11 != DAT_0092fd5c + DAT_0092fd64);
    if (0 < local_58) {
      FUN_00530df0(0x411f1f86,0x20);
    }
  }
  ExceptionList = local_14;
  return;
}

