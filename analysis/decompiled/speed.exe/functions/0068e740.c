/* speed.exe 0068e740 FUN_0068e740; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0068e740(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float unaff_EBX;
  float10 fVar8;
  float *unaff_retaddr;
  
  iVar3 = param_1[param_3 + 0x5a];
  fVar4 = *(float *)(iVar3 + 0x4c);
  fVar5 = *(float *)(iVar3 + 0x50);
  fVar6 = *(float *)(iVar3 + 0x54);
  if (param_1[0x28] == 0) {
    *param_2 = fVar4;
    param_2[1] = fVar5;
    param_2[2] = fVar6;
    return;
  }
  fVar8 = (float10)(**(code **)(*param_1 + 0x68))(param_3);
  fVar6 = (float)fVar8;
  pfVar7 = (float *)(**(code **)(*(int *)param_1[0x28] + 0xa0))();
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  *unaff_retaddr = fVar6 * *pfVar7 + unaff_EBX;
  unaff_retaddr[1] = fVar6 * fVar1 + fVar4;
  unaff_retaddr[2] = fVar6 * fVar2 + fVar5;
  return;
}

