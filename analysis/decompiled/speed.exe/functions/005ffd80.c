/* speed.exe 005ffd80 FUN_005ffd80; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005fcd20 FUN_005fcd20
 */

void __fastcall FUN_005ffd80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float local_4;
  
  puVar2 = (undefined4 *)(param_1 + 0x19bc);
  for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c3c);
  for (iVar1 = 0xa00; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x1968) == 0) {
    local_4 = 0.0;
  }
  else {
    fVar3 = (float10)FUN_005fcd20();
    local_4 = (float)fVar3;
  }
  if (*(char *)(param_1 + 0x1978) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x1974);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x1970)) + (float10)*(float *)(param_1 + 0x1974);
  }
  *(float *)(param_1 + 0x1974) = (float)fVar3;
  *(undefined1 *)(param_1 + 0x1978) = 0;
  *(float *)(param_1 + 0x1974) = local_4;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x1970) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x1980) = 0;
  *(undefined4 *)(param_1 + 0x1984) = 0;
  *(undefined1 *)(param_1 + 0x1989) = 0;
  *(undefined1 *)(param_1 + 0x1988) = 0;
  *(undefined4 *)(param_1 + 0x198c) = 0;
  return;
}

