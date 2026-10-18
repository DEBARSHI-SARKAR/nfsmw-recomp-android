/* speed.exe 006032a0 FUN_006032a0; analysis pseudocode, not buildable source.
 * calls 005fcd20 FUN_005fcd20
 * calls 005fe090 FUN_005fe090
 * calls 00602200 FUN_00602200
 * calls 006e8de0 FUN_006e8de0
 * calls 00735620 FUN_00735620
 */

void __fastcall FUN_006032a0(int param_1)

{
  char cVar1;
  float10 fVar2;
  undefined4 local_4;
  
  if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
    local_4 = 0.0;
  }
  else {
    fVar2 = (float10)FUN_005fcd20();
    local_4 = (float)fVar2;
  }
  cVar1 = FUN_00735620();
  if (cVar1 == '\0') {
    fVar2 = (float10)local_4;
  }
  else {
    fVar2 = (float10)FUN_005fe090();
  }
  *(float *)(param_1 + 0x150) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x14c) = (float)fVar2;
  if (*(char *)(param_1 + 0x154) == '\0') {
    fVar2 = (float10)*(float *)(param_1 + 0x150);
  }
  else {
    fVar2 = (float10)FUN_006e8de0();
    fVar2 = (fVar2 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150);
  }
  *(float *)(param_1 + 0x150) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x14c) = (float)fVar2;
  *(undefined1 *)(param_1 + 0x154) = 1;
  FUN_00602200(1);
  return;
}

