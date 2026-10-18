/* speed.exe 00605950 FUN_00605950; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00605950(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  
  if (-10000 < param_2) {
    return *(int *)(in_EAX + 8) + param_2 * 8;
  }
  if (param_2 == -0x2711) {
    return in_EAX + 0x40;
  }
  if (param_2 == -10000) {
    return *(int *)(in_EAX + 0x10) + 0x2c;
  }
  iVar1 = *(int *)(*(int *)(in_EAX + 0xc) + -4);
  if (-0x2711 - param_2 <= (int)(uint)*(byte *)(iVar1 + 7)) {
    return iVar1 + 8 + (-0x2711 - param_2) * 8;
  }
  return 0;
}

