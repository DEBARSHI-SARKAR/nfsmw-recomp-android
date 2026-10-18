/* speed.exe 004548c0 FUN_004548c0; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 */

undefined4 * __thiscall FUN_004548c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0090dcd0;
  param_1[1] = param_2;
  param_2 = param_2 * 8;
  DAT_0090dcd4 = DAT_0090dcd4 + param_2;
  *param_1 = 0;
  param_1[2] = 0;
  if (uVar1 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (param_2 != 0) {
    uVar2 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(param_2,0);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

