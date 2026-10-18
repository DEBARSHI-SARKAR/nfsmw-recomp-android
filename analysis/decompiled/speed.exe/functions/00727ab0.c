/* speed.exe 00727ab0 FUN_00727ab0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00727ab0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar3 = 0;
    for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)(param_1 + 0x28);
        puVar1 = (undefined4 *)*puVar1) {
      if ((*(char *)(puVar1 + 4) == '\0') && (iVar3 < (int)puVar1[3])) {
        iVar3 = puVar1[3];
      }
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x18) = iVar3;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)(param_1 + 0x28)) {
    iVar3 = 0;
    do {
      if (((char)piVar2[4] == '\0') && (iVar3 < piVar2[3])) {
        iVar3 = piVar2[3];
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_1 + 0x28));
  }
  return *(undefined4 *)(param_1 + 0x18);
}

