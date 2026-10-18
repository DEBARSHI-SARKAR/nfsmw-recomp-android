/* speed.exe 0056ed10 FUN_0056ed10; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_0056ed10(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*param_1 == -1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 5;
  } while ((int)uVar1 < 200);
  return uVar1 & 0xffffff00;
}

