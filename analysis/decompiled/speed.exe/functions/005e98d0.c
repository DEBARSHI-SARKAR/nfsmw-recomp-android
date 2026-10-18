/* speed.exe 005e98d0 FUN_005e98d0; analysis pseudocode, not buildable source.
 * calls 005e3980 FUN_005e3980
 */

int FUN_005e98d0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_1 + 1;
  for (iVar3 = *param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar1 = *(ushort *)((int)piVar4 + 2);
    iVar2 = FUN_005e3980((short)*piVar4);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x18) = piVar4[1];
    }
    piVar4 = (int *)((int)(piVar4 + 1) + (uint)uVar1);
  }
  return (int)piVar4 - (int)param_1;
}

