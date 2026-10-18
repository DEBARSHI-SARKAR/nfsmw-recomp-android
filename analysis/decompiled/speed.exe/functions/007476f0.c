/* speed.exe 007476f0 FUN_007476f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007476f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x10);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x1c) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = param_1 + 0x18;
  *(int *)(param_2 + 0xf0) = param_1;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  return;
}

