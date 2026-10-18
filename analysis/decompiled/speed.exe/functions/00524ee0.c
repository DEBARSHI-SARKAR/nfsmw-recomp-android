/* speed.exe 00524ee0 FUN_00524ee0; analysis pseudocode, not buildable source.
 * calls 00591fd0 FUN_00591fd0
 * calls 00585b50 FUN_00585b50
 * calls 00586210 FUN_00586210
 * calls 00572300 FUN_00572300
 * calls 00572330 FUN_00572330
 * calls 0057e920 FUN_0057e920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524ee0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  undefined1 local_800 [2048];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  fVar2 = *(float *)(iVar1 + 0x38);
  fVar3 = *(float *)(iVar1 + 0x3c);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 7:
  case 9:
  case 0xc:
    *param_2 = *(float *)(iVar1 + 0x1c);
    *param_3 = *(float *)(iVar1 + 0x20);
    return;
  case 2:
    break;
  default:
    *param_2 = *(float *)(iVar1 + 0x1c);
    *param_3 = *(float *)(iVar1 + 0x20);
    return;
  }
  iVar5 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
  if (iVar5 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar4 = FUN_0057e920(local_800,0x800,*(undefined4 *)(param_1 + 0x60));
    puVar6 = local_800;
    if (cVar4 != '\0') goto LAB_00524f83;
  }
  puVar6 = *(undefined1 **)(param_1 + 100);
LAB_00524f83:
  fVar7 = (float10)FUN_00586210(puVar6,0);
  fVar2 = (float)(fVar7 * (float10)fVar2);
  fVar7 = (float10)FUN_00591fd0(puVar6,*(undefined4 *)(param_1 + 0x70),0,0,0);
  fVar3 = (float)(fVar7 * (float10)fVar3);
  fVar7 = (float10)FUN_00572300(*(undefined4 *)(param_1 + 0x6c),fVar2);
  *param_2 = (float)((float10)fVar2 * (float10)_DAT_008933d4 + fVar7 +
                    (float10)*(float *)(iVar1 + 0x1c));
  fVar7 = (float10)FUN_00572330(*(undefined4 *)(param_1 + 0x6c),fVar3);
  *param_3 = (float)((float10)fVar3 * (float10)_DAT_008933d4 + fVar7 +
                    (float10)*(float *)(iVar1 + 0x20));
  return;
}

