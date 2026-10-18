/* speed.exe 006b4fa0 FUN_006b4fa0; analysis pseudocode, not buildable source.
 */

code * FUN_006b4fa0(char param_1,code *param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = DAT_009383a4;
  if (param_1 == '\0') {
    iVar9 = DAT_009383a0;
  }
  if (iVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar9 + 0x10);
      if ((iVar9 == iVar2) && (*(int *)(iVar2 + 4) != iVar2 + 0x18)) {
        iVar7 = *(int *)(iVar2 + 0x30);
        if (param_1 != '\0') {
          iVar7 = iVar7 + 0x34;
        }
        fVar3 = *(float *)(iVar7 + 8);
        fVar4 = *(float *)(iVar7 + 0x20);
        for (iVar7 = *(int *)(iVar9 + 4); iVar7 != iVar2 + 0x18; iVar7 = *(int *)(iVar7 + 4)) {
          if (iVar7 == *(int *)(iVar7 + 0x10)) {
            iVar5 = *(int *)(*(int *)(iVar7 + 0x10) + 0x30);
            iVar8 = iVar5 + 0x34;
            if (param_1 == '\0') {
              iVar8 = iVar5;
            }
            fVar1 = *(float *)(iVar8 + 8);
            fVar6 = *(float *)(iVar8 + 0x20);
            if ((((fVar3 <= fVar1) && (fVar1 < fVar4 != (fVar1 == fVar4))) ||
                ((fVar3 <= fVar6 && (fVar6 < fVar4 != (fVar6 == fVar4))))) ||
               ((fVar1 < fVar3 && (fVar4 < fVar6)))) {
              (*param_2)(*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x30) + 0x68),
                         *(undefined4 *)(iVar5 + 0x68),param_3);
            }
          }
        }
      }
      iVar9 = *(int *)(iVar9 + 4);
    } while (iVar9 != 0);
    return param_2;
  }
  return param_2;
}

