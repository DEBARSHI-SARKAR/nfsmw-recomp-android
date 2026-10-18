/* speed.exe 00602200 FUN_00602200; analysis pseudocode, not buildable source.
 * calls 005fe090 FUN_005fe090
 * calls 006e8de0 FUN_006e8de0
 * calls 00735620 FUN_00735620
 * calls 00600660 FUN_00600660
 */

void __thiscall FUN_00602200(int param_1,int param_2)

{
  char cVar1;
  float10 fVar2;
  
  *(int *)(param_1 + 0x28) = param_2 + -1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  cVar1 = FUN_00735620();
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0x28) != 0)) {
    fVar2 = (float10)0.0;
  }
  else {
    fVar2 = (float10)FUN_005fe090();
  }
  *(float *)(param_1 + 0x15c) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x158) = (float)fVar2;
  if (*(char *)(param_1 + 0x160) == '\0') {
    fVar2 = (float10)*(float *)(param_1 + 0x15c);
  }
  else {
    fVar2 = (float10)FUN_006e8de0();
    fVar2 = (fVar2 - (float10)*(float *)(param_1 + 0x158)) + (float10)*(float *)(param_1 + 0x15c);
  }
  *(float *)(param_1 + 0x15c) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x158) = (float)fVar2;
  *(undefined1 *)(param_1 + 0x160) = 1;
  FUN_00600660(0);
  return;
}

