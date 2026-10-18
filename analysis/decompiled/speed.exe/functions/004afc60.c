/* speed.exe 004afc60 FUN_004afc60; analysis pseudocode, not buildable source.
 * calls 004d5c70 FUN_004d5c70
 */

undefined4 __thiscall FUN_004afc60(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 == 5) {
    *(undefined1 *)(param_1 + 0x128) = 1;
    *(uint *)(param_1 + 300) = param_3 >> 8;
  }
  else if (param_2 == 6) {
    *(uint *)(param_1 + 0x134) = param_3;
    *(undefined1 *)(param_1 + 0x130) = 1;
    uVar1 = FUN_004d5c70(6,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_004d5c70(param_2,param_3,param_4);
  return uVar1;
}

