/* speed.exe 00722030 FUN_00722030; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00722030(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  cVar3 = *(char *)((int)param_1 + 0xd);
  cVar4 = *(char *)((int)param_1 + 0xe);
  fVar5 = (float)(int)*(char *)(param_1 + 3) * _DAT_008b2a08;
  *param_2 = *param_1;
  fVar6 = (float)(int)cVar3 * _DAT_008b2a08;
  fVar7 = (float)(int)cVar4 * _DAT_008b2a08;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if (param_3 != (float *)0x0) {
    *param_3 = fVar5;
    param_3[1] = fVar6;
    param_3[2] = fVar7;
  }
  return;
}

