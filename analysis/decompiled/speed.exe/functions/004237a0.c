/* speed.exe 004237a0 FUN_004237a0; analysis pseudocode, not buildable source.
 * calls 004180f0 FUN_004180f0
 */

void FUN_004237a0(int param_1)

{
  undefined *puVar1;
  
  if (DAT_0090d878 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(DAT_0090d878 + -4);
  }
  while (puVar1 != &DAT_0090d874) {
    if ((*(int *)(puVar1 + 0x1c) == param_1) || (*(int *)(puVar1 + 0xc) == param_1)) {
      FUN_004180f0();
    }
    if (*(int *)(puVar1 + 4) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)(*(int *)(puVar1 + 4) + -4);
    }
  }
  return;
}

