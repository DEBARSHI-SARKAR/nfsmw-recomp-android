/* speed.exe 00806ffe FUN_00806ffe; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00806ffe(int param_1)

{
  undefined1 *puVar1;
  int *in_EAX;
  uint uVar2;
  
  in_EAX[1] = in_EAX[1] & *(uint *)(&DAT_008c4d90 + *in_EAX * 4);
  param_1 = param_1 - *in_EAX;
  uVar2 = 0;
  if (0 < param_1) {
    uVar2 = in_EAX[1] << ((byte)param_1 & 0x1f);
    puVar1 = (undefined1 *)in_EAX[2];
    in_EAX[1] = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
    in_EAX[2] = (int)(puVar1 + 4);
    param_1 = param_1 + -0x20;
  }
  *in_EAX = -param_1;
  return (uint)in_EAX[1] >> ((byte)-param_1 & 0x1f) | uVar2;
}

