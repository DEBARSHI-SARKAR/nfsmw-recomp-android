/* speed.exe 0082a020 FUN_0082a020; analysis pseudocode, not buildable source.
 * calls 00834e6d FUN_00834e6d
 * calls 0082cca0 FUN_0082cca0
 * calls 00834de4 FUN_00834de4
 * calls 00829500 FUN_00829500
 * calls 00834ec8 FUN_00834ec8
 */

bool FUN_0082a020(void)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint local_8;
  
  if (DAT_009c2974 != '\0') {
    FUN_00829500(0xf000000);
  }
  iVar2 = FUN_0082cca0(0xf000000);
  if (iVar2 == 0) {
    if (DAT_009c2974 != '\0') {
      local_8 = 0;
      iVar2 = FUN_00834e6d(&local_8);
      local_8 = (uint)(iVar2 == 0);
      if (local_8 == 0) goto LAB_0082a0eb;
    }
    puVar1 = DAT_009c29a8;
    bVar3 = DAT_009c29a8 != (undefined4 *)0x0;
    DAT_009c29a8 = (undefined4 *)0x0;
    if (bVar3) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = DAT_009c29ac;
    bVar3 = DAT_009c29ac != (undefined4 *)0x0;
    DAT_009c29ac = (undefined4 *)0x0;
    if (bVar3) {
      (**(code **)*puVar1)(1);
    }
    if (DAT_009c2974 != '\0') {
      DAT_009c2964 = 0;
      FUN_00834ec8(1);
    }
    iVar2 = DAT_009c29b0;
    if ((DAT_009c29b0 != 0) && (FUN_00834de4(), DAT_009c298c != (code *)0x0)) {
      (*DAT_009c298c)(iVar2);
    }
    DAT_009c29b0 = 0;
    DAT_009c2974 = '\0';
  }
LAB_0082a0eb:
  return DAT_009c2974 == '\0';
}

