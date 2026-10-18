/* speed.exe 00660100 FUN_00660100; analysis pseudocode, not buildable source.
 * calls 0065ffd0 FUN_0065ffd0
 */

undefined4 FUN_00660100(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_009258d4 == 0) {
    return 0;
  }
  uVar1 = FUN_0065ffd0(param_1,param_2);
  if ((DAT_009258dc[4] <= *DAT_009258dc) && (DAT_009258d4 != 0)) {
    DAT_009258dc = (int *)0x0;
    DAT_009258d4 = 0;
  }
  return uVar1;
}

