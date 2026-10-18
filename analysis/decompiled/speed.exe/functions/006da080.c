/* speed.exe 006da080 FUN_006da080; analysis pseudocode, not buildable source.
 */

void FUN_006da080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 3;
    puVar2 = param_1 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_3[2] = param_1[2];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
      }
      param_1 = param_1 + 6;
      param_3 = param_3 + 6;
      puVar1 = puVar1 + 6;
      puVar2 = puVar2 + 6;
    } while (param_1 != param_2);
  }
  return;
}

