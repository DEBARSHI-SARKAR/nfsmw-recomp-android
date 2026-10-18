/* speed.exe 005e1970 FUN_005e1970; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e1970(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x24);
  *param_1 = iVar1;
  if (iVar1 != DAT_0091dfe4) {
    do {
      if ((param_1[1] & (uint)*(ushort *)(*param_1 + 0x18)) != 0) {
        return;
      }
      iVar1 = *(int *)(*param_1 + 0x24);
      *param_1 = iVar1;
    } while (iVar1 != DAT_0091dfe4);
  }
  *param_1 = 0;
  return;
}

