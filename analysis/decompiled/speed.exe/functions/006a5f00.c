/* speed.exe 006a5f00 FUN_006a5f00; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 004546c0 FUN_004546c0
 * calls 0045beb0 FUN_0045beb0
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00454c30 FUN_00454c30
 * calls 00452bd0 FUN_00452bd0
 */

/* WARNING: Removing unreachable block (ram,0x006a5f8f) */

undefined4 FUN_006a5f00(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined1 auStack_1c [12];
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087cce0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (*(int *)(iVar1 + 4) == 0) {
    ExceptionList = pvStack_c;
    return 0xeec2271a;
  }
  FUN_004546c0(auStack_1c,DAT_0093869c);
  uStack_24 = 0;
  uStack_4 = 1;
  if (iStack_10 == 0) {
    iStack_10 = FUN_00454c30(param_2);
LAB_006a5fcc:
    if (iStack_10 != 0) {
      FUN_0045beb0(iStack_10);
      goto LAB_006a5f85;
    }
  }
  else if (param_2 == 0) goto LAB_006a5fcc;
  uStack_24 = FUN_00452430();
LAB_006a5f85:
  uStack_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = pvStack_c;
  return uStack_24;
}

