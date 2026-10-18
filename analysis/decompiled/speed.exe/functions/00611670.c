/* speed.exe 00611670 FUN_00611670; analysis pseudocode, not buildable source.
 * calls 005dc750 FUN_005dc750
 * calls 005e8b20 FUN_005e8b20
 * calls 005e2970 FUN_005e2970
 * calls 005dacf0 FUN_005dacf0
 */

void FUN_00611670(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_c = DAT_008a2fb4;
    local_18 = DAT_008a2fb4;
    local_8 = DAT_008a2fb8;
    local_14 = DAT_008a2fb8;
    local_4 = DAT_008a2fbc;
    local_10 = DAT_008a2fbc;
    FUN_005e2970(&local_c);
    FUN_005dacf0(&local_18);
    if (DAT_0092d884 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*DAT_0092d87c;
    }
    uVar1 = (**(code **)(*piVar3 + 4))();
    iVar2 = FUN_005e8b20(uVar1);
    if (iVar2 != 0) {
      FUN_005dc750(&local_c,&local_18);
    }
  }
  return;
}

