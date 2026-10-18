/* speed.exe 00600660 FUN_00600660; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005fe090 FUN_005fe090
 * calls 00735620 FUN_00735620
 */

void __thiscall FUN_00600660(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c) + 1;
  if (param_2 == iVar2) {
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  cVar1 = FUN_00735620();
  if (((cVar1 == '\0') || (*(int *)(param_1 + 0x28) != 0)) || (param_2 != 0)) {
    fVar3 = (float10)0.0;
  }
  else {
    fVar3 = (float10)FUN_005fe090();
  }
  *(float *)(param_1 + 0x168) = (float)fVar3;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x164) = (float)fVar3;
  if (*(char *)(param_1 + 0x16c) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x168);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x164)) + (float10)*(float *)(param_1 + 0x168);
  }
  *(float *)(param_1 + 0x168) = (float)fVar3;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x164) = (float)fVar3;
  *(undefined1 *)(param_1 + 0x16c) = 1;
  if (*(char *)(param_1 + 0x154) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x150);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150);
  }
  *(float *)(param_1 + 0x10c) = (float)fVar3;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return;
}

