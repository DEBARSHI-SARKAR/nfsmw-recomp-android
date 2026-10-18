/* speed.exe 0044bf30 FUN_0044bf30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0044bf30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + -4);
    }
    while( true ) {
      if (param_1 == -0x2c) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(param_1 + 0x28);
      }
      if (puVar4 == puVar3) break;
      if (puVar4[3] == param_2) {
        iVar1 = puVar4[1];
        piVar2 = (int *)puVar4[2];
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
                    /* WARNING: Could not recover jumptable at 0x0044bf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)();
        return;
      }
      if (puVar4[1] == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(puVar4[1] + -4);
      }
    }
  }
  return;
}

