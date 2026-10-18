/* speed.exe 005dda70 FUN_005dda70; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005dda70(int param_1,uint param_2,char param_3,uint param_4)

{
  uint uVar1;
  
  while( true ) {
    do {
      uVar1 = param_2;
      param_2 = uVar1 + 0x14;
      if ((uint)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14) <= param_2) {
        return 0;
      }
    } while (((param_3 != '\0') && (*(char *)(uVar1 + 0x1c) != '\x02')) &&
            (*(char *)(uVar1 + 0x1c) != '\x03'));
    if (param_4 == 0) break;
    if (*(ushort *)(uVar1 + 0x1e) == param_4) {
      return param_2;
    }
  }
  return param_2;
}

