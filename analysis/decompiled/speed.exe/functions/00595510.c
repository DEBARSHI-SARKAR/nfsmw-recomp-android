/* speed.exe 00595510 FUN_00595510; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005951e0 FUN_005951e0
 */

undefined4 * __thiscall
FUN_00595510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  FUN_005951e0(param_2,param_3,param_4,0);
  *param_1 = &PTR_FUN_008a1ac0;
  param_1[0x15] = param_5;
  uVar1 = FUN_007c4b80();
  param_1[0x16] = uVar1;
  param_1[0x17] = param_7;
  return param_1;
}

