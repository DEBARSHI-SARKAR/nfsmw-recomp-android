/* speed.exe 004255a0 FUN_004255a0; analysis pseudocode, not buildable source.
 * calls 0041dbe0 FUN_0041dbe0
 */

undefined4 FUN_004255a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041dbe0(param_1,(&DAT_0092cd1c)[param_2 * 0x18],
               (&DAT_0092cd1c)[param_2 * 0x18] + (&DAT_0092cd24)[param_2 * 0x18] * 4,param_3,param_4
              );
  return param_1;
}

