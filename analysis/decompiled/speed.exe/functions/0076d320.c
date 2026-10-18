/* speed.exe 0076d320 FUN_0076d320; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0076d320(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4c) + -4);
  }
  while( true ) {
    puVar3 = puVar4;
    if (param_1 == -0x4c) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0x48);
    }
    if (puVar3 == puVar4) break;
    if (puVar3[1] == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(puVar3[1] + -4);
    }
    if (param_2 == puVar3[0xb]) {
      iVar1 = puVar3[1];
      piVar2 = (int *)puVar3[2];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}

