/* speed.exe 00618970 FUN_00618970; analysis pseudocode, not buildable source.
 * calls 00615970 FUN_00615970
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_00618970(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00615970(param_1,param_2);
  if (iVar2 != 0) {
    FUN_00614e00(param_1,"__index");
    puVar1 = *(undefined4 **)(param_1 + 8);
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 8;
    FUN_0060bf90(param_1,iVar2 + -0x10,iVar2 + -8,iVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  }
  return;
}

