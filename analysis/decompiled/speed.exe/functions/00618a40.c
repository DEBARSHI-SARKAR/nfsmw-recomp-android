/* speed.exe 00618a40 FUN_00618a40; analysis pseudocode, not buildable source.
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e250 FUN_0060e250
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_00618a40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    FUN_00614e00(param_1,param_2);
    FUN_0060e250(param_1,0xffffd8ef);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -8);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *(int **)(param_1 + 8) = piVar3;
      FUN_0060e2e0(param_1);
      FUN_00614e00(param_1,param_2);
      puVar1 = *(undefined4 **)(param_1 + 8);
      *puVar1 = puVar1[-4];
      puVar1[1] = puVar1[-3];
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar2 + 8;
      FUN_0060bf90(param_1,param_1 + 0x40,iVar2 + -8,iVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
    }
  }
  return;
}

