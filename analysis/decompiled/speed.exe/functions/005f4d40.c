/* speed.exe 005f4d40 FUN_005f4d40; analysis pseudocode, not buildable source.
 * calls 005ee250 FUN_005ee250
 * calls 005d0370 FUN_005d0370
 * calls 005e2580 FUN_005e2580
 * calls 0045a430 FUN_0045a430
 * calls 005e6490 FUN_005e6490
 * calls 005f48e0 FUN_005f48e0
 */

void __fastcall FUN_005f4d40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_2c [4];
  int *local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875ae0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xa4) != 0) {
    ExceptionList = &local_c;
    FUN_005e2580(0x1d975142,0,0);
    local_4 = 0;
    local_28 = (int *)FUN_005e6490();
    local_24 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005f48e0(local_20,local_2c,0xa3d34781);
    iVar3 = *(int *)(param_1 + 0xa8);
    piVar2 = (int *)*local_28;
    if (piVar2 != local_28) {
      do {
        *(int *)(iVar3 + 4) = piVar2[2];
        FUN_005ee250();
        piVar2 = (int *)*piVar2;
        iVar3 = iVar3 + 0x14;
      } while (piVar2 != local_28);
    }
    piVar2 = (int *)*local_28;
    *local_28 = (int)local_28;
    local_28[1] = (int)local_28;
    local_4 = local_4 & 0xffffff00;
    local_24 = 0;
    if (piVar2 != local_28) {
      do {
        piVar1 = (int *)*piVar2;
        FUN_005d0370(piVar2,0xc,0);
        piVar2 = piVar1;
      } while (piVar1 != local_28);
    }
    if (local_28 != (int *)0x0) {
      FUN_005d0370(local_28,0xc,0);
    }
    local_28 = (int *)0x0;
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return;
}

