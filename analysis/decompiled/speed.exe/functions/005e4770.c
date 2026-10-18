/* speed.exe 005e4770 FUN_005e4770; analysis pseudocode, not buildable source.
 */

byte * __thiscall FUN_005e4770(int param_1,byte *param_2,char param_3,uint param_4)

{
  byte *pbVar1;
  
  while( true ) {
    do {
      pbVar1 = param_2;
      param_2 = pbVar1 + 0x14;
      if ((byte *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac) * 0x14) <= param_2) {
        return (byte *)0x0;
      }
    } while ((param_3 != '\0') && ((*param_2 >> 1 & 1) == 0));
    if (param_4 == 0) break;
    if (*(ushort *)(pbVar1 + 0x16) == param_4) {
      return param_2;
    }
  }
  return param_2;
}

