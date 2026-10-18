/* speed.exe 007ae520 FUN_007ae520; analysis pseudocode, not buildable source.
 * calls 007ada50 FUN_007ada50
 * calls 007ae350 FUN_007ae350
 */

void __thiscall FUN_007ae520(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[1];
    piVar1 = (int *)(param_1 + 0x2c);
    if (piVar3 == piVar1) {
      piVar3 = *(int **)(param_1 + 0x30);
    }
    if (((param_2 != -1) && (param_2 == 1)) && (piVar3 = (int *)*piVar2, piVar3 == piVar1)) {
      piVar3 = (int *)*piVar1;
    }
    if (piVar3 != piVar2) {
      FUN_007ae350(piVar3,*(undefined4 *)(param_1 + 0x1a8));
      FUN_007ada50();
    }
  }
  return;
}

