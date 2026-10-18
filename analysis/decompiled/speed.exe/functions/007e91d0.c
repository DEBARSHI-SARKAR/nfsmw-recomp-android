/* speed.exe 007e91d0 FUN_007e91d0; analysis pseudocode, not buildable source.
 * calls 007e94c0 FUN_007e94c0
 * calls 007e8ca0 FUN_007e8ca0
 * calls 007e94f0 FUN_007e94f0
 */

undefined4 __thiscall FUN_007e91d0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar1 = (uint *)0x0;
  while( true ) {
    if (param_1 == (uint *)0x0) {
      return 0;
    }
    iVar2 = FUN_007e8ca0();
    if (param_2 == iVar2) break;
    if (param_1[1] == 0) {
      return 0;
    }
    puVar1 = param_1;
    param_1 = (uint *)((int)param_1 + param_1[1]);
  }
  if (puVar1 == (uint *)0x0) {
    *(undefined1 *)param_1 = 0x81;
    if ((*param_1 & 0x800) != 0) {
      if (param_1[2] == 0) {
        FUN_007e94c0(0);
        return 1;
      }
      FUN_007e94c0((undefined1 *)(param_1[2] + (int)param_1));
    }
    return 1;
  }
  if ((param_1[1] != 0) &&
     (puVar3 = (undefined1 *)(param_1[1] + (int)param_1), puVar3 != (undefined1 *)0x0)) {
    puVar1[1] = (int)puVar3 - (int)puVar1;
    FUN_007e94f0(param_1);
    return 1;
  }
  puVar1[1] = 0;
  FUN_007e94f0(param_1);
  return 1;
}

