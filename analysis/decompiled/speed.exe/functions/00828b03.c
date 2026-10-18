/* speed.exe 00828b03 FUN_00828b03; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00828b03(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 8) != 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 8) = param_4;
    *(int *)(param_1 + 0xa0) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}

