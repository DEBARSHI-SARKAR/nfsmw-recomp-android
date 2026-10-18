/* speed.exe 007042d0 FUN_007042d0; analysis pseudocode, not buildable source.
 * calls 004b1ce0 FUN_004b1ce0
 * calls 004ccab0 FUN_004ccab0
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 */

undefined4 FUN_007042d0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f9c8;
  local_c = ExceptionList;
  uVar4 = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_004cb270(*(undefined4 *)(param_1 + 8));
  FUN_004b8880(uVar1,uVar3,uVar4);
  local_4 = 0;
  pcVar2 = (char *)FUN_00454810(0xaecbb4ad,0);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_006269b0(1);
  }
  if ((*pcVar2 != '\0') && ((*(byte *)(param_1 + 0x3e) & 2) == 0)) {
    FUN_004ccab0();
    FUN_004b1ce0(param_1);
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

