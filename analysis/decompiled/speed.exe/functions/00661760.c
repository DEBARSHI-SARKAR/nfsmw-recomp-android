/* speed.exe 00661760 FUN_00661760; analysis pseudocode, not buildable source.
 * calls 0065fd30 FUN_0065fd30
 * calls 006616f0 FUN_006616f0
 */

undefined4
FUN_00661760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0065fd30(param_1,param_2,param_3,param_6,param_7);
  FUN_006616f0(param_4,param_5);
  return uVar1;
}

