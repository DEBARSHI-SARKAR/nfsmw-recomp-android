/* speed.exe 005e16c0 FUN_005e16c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e16c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x24);
  *param_1 = iVar1;
  if (iVar1 != DAT_0091dff4) {
    do {
      if ((param_1[1] & (uint)*(ushort *)(*param_1 + 0x18)) != 0) {
        return;
      }
      iVar1 = *(int *)(*param_1 + 0x24);
      *param_1 = iVar1;
    } while (iVar1 != DAT_0091dff4);
  }
  *param_1 = 0;
  return;
}

