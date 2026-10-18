/* speed.exe 005e9d60 FUN_005e9d60; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005e9d60(int param_1,uint param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(*(int *)(param_1 + 0xb0) + -0x14);
  while (pbVar2 = pbVar3 + 0x14,
        pbVar2 < (byte *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac) * 0x14)) {
    if ((param_2 == 0) || (puVar1 = (ushort *)(pbVar3 + 0x16), pbVar3 = pbVar2, *puVar1 == param_2))
    goto joined_r0x005e9d99;
  }
  pbVar2 = (byte *)0x0;
joined_r0x005e9d99:
  do {
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    *pbVar2 = *pbVar2 | 3;
    pbVar3 = pbVar2;
    do {
      pbVar2 = pbVar3 + 0x14;
      if ((byte *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac) * 0x14) <= pbVar2) {
        return;
      }
    } while ((param_2 != 0) &&
            (puVar1 = (ushort *)(pbVar3 + 0x16), pbVar3 = pbVar2, *puVar1 != param_2));
  } while( true );
}

