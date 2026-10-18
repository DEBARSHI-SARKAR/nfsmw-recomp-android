/* speed.exe 00614f10 FUN_00614f10; analysis pseudocode, not buildable source.
 * calls 00613f40 FUN_00613f40
 */

int FUN_00614f10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00613f40(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar1[1] = iVar2;
  *puVar1 = 7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return iVar2 + 0x10;
}

