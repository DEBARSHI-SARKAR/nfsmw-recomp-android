/* speed.exe 00600210 FUN_00600210; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005fde80 FUN_005fde80
 */

void __fastcall FUN_00600210(int param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (*(char *)(param_1 + 0x154) == '\0') {
      fVar1 = (float10)*(float *)(param_1 + 0x150);
    }
    else {
      fVar1 = (float10)FUN_006e8de0();
      fVar1 = (fVar1 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150);
    }
    *(float *)(param_1 + 0x150) = (float)fVar1;
    *(undefined1 *)(param_1 + 0x154) = 0;
    if (*(char *)(param_1 + 0x160) == '\0') {
      fVar1 = (float10)*(float *)(param_1 + 0x15c);
    }
    else {
      fVar1 = (float10)FUN_006e8de0();
      fVar1 = (fVar1 - (float10)*(float *)(param_1 + 0x158)) + (float10)*(float *)(param_1 + 0x15c);
    }
    *(float *)(param_1 + 0x15c) = (float)fVar1;
    *(undefined1 *)(param_1 + 0x160) = 0;
    if (*(char *)(param_1 + 0x16c) == '\0') {
      fVar1 = (float10)*(float *)(param_1 + 0x168);
    }
    else {
      fVar1 = (float10)FUN_006e8de0();
      fVar1 = (fVar1 - (float10)*(float *)(param_1 + 0x164)) + (float10)*(float *)(param_1 + 0x168);
    }
    *(float *)(param_1 + 0x168) = (float)fVar1;
    *(undefined1 *)(param_1 + 0x16c) = 0;
    FUN_005fde80();
    return;
  }
  return;
}

