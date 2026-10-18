/* speed.exe 007faaee FUN_007faaee; analysis pseudocode, not buildable source.
 */

uint FUN_007faaee(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)("mDAMeDAMkDAM" + uVar1) == param_1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  return uVar1 & 0xffffff00;
}

