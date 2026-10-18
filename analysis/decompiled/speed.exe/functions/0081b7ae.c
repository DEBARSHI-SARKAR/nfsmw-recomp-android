/* speed.exe 0081b7ae FUN_0081b7ae; analysis pseudocode, not buildable source.
 * calls 0081ef6f FUN_0081ef6f
 * calls 0081e639 FUN_0081e639
 * calls 0081b1e7 FUN_0081b1e7
 * calls 0081e6ae FUN_0081e6ae
 * calls 0081e874 FUN_0081e874
 */

undefined4 FUN_0081b7ae(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_d0 [68];
  undefined1 local_8c;
  undefined2 local_8a;
  
  uVar1 = FUN_0081e639(local_d0);
  iVar2 = FUN_0081b1e7(uVar1);
  if (iVar2 < 0) {
    uVar1 = FUN_0081b1e7(iVar2);
  }
  else {
    iVar2 = 0;
    do {
      *(undefined4 *)((int)&DAT_009c1b0c + iVar2) = 0;
      *(undefined4 *)((int)&DAT_009c1b34 + iVar2) = 0;
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x20);
    DAT_009c1b2c = 0;
    DAT_009c2251 = 0;
    DAT_009c2254 = 0;
    local_8c = 1;
    local_8a = 0x24;
    FUN_0081ef6f(local_d0,DAT_0090bce4);
    FUN_0081e6ae(local_d0);
    FUN_0081e874(DAT_009c1b50,DAT_009c1af8,param_1);
    uVar1 = 0;
  }
  return uVar1;
}

