/* speed.exe 00844150 FUN_00844150; analysis pseudocode, not buildable source.
 * calls 00842690 FUN_00842690
 * calls 00843290 FUN_00843290
 * calls 0084bcb0 GetTickCount
 * calls 008421c0 FUN_008421c0
 */

undefined4 FUN_00844150(undefined4 *param_1)

{
  undefined1 *puVar1;
  DWORD DVar2;
  
  FUN_00843290(param_1);
  if (param_1[0x48f] == 4) {
    puVar1 = (undefined1 *)FUN_008421c0(param_1,*param_1,"$last");
    param_1[0x48a] = puVar1;
    *puVar1 = 10;
    FUN_00842690(param_1,"SUCCESS-GOTO",&DAT_00890978,"DEFAULT-GOTO");
    param_1[0x48a] = 0;
    param_1[0x48f] = 0;
  }
  if (param_1[0x48f] == 5) {
    FUN_00842690(param_1,"FAILURE-GOTO",&DAT_00890978,"DEFAULT-GOTO");
    param_1[0x48f] = 0;
  }
  if (param_1[0x48f] != 0) {
    DVar2 = GetTickCount();
    if ((uint)param_1[0x48d] < DVar2) {
      FUN_00842690(param_1,"TIMEOUT-GOTO","FAILURE-GOTO","DEFAULT-GOTO");
      param_1[0x48f] = 0;
    }
    if (param_1[0x48f] != 0) {
      return 0;
    }
  }
  DVar2 = GetTickCount();
  if (DVar2 <= (uint)param_1[0x48e]) {
    return 0;
  }
  if (((char *)param_1[0x484] != (char *)0x0) && (*(char *)param_1[0x484] != '\0')) {
    return 1;
  }
  if (*(char *)(param_1 + 2) == '\0') {
    return 0xffffffff;
  }
  return 1;
}

