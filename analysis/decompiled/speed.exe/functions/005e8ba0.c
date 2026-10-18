/* speed.exe 005e8ba0 FUN_005e8ba0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __fastcall FUN_005e8ba0(int param_1)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x1978) != '\0') {
    fVar1 = (float10)FUN_006e8de0();
    *(undefined1 *)(param_1 + 0x1978) = 0;
    *(float *)(param_1 + 0x1974) =
         (float)((fVar1 - (float10)*(float *)(param_1 + 0x1970)) +
                (float10)*(float *)(param_1 + 0x1974));
    return;
  }
  *(undefined1 *)(param_1 + 0x1978) = 0;
  *(undefined4 *)(param_1 + 0x1974) = *(undefined4 *)(param_1 + 0x1974);
  return;
}

