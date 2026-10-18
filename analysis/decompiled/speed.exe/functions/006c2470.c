/* speed.exe 006c2470 FUN_006c2470; analysis pseudocode, not buildable source.
 */

void FUN_006c2470(int param_1)

{
  uint uVar1;
  
  if (DAT_00982c24 != 0) {
    uVar1 = DAT_00982c20 + param_1;
    if ((int)DAT_00982c1c <= (int)(DAT_00982c20 + param_1)) {
      uVar1 = DAT_00982c1c;
    }
    DAT_00982c20 = uVar1 & ((int)uVar1 < 1) - 1;
  }
  return;
}

