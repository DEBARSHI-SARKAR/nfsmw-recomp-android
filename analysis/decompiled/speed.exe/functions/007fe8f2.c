/* speed.exe 007fe8f2 FUN_007fe8f2; analysis pseudocode, not buildable source.
 */

void FUN_007fe8f2(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_3 = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return;
}

