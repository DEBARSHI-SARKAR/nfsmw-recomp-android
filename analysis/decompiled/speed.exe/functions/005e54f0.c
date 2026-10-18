/* speed.exe 005e54f0 FUN_005e54f0; analysis pseudocode, not buildable source.
 * calls 005e2580 FUN_005e2580
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005e54f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008751f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(*(undefined4 *)(param_1 + 4),0,0);
  local_4 = 0;
  if (local_1c != 0) {
    piVar2 = (int *)FUN_00454810(0x8e1904c7,0);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_006269b0(4);
    }
    iVar1 = *piVar2;
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return (float10)iVar1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return (float10)_DAT_00890968;
}

