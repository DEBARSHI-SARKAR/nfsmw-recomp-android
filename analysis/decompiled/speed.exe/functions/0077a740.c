/* speed.exe 0077a740 FUN_0077a740; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0077a740(int *param_1)

{
  int *piVar1;
  
  if ((char)param_1[4] == '\0') {
    return;
  }
  if ((*(char *)((int)param_1 + 0x11) == '\0') && (0 < param_1[2])) {
    param_1[3] = param_1[3] + 4;
    param_1[2] = param_1[2] + -1;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if (*(int *)param_1[1] != 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    if (param_1[5] != *(int *)(*(int *)param_1[1] + 4)) {
      do {
        if (*(int *)(param_1[5] + 0xc) == *param_1) break;
        param_1[5] = *(int *)param_1[5];
      } while (param_1[5] != *(int *)(*(int *)param_1[1] + 4));
    }
    piVar1 = (int *)param_1[5];
    if (piVar1 != *(int **)(*(int *)param_1[1] + 4)) {
      param_1[3] = (int)(piVar1 + 2);
      param_1[5] = *piVar1;
      return;
    }
  }
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

