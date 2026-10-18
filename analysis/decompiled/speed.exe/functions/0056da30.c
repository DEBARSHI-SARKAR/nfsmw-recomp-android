/* speed.exe 0056da30 FUN_0056da30; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 0056bb80 FUN_0056bb80
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_0056da30(undefined4 *param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 local_20 [32];
  
  bVar1 = false;
  if ((param_2 != 0) && (iVar2 = FUN_00460c50(param_2), 0 < iVar2)) {
    bVar1 = true;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (!bVar1) {
    if (param_3 == '\x01') {
      iVar2 = FUN_0056bb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0056bb80();
      }
    }
    else {
      iVar2 = FUN_0056bb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0056bb80();
      }
    }
    FUN_00460ca0(local_20,iVar2,0x20);
    FUN_00460ca0(param_1,local_20,0x20);
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  FUN_00460ca0(param_1,param_2,0x20);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

