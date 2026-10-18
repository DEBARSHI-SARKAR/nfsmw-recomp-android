/* speed.exe 004a07e0 FUN_004a07e0; analysis pseudocode, not buildable source.
 * calls 004a06b0 FUN_004a06b0
 * calls 0048d4d0 FUN_0048d4d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004a07e0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_2 [2];
  
  puVar1 = (undefined2 *)FUN_0048d4d0(local_2);
  switch(*puVar1) {
  case 0xf:
    break;
  default:
    return (int *)0x0;
  case 0x16:
    (**(code **)(*(int *)(param_1 + -0x18) + 0x40))(param_1);
    return (int *)(param_1 + -0x18);
  case 0x17:
    (**(code **)(*(int *)(param_1 + -0x18) + 0x40))(param_1);
    return (int *)(param_1 + -0x18);
  case 0x19:
    (**(code **)(*(int *)(param_1 + -0x10) + 0x40))(param_1);
    return (int *)(param_1 + -0x10);
  }
  iVar2 = (**(code **)(*DAT_009117f4 + 0x1c))(0xf);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004a06b0();
    (**(code **)(*piVar3 + 0x40))(param_1);
    return piVar3;
  }
  (**(code **)(_DAT_00000000 + 0x40))(param_1);
  return (int *)0x0;
}

