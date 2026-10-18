/* speed.exe 005fdff0 FUN_005fdff0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 00735620 FUN_00735620
 * calls 005fcd20 FUN_005fcd20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fdff0(int param_1)

{
  char cVar1;
  float10 fVar2;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x1968) == 0) {
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
    fVar2 = (float10)FUN_006e8de0();
    fVar2 = (fVar2 - (float10)_DAT_009b0fdc) - (float10)_DAT_008959e4;
  }
  *(float *)(param_1 + 0x1974) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x1970) = (float)fVar2;
  if (*(char *)(param_1 + 0x1978) == '\0') {
    fVar2 = (float10)*(float *)(param_1 + 0x1974);
  }
  else {
    fVar2 = (float10)FUN_006e8de0();
    fVar2 = (fVar2 - (float10)*(float *)(param_1 + 0x1970)) + (float10)*(float *)(param_1 + 0x1974);
  }
  *(float *)(param_1 + 0x1974) = (float)fVar2;
  fVar2 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x1970) = (float)fVar2;
  *(undefined1 *)(param_1 + 0x1978) = 1;
  return;
}

