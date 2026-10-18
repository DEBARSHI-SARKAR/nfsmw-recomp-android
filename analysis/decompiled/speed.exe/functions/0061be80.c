/* speed.exe 0061be80 FUN_0061be80; analysis pseudocode, not buildable source.
 * calls 00619180 FUN_00619180
 * calls 006040f0 FUN_006040f0
 * calls 00615aa0 FUN_00615aa0
 */

undefined4 FUN_0061be80(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00615aa0(param_1,1,"GRuntimeInstance");
  iVar4 = FUN_00615aa0(param_1,2,"GRuntimeInstance");
  if (iVar3 == 0) {
    FUN_00619180(param_1,1,"GRuntimeInstance expected");
  }
  if (iVar4 == 0) {
    FUN_00619180(param_1,2,"GRuntimeInstance expected");
  }
  cVar2 = FUN_006040f0();
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 1;
  puVar1[1] = (uint)(cVar2 != '\0');
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

