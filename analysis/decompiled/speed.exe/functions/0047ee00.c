/* speed.exe 0047ee00 FUN_0047ee00; analysis pseudocode, not buildable source.
 * calls 0047b300 FUN_0047b300
 */

void __thiscall FUN_0047ee00(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc;
  *param_3 = *(undefined4 *)(iVar1 + 0x34);
  param_3[1] = *(undefined4 *)(iVar1 + 0x38);
  param_3[2] = *(undefined4 *)(param_1 + (param_2 * 3 + 0xf) * 4);
  if (DAT_009110a0 != '\0') {
    param_3[1] = -(float)param_3[1];
  }
  if (*(char *)(param_1 + 5) == '\x03') {
    FUN_0047b300(param_3);
  }
  return;
}

