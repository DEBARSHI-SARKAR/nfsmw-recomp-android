/* speed.exe 00634130 FUN_00634130; analysis pseudocode, not buildable source.
 * calls 00633f40 FUN_00633f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00634130(int *param_1,char param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_0091f170;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1[1] == 0) {
    DAT_0091f1cc = 0;
  }
  else {
    DAT_0091f1cc = (**(code **)(*(int *)*param_1 + 0x20))((int)param_1 - ((int *)*param_1)[9] >> 6);
  }
  _DAT_0091f1d0 = param_1[8];
  DAT_0091f1c8 = *(undefined4 *)(*param_1 + 8);
  if ((*(int **)(*param_1 + 0x20) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(*param_1 + 0x20) + 4))(param_1,&DAT_0091f170), cVar1 == '\0'))
  {
    return;
  }
  if ((param_4 != (int *)0x0) &&
     (cVar1 = (**(code **)(*param_4 + 4))(param_1,&DAT_0091f170), cVar1 == '\0')) {
    return;
  }
  iVar2 = param_1[3];
  FUN_00633f40(*(undefined4 *)
                (iVar2 + 0x10 + (*(int *)(iVar2 + 8) + *(uint *)(iVar2 + 4)) * 4 +
                ((*(uint *)(iVar2 + 4) & (param_2 != '\0') - 1) + param_3) * 4),
               *(char *)(*param_1 + 0x2c) != '\0');
  return;
}

