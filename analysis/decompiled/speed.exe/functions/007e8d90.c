/* speed.exe 007e8d90 FUN_007e8d90; analysis pseudocode, not buildable source.
 * calls 007e94c0 FUN_007e94c0
 * calls 007e8ca0 FUN_007e8ca0
 * calls 007e94f0 FUN_007e94f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007e8d90(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  
  iVar1 = FUN_007e8ca0();
  puVar4 = (uint *)0x0;
  for (; param_1 != (uint *)0x0; param_1 = (uint *)((int)param_1 + param_1[1])) {
    iVar2 = FUN_007e8ca0();
    if (iVar1 == iVar2) {
      if (puVar4 != (uint *)0x0) {
        if (param_2 == 0) {
          puVar4[1] = 0;
        }
        else {
          puVar4[1] = param_2 - (int)puVar4;
        }
        if ((param_1[1] != 0) &&
           (puVar3 = (undefined1 *)(param_1[1] + (int)param_1), puVar3 != (undefined1 *)0x0)) {
          *(int *)(param_2 + 4) = (int)puVar3 - param_2;
          FUN_007e94f0(param_1);
          return 1;
        }
        *(undefined4 *)(param_2 + 4) = 0;
        FUN_007e94f0(param_1);
        return 1;
      }
      if ((param_1[1] == 0) ||
         (puVar3 = (undefined1 *)(param_1[1] + (int)param_1), puVar3 == (undefined1 *)0x0)) {
        *(undefined4 *)(param_2 + 4) = 0;
      }
      else {
        *(int *)(param_2 + 4) = (int)puVar3 - param_2;
      }
      *(undefined1 *)param_1 = 0x81;
      param_1[1] = param_2 - (int)param_1;
      if ((*param_1 & 0x800) == 0) {
        return 1;
      }
      if (param_1[2] == 0) {
        FUN_007e94c0(0);
        return 1;
      }
      FUN_007e94c0((undefined1 *)(param_1[2] + (int)param_1));
      return 1;
    }
    puVar4 = param_1;
    if (param_1[1] == 0) break;
  }
  if (param_2 != 0) {
    puVar4[1] = param_2 - (int)puVar4;
    *(undefined4 *)(param_2 + 4) = 0;
    return 1;
  }
  puVar4[1] = 0;
  _DAT_00000004 = 0;
  return 1;
}

