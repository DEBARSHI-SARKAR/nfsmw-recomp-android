/* speed.exe 006dd9d0 FUN_006dd9d0; analysis pseudocode, not buildable source.
 */

void FUN_006dd9d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 3;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        *puVar1 = param_3[3];
        puVar1[1] = param_3[4];
        puVar1[2] = param_3[5];
      }
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

