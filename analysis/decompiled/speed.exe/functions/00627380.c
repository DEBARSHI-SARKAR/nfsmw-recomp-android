/* speed.exe 00627380 FUN_00627380; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00627380(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      param_1 = param_1 + 4;
      if (param_2 == *param_1) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = param_1;
        }
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

