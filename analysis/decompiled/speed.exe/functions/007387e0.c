/* speed.exe 007387e0 FUN_007387e0; analysis pseudocode, not buildable source.
 * calls 006da9b0 FUN_006da9b0
 */

void FUN_007387e0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_2 != (uint *)0x0) {
    if ((*param_2 & 0xfffffffc) == 0) {
      FUN_006da9b0(&DAT_009b0bd8,param_3,param_4,param_5,0);
      return;
    }
    FUN_006da9b0(*param_2 & 0xfffffffc,param_3,param_4,param_5,0);
  }
  return;
}

