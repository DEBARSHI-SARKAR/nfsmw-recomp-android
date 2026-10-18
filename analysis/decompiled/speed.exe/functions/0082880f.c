/* speed.exe 0082880f FUN_0082880f; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0082880f(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xd5c);
  uVar2 = *(undefined4 *)(param_1 + 0xd44);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

