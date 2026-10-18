/* speed.exe 008223c3 FUN_008223c3; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008223c3(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)(param_1 * 0x90 + 0x26 + DAT_009c21f4);
  if (cVar1 == '\0') {
    if (-1 < *param_2) {
      return 0;
    }
    *param_2 = param_1;
  }
  else {
    do {
      *param_2 = *param_2 + 1;
      if ((int)DAT_009c218c <= *param_2) {
        return 0;
      }
      piVar2 = (int *)(*param_2 * 0x90 + DAT_009c21f4);
    } while (((*(char *)((int)piVar2 + 0x26) != cVar1) || (*(char *)((int)piVar2 + 0x6d) != '\x01'))
            || (*piVar2 < 0));
  }
  return 1;
}

