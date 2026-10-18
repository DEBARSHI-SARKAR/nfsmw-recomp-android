/* speed.exe 006ff8e0 FUN_006ff8e0; analysis pseudocode, not buildable source.
 * calls 004cf520 FUN_004cf520
 * calls 004ba760 FUN_004ba760
 * calls 004b0cc0 FUN_004b0cc0
 * calls 0045da30 FUN_0045da30
 * calls 004b0c50 FUN_004b0c50
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ff8e0(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f8eb;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x98) == 0)) &&
     ((*(uint *)(param_1 + 0x28) >> 10 & 1) != 0)) {
    if (param_2 == '\0') {
      ExceptionList = &local_c;
      iVar1 = FUN_0045da30(6);
      iVar1 = iVar1 + 4;
    }
    else {
      ExceptionList = &local_c;
      fVar3 = (float10)FUN_0045da70(0x3f800000);
      if (fVar3 <= (float10)_DAT_008b1d84) {
        iVar1 = FUN_0045da30(0xf);
        iVar1 = iVar1 + 7;
      }
      else {
        iVar1 = FUN_0045da30(4);
      }
    }
    uVar2 = FUN_004ba760(2,iVar1);
    iVar1 = FUN_004b0cc0(0x6c);
    local_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004b0c50(uVar2);
    }
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    local_4 = 0xffffffff;
    FUN_004cf520(param_1 + 0x9c);
  }
  ExceptionList = local_c;
  return;
}

