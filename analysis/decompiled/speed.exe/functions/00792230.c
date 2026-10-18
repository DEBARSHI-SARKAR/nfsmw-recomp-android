/* speed.exe 00792230 FUN_00792230; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 007921d0 FUN_007921d0
 * calls 0045ce40 FUN_0045ce40
 */

void FUN_00792230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  DAT_009b41fc = param_1;
  if (2 < param_1) {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    iVar1 = 0xb;
    if (0xb < DAT_009b46d8) {
      iVar1 = DAT_009b46d8;
    }
    if (DAT_009b46dc < iVar1) {
      iVar1 = DAT_009b46dc;
    }
    FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
    FUN_0078a310(param_1,0x20);
    if (param_1 == 6) {
      uVar3 = 0x20;
      uVar2 = FUN_0045ce40(0x20);
      FUN_0078a310(uVar2,uVar3);
    }
    FUN_007921d0(0xb,local_40c,1);
  }
  return;
}

