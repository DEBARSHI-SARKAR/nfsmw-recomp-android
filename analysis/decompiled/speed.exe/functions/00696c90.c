/* speed.exe 00696c90 FUN_00696c90; analysis pseudocode, not buildable source.
 * calls 006969c0 FUN_006969c0
 * calls 005d29d0 FUN_005d29d0
 * calls 005c5e80 FUN_005c5e80
 */

undefined4 __thiscall
FUN_00696c90(int *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar5 = FUN_005d29d0(0x4c,0);
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_006969c0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (piVar6[9] == 2) {
    iVar5 = *param_1;
    *param_1 = (int)piVar6;
    *(int **)(iVar5 + 4) = piVar6;
    piVar6[1] = (int)param_1;
    *piVar6 = iVar5;
  }
  else {
    puVar4 = (undefined4 *)param_1[1];
    *puVar4 = piVar6;
    param_1[1] = (int)piVar6;
    piVar6[1] = (int)puVar4;
    *piVar6 = (int)param_1;
  }
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar7 = (float10)FUN_005c5e80(param_3[2] * param_3[2] +
                                param_3[1] * param_3[1] + *param_3 * *param_3);
  fVar8 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar8 = fVar8 + (float10)(float)fVar7;
  if (fVar8 < (float10)(float)param_1[2]) {
    fVar8 = (float10)(float)param_1[2];
  }
  iVar5 = param_1[3];
  param_1[2] = (int)(float)fVar8;
  param_1[3] = iVar5 + 1;
  return CONCAT31((int3)((uint)(iVar5 + 1) >> 8),1);
}

