/* speed.exe 005afd60 FUN_005afd60; analysis pseudocode, not buildable source.
 */

ushort __fastcall FUN_005afd60(ushort *param_1,undefined1 *param_2)

{
  ushort uVar1;
  ushort in_AX;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (undefined1 *)0x0)) {
    in_AX = *param_1;
    while( true ) {
      if (in_AX == 0) {
        *param_2 = 0;
        return 1;
      }
      if (((short)in_AX < -0x80) || (0x7f < (short)in_AX)) break;
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = (char)uVar1;
      in_AX = *param_1;
      param_2 = param_2 + 1;
    }
  }
  return in_AX & 0xff00;
}

