/* speed.exe 00642d70 FUN_00642d70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00642d70(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  iVar1 = param_1[0x9c];
  if ((iVar1 != 0) && (piVar2 = (int *)**(int **)(iVar1 + 4), piVar2 != *(int **)(iVar1 + 4))) {
    do {
      piVar2[7] = -0x40800000;
      piVar2[8] = -0x40800000;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(iVar1 + 4));
  }
  return;
}

