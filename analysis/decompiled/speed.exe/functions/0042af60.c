/* speed.exe 0042af60 FUN_0042af60; analysis pseudocode, not buildable source.
 * calls 0041bd10 FUN_0041bd10
 */

void FUN_0042af60(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  for (piVar1 = DAT_0090d664; (piVar1 != DAT_0090d664 + DAT_0090d66c && (*piVar1 != param_1));
      piVar1 = piVar1 + 1) {
  }
  FUN_0041bd10(piVar1,piVar1 + 1);
  if (DAT_0090d878 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = (undefined *)(DAT_0090d878 + -4);
  }
  while (puVar2 != &DAT_0090d874) {
    if (*(int *)(puVar2 + 0x1c) == param_1) {
      puVar2[0x2c] = 0;
      *(undefined4 *)(puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 0x10) = DAT_008a2fb4;
      *(undefined4 *)(puVar2 + 0x14) = DAT_008a2fb8;
      *(undefined4 *)(puVar2 + 0x18) = DAT_008a2fbc;
      *(undefined4 *)(puVar2 + 0x20) = DAT_008a2fb4;
      *(undefined4 *)(puVar2 + 0x24) = DAT_008a2fb8;
      *(undefined4 *)(puVar2 + 0x28) = DAT_008a2fbc;
      *(undefined4 *)(puVar2 + 0x3c) = 0;
      *(undefined4 *)(puVar2 + 0x30) = DAT_008a2fb4;
      *(undefined4 *)(puVar2 + 0x34) = DAT_008a2fb8;
      *(undefined4 *)(puVar2 + 0x38) = DAT_008a2fbc;
    }
    if (*(int *)(puVar2 + 4) == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = (undefined *)(*(int *)(puVar2 + 4) + -4);
    }
  }
  return;
}

