/* speed.exe 00591160 FUN_00591160; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00581790 FUN_00581790
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00460d20 FUN_00460d20
 */

undefined4 __fastcall FUN_00591160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_98;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087295b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00581790();
  iVar2 = FUN_00460d20(uVar1,&DAT_00890978);
  if (iVar2 != 0) {
    FUN_0051e1a0(*(undefined4 *)(param_1 + 4),0,0);
    local_4 = 0;
    FUN_00515e20(local_8c,0x80,"CARNAME_%s_%s",uVar1,*(undefined4 *)(local_98 + 0x18));
    uVar1 = FUN_005af1c0(local_8c);
    iVar2 = FUN_0056bb80();
    local_4 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_0045a430();
      ExceptionList = local_c;
      return uVar1;
    }
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return 0x9bb9ccc3;
}

