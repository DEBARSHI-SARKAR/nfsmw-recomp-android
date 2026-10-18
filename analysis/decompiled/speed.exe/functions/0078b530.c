/* speed.exe 0078b530 FUN_0078b530; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 00460c70 FUN_00460c70
 */

void __thiscall FUN_0078b530(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((((*param_1 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) &&
     ((0 < param_1[0x21] && (iVar2 = 0, 0 < param_1[0x21])))) {
    piVar3 = param_1 + 1;
    while (iVar1 = FUN_00460d20(piVar3,param_2), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 8;
      if (param_1[0x21] <= iVar2) {
        return;
      }
    }
    *(undefined1 *)(param_1 + iVar2 * 8 + 1) = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 < param_1[0x21]) {
      piVar3 = param_1 + iVar2 * 8 + 1;
      do {
        FUN_00460c70(piVar3 + -8,piVar3);
        *(undefined1 *)piVar3 = 0;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 8;
      } while (iVar2 < param_1[0x21]);
    }
    param_1[0x21] = param_1[0x21] + -1;
  }
  return;
}

