/* speed.exe 008066bb FUN_008066bb; analysis pseudocode, not buildable source.
 * calls 00816752 FUN_00816752
 */

void FUN_008066bb(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = FUN_00816752();
  if (iVar1 != 0) {
    iVar2 = 0xc;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&UNK_00806730)[iVar2]) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
    *param_1 = 1;
    break;
  case 2:
    *param_1 = 1;
    *param_2 = 1;
    *param_3 = 0;
    return;
  case 3:
    *param_1 = 1;
    *param_2 = 1;
    *param_3 = 1;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

