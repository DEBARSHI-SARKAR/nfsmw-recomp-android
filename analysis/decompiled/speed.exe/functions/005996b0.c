/* speed.exe 005996b0 FUN_005996b0; analysis pseudocode, not buildable source.
 * calls 005910e0 FUN_005910e0
 */

void __thiscall FUN_005996b0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  if ((((uVar1 >> 2 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) && ((uVar1 >> 3 & 1) == 0)) {
    FUN_005910e0(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8),param_2,param_3);
    return;
  }
  FUN_005910e0(*(undefined4 *)(param_1 + 0x2c + (param_2 + *(int *)(param_1 + 0x18) * 6) * 4),
               param_2,param_3);
  return;
}

