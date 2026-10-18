/* speed.exe 00587500 FUN_00587500; analysis pseudocode, not buildable source.
 * calls 005155e0 FUN_005155e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00587500(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  pfVar2 = param_2;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *param_2 = 0.0;
  *param_3 = 0.0;
  if (*(int *)(param_1 + 4) == 0) goto LAB_0058752b;
  iVar4 = *(int *)(param_1 + 4) + -4;
  while( true ) {
    iVar3 = param_1;
    if (param_1 == -4) {
      iVar3 = 0;
    }
    if (iVar4 == iVar3) break;
    param_2 = (float *)0x3f800000;
    if (*(char *)(iVar4 + 0x44) == '\0') {
      fVar1 = *(float *)(iVar4 + 0x34) - *(float *)(iVar4 + 0x40);
      param_2 = (float *)((((float)DAT_00925b14 * _DAT_00890984 - *(float *)(iVar4 + 0x38)) /
                          *(float *)(iVar4 + 0x3c)) * fVar1 + *(float *)(iVar4 + 0x40));
      if (((_DAT_00890968 <= fVar1) && ((float)param_2 < *(float *)(iVar4 + 0x34))) ||
         ((fVar1 < _DAT_00890968 && (*(float *)(iVar4 + 0x34) < (float)param_2)))) {
        FUN_005155e0(*(undefined4 *)(iVar4 + 0x10),(float)param_2 * *(float *)(iVar4 + 0x24),
                     (float)param_2 * *(float *)(iVar4 + 0x28));
        *(undefined1 *)(param_1 + 0x2a) = 1;
      }
      else {
        FUN_005155e0(*(undefined4 *)(iVar4 + 0x10),
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x34),
                     *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x34));
        *(float **)(iVar4 + 0x40) = param_2;
        *(undefined1 *)(iVar4 + 0x44) = 1;
      }
    }
    *pfVar2 = (float)param_2 * *(float *)(iVar4 + 0x24) + *pfVar2;
    *param_3 = (float)param_2 * *(float *)(iVar4 + 0x28) + *param_3;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) + -4;
    }
    if (iVar4 != iVar3) {
      *pfVar2 = *(float *)(param_1 + 0x20) + *pfVar2;
      *param_3 = *(float *)(param_1 + 0x20) + *param_3;
    }
    if (*(int *)(iVar4 + 4) == 0) {
LAB_0058752b:
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + -4;
    }
  }
  return;
}

