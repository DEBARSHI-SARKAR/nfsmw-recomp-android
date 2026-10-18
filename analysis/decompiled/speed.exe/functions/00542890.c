/* speed.exe 00542890 FUN_00542890; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 004655f0 FUN_004655f0
 * calls 007a1fa0 FUN_007a1fa0
 * calls 00517070 FUN_00517070
 */

void __fastcall FUN_00542890(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fcc3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089e3c4;
  local_4 = 1;
  if (*(char *)(param_1 + 0x13) != '\0') {
    piVar1 = (int *)FUN_007a1fa0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(0x18883f75,0,0,0);
    }
  }
  FUN_00517070();
  *(undefined1 *)(DAT_0091cae0 + 1) = *(undefined1 *)((int)param_1 + 0x4d);
  local_4 = local_4 & 0xffffff00;
  if (param_1[0xc] != 0) {
    FUN_004655f0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  DAT_0091cb1c = 0;
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

