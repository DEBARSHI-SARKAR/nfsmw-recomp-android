/* speed.exe 0083493f FUN_0083493f; analysis pseudocode, not buildable source.
 * calls 00831c8b FUN_00831c8b
 * calls 00831a4a FUN_00831a4a
 * calls 0083196b FUN_0083196b
 */

void FUN_0083493f(ushort *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8;
  
  iVar3 = (int)param_1;
  if (((param_1 != (ushort *)0x0) && (*(int *)((int)param_1 + 4) != 0)) &&
     (*(char *)((int)param_1 + 0xb) == '\0')) {
    uVar2 = *(ushort *)((int)param_1 + 0x10);
    local_8 = 0;
    iVar4 = *(int *)((int)param_1 + 4) + (int)param_1;
    if (uVar2 != 0) {
      param_1 = (ushort *)((int)param_1 + 0x18);
      iVar6 = iVar4 + 8;
      do {
        piVar1 = (int *)(iVar6 + -8);
        *piVar1 = *piVar1 + (uint)uVar2 * 0x20 + iVar4;
        FUN_0083196b(piVar1);
        *(code **)(iVar6 + 0x10) = FUN_008348da;
        uVar5 = FUN_00831c8b(*(undefined1 *)(iVar3 + 8),*(undefined1 *)(iVar3 + 9),
                             *(undefined2 *)(iVar3 + (uint)*param_1 * 4));
        *(undefined4 *)(iVar6 + 0x14) = uVar5;
        FUN_00831a4a(iVar6,iVar6 + 8);
        param_1 = param_1 + 1;
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x20;
      } while (local_8 < (int)(uint)*(ushort *)(iVar3 + 0x10));
    }
    *(undefined1 *)(iVar3 + 0xb) = 1;
  }
  return;
}

