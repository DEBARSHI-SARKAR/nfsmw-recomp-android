/* speed.exe 00515140 FUN_00515140; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 00572300 FUN_00572300
 * calls 00591fd0 FUN_00591fd0
 * calls 00572330 FUN_00572330
 * calls 00586210 FUN_00586210
 * calls 0057e920 FUN_0057e920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515140(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  undefined1 local_800 [2048];
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 7:
  case 9:
  case 0xc:
    *param_2 = *(float *)(iVar3 + 0x38) * _DAT_008933d4 + *(float *)(iVar3 + 0x1c);
    *param_3 = *(float *)(iVar3 + 0x3c) * _DAT_008933d4 + *(float *)(iVar3 + 0x20);
    return;
  case 2:
    break;
  default:
    *param_2 = *(float *)(iVar3 + 0x1c);
    *param_3 = *(float *)(iVar3 + 0x20);
    return;
  }
  iVar5 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
  if (iVar5 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar4 = FUN_0057e920(local_800,0x800,*(undefined4 *)(param_1 + 0x60));
    puVar6 = local_800;
    if (cVar4 != '\0') goto LAB_005151e7;
  }
  puVar6 = *(undefined1 **)(param_1 + 100);
LAB_005151e7:
  fVar7 = (float10)FUN_00586210(puVar6,0);
  fVar1 = (float)(fVar7 * (float10)*(float *)(iVar3 + 0x38));
  fVar7 = (float10)FUN_00591fd0(puVar6,*(undefined4 *)(param_1 + 0x70),0,0,0);
  fVar2 = (float)(fVar7 * (float10)*(float *)(iVar3 + 0x3c));
  fVar7 = (float10)FUN_00572300(*(undefined4 *)(param_1 + 0x6c),fVar1);
  *param_2 = (float)(fVar7 + (float10)*(float *)(iVar3 + 0x1c) + (float10)fVar1);
  fVar7 = (float10)FUN_00572330(*(undefined4 *)(param_1 + 0x6c),fVar2);
  *param_3 = (float)(fVar7 + (float10)*(float *)(iVar3 + 0x20) + (float10)fVar2);
  return;
}

