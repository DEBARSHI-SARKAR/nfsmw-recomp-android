/* speed.exe 0059bd30 FUN_0059bd30; analysis pseudocode, not buildable source.
 * calls 00593250 FUN_00593250
 */

void __thiscall FUN_0059bd30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x14) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00593250(param_2,0);
  }
  return;
}

