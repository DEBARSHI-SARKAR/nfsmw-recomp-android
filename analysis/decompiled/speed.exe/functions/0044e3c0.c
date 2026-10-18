/* speed.exe 0044e3c0 FUN_0044e3c0; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00652ad0 _malloc
 * calls 0044d1b0 FUN_0044d1b0
 */

/* WARNING: Removing unreachable block (ram,0x0044e40b) */

void __fastcall FUN_0044e3c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869b64;
  local_c = ExceptionList;
  if ((((DAT_0090d9ec == '\0') && (DAT_009260d8 == 0)) &&
      (ExceptionList = &local_c, iVar1 = FUN_0045d3a0(0), *(int *)(param_1 + 0xc) == 0)) &&
     (0 < iVar1)) {
    pvVar2 = _malloc(0x18);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0044d1b0();
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ExceptionList = local_c;
  return;
}

