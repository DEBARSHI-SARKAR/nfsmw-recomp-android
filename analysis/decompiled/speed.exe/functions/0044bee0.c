/* speed.exe 0044bee0 FUN_0044bee0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0044bee0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    piVar1 = *(int **)(param_1 + 0x2c);
    while (piVar1 != (int *)(param_1 + 0x2c)) {
      if (*(int *)(param_1 + 0x30) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x30) + -4);
      }
      iVar2 = puVar3[1];
      piVar1 = (int *)puVar3[2];
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      piVar1 = *(int **)(param_1 + 0x2c);
    }
  }
  return;
}

