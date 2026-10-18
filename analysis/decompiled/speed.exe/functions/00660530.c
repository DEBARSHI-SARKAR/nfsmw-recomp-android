/* speed.exe 00660530 FUN_00660530; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0064c790 FUN_0064c790
 * calls 0065f740 FUN_0065f740
 * calls 0065aed0 FUN_0065aed0
 * calls 007c66d0 _malloc
 * calls 0065f680 FUN_0065f680
 * calls 0065f7a0 FUN_0065f7a0
 */

void FUN_00660530(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a19e;
  local_c = ExceptionList;
  if (DAT_009258c8 != 0) {
    ExceptionList = &local_c;
    FUN_00460c70(local_110,"ReplayJoylog.jlg");
    if (local_110[0] != '\0') {
      iVar1 = FUN_0065f7a0(local_110);
      if (iVar1 != 0) {
        FUN_0065f680(local_110,1,1);
        uVar2 = FUN_0065f740(local_110);
        pvVar3 = _malloc(0x4118);
        local_4 = 0;
        if (pvVar3 == (void *)0x0) {
          DAT_009258dc = 0;
        }
        else {
          DAT_009258dc = FUN_0064c790(local_110,uVar2);
        }
        DAT_009258d4 = 1;
        ExceptionList = local_c;
        return;
      }
    }
    pvVar3 = _malloc(0x4118);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      DAT_009258e0 = 0;
    }
    else {
      DAT_009258e0 = FUN_0064c790("CaptureJoylog.jlg",0);
    }
    local_4 = 0xffffffff;
    DAT_009258d8 = 1;
    iVar1 = FUN_0065f680("CaptureJoylog.jlg",6,1,pvVar3);
    if (iVar1 != 0) {
      FUN_0065aed0(iVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_009258d8 = 0;
  }
  ExceptionList = local_c;
  return;
}

