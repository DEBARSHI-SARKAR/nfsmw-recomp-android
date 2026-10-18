/* speed.exe 00575b60 FUN_00575b60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00575b60(int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  if ((char)param_1[0x3c] == '\0') {
    return;
  }
  if (param_3 == -0x4a68e40f) {
    fVar1 = (float)param_1[0x3b] + (float)param_1[0x3a];
  }
  else {
    if (param_3 != -0x6edfbf62) goto LAB_00575ba5;
    fVar1 = (float)param_1[0x3a] - (float)param_1[0x3b];
  }
  param_1[0x3a] = (int)fVar1;
LAB_00575ba5:
  fVar1 = (float)param_1[0x38];
  if ((float)param_1[0x38] < (float)param_1[0x3a]) {
    fVar1 = (float)param_1[0x3a];
  }
  if ((float)param_1[0x39] <= fVar1) {
    fVar1 = (float)param_1[0x39];
  }
  param_1[0x3a] = (int)fVar1;
  fVar2 = ((float)param_1[0x39] + (float)param_1[0x38]) * _DAT_008933d4;
  param_1[0x21] = param_1[0x22];
  fVar1 = (fVar2 + (float)param_1[0x38]) - fVar1;
  if (fVar1 <= (float)param_1[0x20]) {
    fVar1 = (float)param_1[0x20];
  }
  if ((float)param_1[0x1f] <= fVar1) {
    fVar1 = (float)param_1[0x1f];
  }
  param_1[0x22] = (int)fVar1;
  param_1[0x30] = param_1[0x31];
  fVar1 = (float)param_1[0x3a];
  if ((float)param_1[0x3a] <= (float)param_1[0x2f]) {
    fVar1 = (float)param_1[0x2f];
  }
  if ((float)param_1[0x2e] <= fVar1) {
    fVar1 = (float)param_1[0x2e];
  }
  param_1[0x31] = (int)fVar1;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

