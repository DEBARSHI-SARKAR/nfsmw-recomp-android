/* speed.exe 004cd570 FUN_004cd570; analysis pseudocode, not buildable source.
 * calls 004cac10 FUN_004cac10
 * calls 0045f2e0 FUN_0045f2e0
 * calls 004cc6b0 FUN_004cc6b0
 */

void __thiscall FUN_004cd570(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (param_2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 4) = *param_2;
      *(undefined4 *)(param_1 + 8) = param_2[1];
      *(undefined4 *)(param_1 + 0xc) = param_2[2];
      *(undefined4 *)(param_1 + 0x10) = param_2[3];
      *(undefined4 *)(param_1 + 0x14) = param_2[4];
      *(undefined4 *)(param_1 + 0x18) = param_2[5];
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar2 = 0;
    if (*(char *)(*(int *)(param_1 + 0x1c) + 9) != '\0') {
      piVar3 = (int *)(param_1 + 0x24);
      do {
        if (*piVar3 != 0) {
          FUN_004cac10(param_1 + 4);
          piVar1 = (int *)*piVar3;
          if (*piVar1 == 0) {
            if ((piVar1 != (int *)0x0) && (FUN_004cc6b0(), DAT_009120c4 != 0)) {
              FUN_0045f2e0(piVar1);
            }
            *piVar3 = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x1c) + 9));
    }
  }
  return;
}

