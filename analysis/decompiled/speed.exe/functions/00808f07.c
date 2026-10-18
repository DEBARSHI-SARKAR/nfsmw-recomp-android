/* speed.exe 00808f07 FUN_00808f07; analysis pseudocode, not buildable source.
 */

void FUN_00808f07(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x3c) + 0x400U & 0xffffffe0);
  piVar1[1] = param_2 * 0x10001;
  *piVar1 = param_2 * 0x10001;
  piVar1[3] = 0x10001;
  piVar1[2] = 0x10001;
  piVar1[5] = 0x40004;
  piVar1[4] = 0x40004;
  return;
}

