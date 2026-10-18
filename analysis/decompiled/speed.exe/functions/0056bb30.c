/* speed.exe 0056bb30 FUN_0056bb30; analysis pseudocode, not buildable source.
 */

void FUN_0056bb30(undefined1 *param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (short *)0x0)) {
    sVar1 = *param_3;
    uVar2 = 0;
    if (sVar1 != 0) {
      do {
        if (param_2 - 1U <= uVar2) break;
        if ((-1 < sVar1) && (sVar1 < 0x100)) {
          *param_1 = (char)*param_3;
          param_1 = param_1 + 1;
          uVar2 = uVar2 + 1;
        }
        param_3 = param_3 + 1;
        sVar1 = *param_3;
      } while (sVar1 != 0);
    }
    *param_1 = 0;
  }
  return;
}

