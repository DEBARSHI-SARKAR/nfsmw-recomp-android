/* speed.exe 00644350 FUN_00644350; analysis pseudocode, not buildable source.
 * calls 00633f40 FUN_00633f40
 * calls 0063ff80 FUN_0063ff80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00644350(int *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_4;
  
  iVar2 = param_1[3];
  local_4 = param_2;
  iVar6 = iVar2 + 0x10 + *(int *)(iVar2 + 4) * 4;
  uVar5 = iVar6 + *(int *)(iVar2 + 8) * 4;
  uVar4 = FUN_0063ff80(iVar6,uVar5,&local_4,0);
  if (uVar4 < uVar5) {
    uVar5 = (int)(uVar4 - iVar6) >> 2;
  }
  else {
    uVar5 = 0xffffffff;
  }
  iVar6 = param_1[3];
  local_4 = (float)(iVar6 + 0x10 + *(int *)(iVar6 + 4) * 4);
  if (uVar5 < *(uint *)(iVar6 + 8)) {
    if (*(float *)((int)local_4 + uVar5 * 4) == param_2) {
      uVar5 = uVar5 + 1;
    }
    if (uVar5 < *(uint *)(iVar2 + 8)) {
      do {
        fVar1 = *(float *)((int)local_4 + uVar5 * 4);
        if (fVar1 < param_3 == (fVar1 == param_3)) {
          return;
        }
        puVar7 = &DAT_0091f170;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        if (param_1[1] == 0) {
          DAT_0091f1cc = 0;
        }
        else {
          DAT_0091f1cc = (**(code **)(*(int *)*param_1 + 0x20))
                                   ((int)param_1 - ((int *)*param_1)[9] >> 6);
        }
        _DAT_0091f1d0 = param_1[8];
        DAT_0091f1c8 = *(undefined4 *)(*param_1 + 8);
        if ((*(int **)(*param_1 + 0x20) == (int *)0x0) ||
           (cVar3 = (**(code **)(**(int **)(*param_1 + 0x20) + 4))(param_1,&DAT_0091f170),
           cVar3 != '\0')) {
          iVar6 = param_1[3];
          FUN_00633f40(*(undefined4 *)
                        (iVar6 + 0x10 +
                        (*(int *)(iVar6 + 8) + *(int *)(iVar6 + 4) + *(int *)(iVar6 + 4) + uVar5) *
                        4),*(char *)(*param_1 + 0x2c) != '\0');
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1[3] + 8));
    }
  }
  return;
}

